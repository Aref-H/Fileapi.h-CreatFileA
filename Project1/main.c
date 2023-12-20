#include <Windows.h>
#include <stdio.h>

int main()
{
	char* path = ("E:\\Project\\New\\Visual stadio\\Project1\\New folder\\Aref.txt");

    HANDLE hFile;
    hFile = CreateFileA(path,               // file to open
        GENERIC_READ,          // open for reading
        FILE_SHARE_READ,       // share for reading
        NULL,                  // default security
        OPEN_EXISTING,         // existing file only
        FILE_ATTRIBUTE_NORMAL, // normal file
        NULL);                 // no attr. template

    char buffer[1024];
    DWORD bytesRead;

    while (ReadFile(hFile, buffer, sizeof(buffer), &bytesRead, NULL) && bytesRead > 0) {
        printf("%.*s", bytesRead, buffer);
    }
    CloseHandle(hFile);

	return 0;
}

/*#include <Windows.h>
#include <stdio.h>

int main()
{
    //char* path = ("E:\\Project\\New\\Visual stadio\\Project1\\New folder\\Aref.txt");

    HANDLE hFile;
    hFile = CreateFileA("E:\\Project\\New\\Visual stadio\\Project1\\New folder\\Aref.txt",               // file to open
        GENERIC_READ,          // open for reading
        FILE_SHARE_READ,       // share for reading
        NULL,                  // default security
        OPEN_EXISTING,         // existing file only
        FILE_ATTRIBUTE_NORMAL, // normal file
        NULL);                 // no attr. template

    char buffer[1024];
    DWORD bytesRead;

    while (ReadFile(hFile, buffer, sizeof(buffer), &bytesRead, NULL) && bytesRead > 0) {
        printf("%.*s", bytesRead, buffer);
    }
    CloseHandle(hFile);

    return 0;
}*/

