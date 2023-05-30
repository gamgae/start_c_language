#include <stdio.h> /*standard input output�� ���Ӹ�. �⺻ ����� �Լ��� ����ִ�*/
#include <stdlib.h> 

int main(void)
{

	system("pause");

	/*
	 * �⺻ ��� + �����
	 * ����ڴ� ���ڴ� �ƴ����� ��¹�Ŀ� ������ �ִ� ���ڸ� �ǹ��Ѵ�.
	*/


	printf("HELLO WORLD\n"); /*\n [new line] �̰� ������ �ǹ��ϴ� �������*/
	//HELLO WORLD

	printf("HELLO\tWORLD\n"); /*\t [tab] �̰� ���� �ǹ��ϴ� �������*/
	//HELLO   WORLD

	printf("Goo1\boD\n"); /*\b [back space] �̰� Ŀ���� �������� ��ĭ �ű�� �������*/
	//GoooD

	printf("Dingdong\a\n"); /*\a [alert] �̰� ���Ҹ��� ���� ������� ��η�*/
	//Dingdong

	printf("Dingdong\rW\n"); /*\r [carriage return] �̰� Ŀ���� �� ������ �ű䤤 �������*/
	//Wingdong



	/*
	* ������ �Ǽ� ����
	 * %d [decimal]
	 * %lf [long float]
	*/
	printf("%d\n", 10); // ���� ���
	//10

	printf("%lf\n", 3.1); // �Ҽ��� ���� 6�ڸ����� ���(�⺻)
	//3.100000

	printf("%.1lf\n", 3.15); //�Ҽ��� ���� 1�ڸ����� ���, ��°�ڸ����� �ݿø���
	//3.1

	printf("%.10lf\n", 3.151); // �Ҽ��� ���� 10�ڸ����� ���
	//3.1510000000



	/*
	* �������� ��ȯ���ڸ� ����ϱ�
	* ��ȯ������ ������ ��°� ������ �ݵ�� ��ġ�ؾ��Ѵ�.
	*/

	printf("%d�� %d�� ���� %d�Դϴ�.", 1, 2, 1 + 2);
	//1�� 2�� ���� 3�Դϴ�.

	return 0;
}