
//�Ȳ�Ҫ���������Щ�����ĺ��壬���ȸ����дһ���򵥵Ĳ��������ġ�������Windows����

#include <windows.h>

int WINAPI WinMain(

HINSTANCE hInstance,

HINSTANCE hPrevInstance,

LPSTR lpCmdLine,

int nCmdShow

){

// ����API ����MessageBox

int nSelect = MessageBox(NULL, TEXT("���,����Դ�������windows��̵�����"), TEXT("Դ�����Ʒ����ֹת�أ�"), MB_OKCANCEL);

if(nSelect == IDOK){

MessageBox(NULL, TEXT("�����ˡ�ȷ������ť"), TEXT("��ʾ"), MB_OK);

}else{

MessageBox(NULL, TEXT("�����ˡ�ȡ������ť"), TEXT("��ʾ"), MB_OK);

}

return 0;

}
