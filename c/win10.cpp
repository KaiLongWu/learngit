
//先不要急于理解这些参数的含义，我先给大家写一个简单的不带黑屏的、真正的Windows程序：

#include <windows.h>

int WINAPI WinMain(

HINSTANCE hInstance,

HINSTANCE hPrevInstance,

LPSTR lpCmdLine,

int nCmdShow

){

// 调用API 函数MessageBox

int nSelect = MessageBox(NULL, TEXT("你好,这是源世界介绍windows编程的例子"), TEXT("源世界出品，禁止转载！"), MB_OKCANCEL);

if(nSelect == IDOK){

MessageBox(NULL, TEXT("你点击了“确定”按钮"), TEXT("提示"), MB_OK);

}else{

MessageBox(NULL, TEXT("你点击了“取消”按钮"), TEXT("提示"), MB_OK);

}

return 0;

}
