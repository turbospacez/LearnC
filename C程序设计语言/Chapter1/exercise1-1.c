#include<stdio.h>
main() {
    printf("hello, world\n");
}

// 1.˫���Ų���ͬһ��, �޷�ͨ������ error: missing terminating " character
// 2.˫������ͬһ��, Բ���Ų���ͬһ��, ����ͨ�����������
// 3.����βû��˫����, �޷�ͨ������ error: expected ';' before '}' token
// 4.ɾ��main()��Բ����, �޷�ͨ������ error: expected '=', ',', ';', 'asm' or '__attribute__' before '{' token
//     ������û�г������, ���������ȫ����ʶ��
// 5.ɾ����β������, �޷�ͨ������ error: expected declaration or statement at end of input
// 6.ɾ��include<stdio.h> �޷����ñ�׼��, �����Կ��Ա��������, ������3�� warning
// 7.ɾ��#include��stdio.h, �޷�ͨ������ error: empty filename in #include
