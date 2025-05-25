#include <windows.h>
#include <urlmon.h>
#include <shlobj.h>
#include <fstream>
#include <iostream>
#include <thread>
#include <chrono>

#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "shell32.lib")

// Download image from URL
void downloadWallpaper(const std::string& url, const std::string& filepath) {
    HRESULT hr = URLDownloadToFileA(NULL, url.c_str(), filepath.c_str(), 0, NULL);
    if (hr != S_OK) {
        std::cout << "Failed to download image.\n";
    } else {
        std::cout << "Downloaded successfully.\n";
    }
}

// Set the downloaded image as wallpaper
void setWallpaper(const std::string& filepath) {
    SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID)filepath.c_str(), SPIF_UPDATEINIFILE | SPIF_SENDWININICHANGE);
    std::cout << "Wallpaper changed.\n";
}

// Add this program to Windows Startup
void addToStartup() {
    char path[MAX_PATH];
    GetModuleFileNameA(NULL, path, MAX_PATH);

    char startupPath[MAX_PATH];
    SHGetFolderPathA(NULL, CSIDL_STARTUP, NULL, 0, startupPath);

    std::string shortcutPath = std::string(startupPath) + "\\WallpaperChanger.lnk";

    // Check if shortcut already exists
    std::ifstream f(shortcutPath);
    if (f.good()) {
        std::cout << "Already in startup.\n";
        return;
    }

    // Create .bat file to run exe (simple startup method)
    std::ofstream bat(shortcutPath + ".bat");
    bat << "start \"\" \"" << path << "\"";
    bat.close();

    MoveFile((shortcutPath + ".bat").c_str(), shortcutPath.c_str());

    std::cout << "Added to startup.\n";
}

int main() {
    addToStartup();

    std::string url = "https://c4.wallpaperflare.com/wallpaper/1011/752/932/nature-landscape-waterfall-wallpaper-preview.jpg";
    std::string filepath = "C:\\Users\\Public\\wallpaper.jpg";

    while (true) {
        downloadWallpaper(url, filepath);
        setWallpaper(filepath);
        std::this_thread::sleep_for(std::chrono::minutes(10));
    }

    return 0;
}
