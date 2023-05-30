#include <stdio.h> /*standard input output의 줄임말. 기본 입출력 함수가 들어있다*/
#include <stdlib.h> 

int main(void)
{

	system("pause");

	/*
	 * 기본 찍기 + 제어문자
	 * 제어문자는 문자는 아니지만 출력방식에 영향을 주는 문자를 의미한다.
	*/


	printf("HELLO WORLD\n"); /*\n [new line] 이건 개행을 의미하는 제어문자임*/
	//HELLO WORLD

	printf("HELLO\tWORLD\n"); /*\t [tab] 이건 탭을 의미하는 제어문자임*/
	//HELLO   WORLD

	printf("Goo1\boD\n"); /*\b [back space] 이건 커서를 왼쪽으로 한칸 옮기는 제어문자임*/
	//GoooD

	printf("Dingdong\a\n"); /*\a [alert] 이건 벨소리가 나는 제어문자임 디로롱*/
	//Dingdong

	printf("Dingdong\rW\n"); /*\r [carriage return] 이건 커서를 맨 앞으로 옮긴ㄴ 제어문자임*/
	//Wingdong



	/*
	* 정수와 실수 찍어보기
	 * %d [decimal]
	 * %lf [long float]
	*/
	printf("%d\n", 10); // 정수 출력
	//10

	printf("%lf\n", 3.1); // 소수점 이하 6자리까지 출력(기본)
	//3.100000

	printf("%.1lf\n", 3.15); //소수점 이하 1자리까지 출력, 둘째자리에서 반올림함
	//3.1

	printf("%.10lf\n", 3.151); // 소수점 이하 10자리까지 출력
	//3.1510000000



	/*
	* 여러개의 변환문자를 사용하기
	* 변환문자의 갯수와 출력값 갯수가 반드시 일치해야한다.
	*/

	printf("%d와 %d의 합은 %d입니다.", 1, 2, 1 + 2);
	//1와 2의 합은 3입니다.

	return 0;
}