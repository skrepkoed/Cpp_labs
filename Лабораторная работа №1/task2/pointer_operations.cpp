#define PR(x) printf("x=%u, *x=%d, &x=%u\n",*x, x, &x)

#include <cstdio>

int main(){
    //�������� ��������� ������������� �������� � �����������:
    //���������� �������
    int arr[]={100,200,300};
    //���������� ���������� �� int
    int* ptr1, *ptr2;
    //��������� ��������� �� ������ ������� �������
    ptr1=arr;
    //��������� ��������� �� ������  ������� �������
    ptr2=&arr[2];
    PR(ptr1);
    //����������� ��������� �� ��������� ������� ������� ����������� �� �������
    ptr1++;
    PR(ptr1);
    PR(ptr2);
    ++ptr2;
    printf("ptr2-ptr1=%u\n", ptr2-ptr1);
}