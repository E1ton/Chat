#pragma comment(lib,"ws2_32.lib")
#include <iostream>
#include <winsock2.h>
#include <windows.h>

using namespace std;

int main() {
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2,2), &wsaData);
    if(HIBYTE(wsaData.wVersion) != 2 || LOBYTE(wsaData.wVersion) != 2) {
        cout << "Fail...：" << GetLastError() << endl;
        return -1;
    }
    cout << "Success!" << endl;
    //socket(AF_INET)
}