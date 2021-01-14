#define WIN32_LEAN_AND_MEAN

#include<windows.h>
#include<WinSock2.h>

int main()
{
	// 启动Windows socket 2.x环境
	WORD ver = MAKEWORD(2,2);
	WSADATA dat;
	WSAStartup(ver, &dat);

	WSACleanup();
	return 0;
}