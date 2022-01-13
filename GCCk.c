#include "GCCk.h" //自定義頭文件
#include "mFunctions.c"//自定義函數
#include<stdio.h>
//Input and Output operations can also be performed in C++ using the C Standard Input 
//	and Output Library (cstdio, known as stdio.h in the C language).
//	This library uses what are called streams to operate with physical devices such as keyboards,
//	printers, terminals or with any other type of files supported by the system. 
//	Streams are an abstraction to interact with these in an uniform way; 
//	All streams have similar properties independently of the individual characteristics 
//	of the physical media they are associated with.
#include <string.h>
//	This header file defines several functions to manipulate C strings and arrays.
//#include <wiringPi.h>
//#include <wiringSerial.h>
#include <unistd.h>	//linux 
#include <stdlib.h> 
//	This header defines several general purpose functions, including dynamic memory management, 
//	random number generation, communication with the environment, 
//	integer arithmetics, searching, sorting and converting.
#include <time.h>	
//This header file contains definitions of functions to get and manipulate date and time information.
//#include "Serial.h"
//pscp g:\WuNianJi\GCC\GCCK.c pi@192.168.3.200:/home/pi/jg/P8864-SMD/gcc/

// gcc -trigraphs  GCCK.c -o a.out
#define False 0 //常量
//#define True 1 //常量

int Ex01() {	//输入和加法
	int a,b;

	printf("加法实例--------------------\n");
    printf("输入a: \t");
    scanf("%d",&a);
	printf("输入b: \t");
    scanf("%d",&b);
    printf("a + b = %d \n ", a+b );
	
	Publica();
	return 0;	
}

//变量类型和长度
int Ex02(){	
	//C语言变量类型
	//char 字符
	//short 短整型 %d
	//int 整型
	//long 长整型
	//long long 长长整型
	//float 浮点型 %f
	//double 双精度 %lf
	char a;
	short b;
	int c;
	long d;
	long long e;
	float f;
	double g;
	printf("变量占用的空间--------------------\n");
	printf("char字符 长度：\t\t\t %ld byte\n", sizeof(a) );
	printf("short短整型 长度：\t\t %ld byte\n", sizeof(b) );
	printf("int整型 长度：\t\t\t %ld byte\n", sizeof(c) );
	printf("long长整型 长度：\t\t %ld byte\n", sizeof(d) );
	printf("long long长长整型 长度：\t %ld byte\n", sizeof(e) );
	printf("float浮点型 长度：\t\t %ld byte\n", sizeof(f) );
	printf("double双精度 长度：\t\t %ld byte\n", sizeof(g) ); 
	
	Publica();
	return 0;	
}

int Ex03(){
	int date;
	enum DAY {	//枚举常量
		MON=1, TUE, WED, THU, FRI, SAT, SUN	//默认初值是0，定义赋初值		
	};
	
	enum DAY day=THU;
	date = day;
	day = FRI;
	
	printf("枚举实例--------------------\n");
	printf("day的值是：%d\n",day);
	printf("MON的值是：%d\n",MON);
	printf("TUE的值是：%d\n",TUE);
	printf("WED的值是：%d\n",WED);
	printf("THU的值是：%d\n",THU);
	printf("FRI的值是：%d\n",FRI);
	printf("SAT的值是：%d\n",SAT);
	printf("SUN的值是：%d\n",SUN);
	printf("date的值是：%d\n",date);
	Publica();
	return 0;	
}

int Ex04(){	//字符串、字符数组
	int q;
	char arr_A[] = "我是一个字符串";
	char arr_B[] = {'I','K','O','Y','Z','F','C','\0'};
	char arr_C[] = {'I','K','O','Y','Z','F','C'};//没有结尾终止符号
	
	printf("arr_A的内容是%s\t,长度是：%ld。\n",arr_A,strlen(arr_A));
	printf("arr_B的内容是%s\t,长度是：%ld。\n",arr_B,strlen(arr_B));
	printf("arr_C的内容是%s\t,长度是：%ld。\n",arr_C,strlen(arr_C));//长度随机
	printf("(测试三字母词 ??)\n"); //gcc 版默认关闭， -trigraphs to enable 
	printf("(测试三字母词 \?\?)\n"); // -trigraphs to enable	
	
	Publica();
	return 0;
}

int Ex05() {//数组
	int m_Array[10];
	 for (int i = 0; i<10; i=i+1){
		 m_Array[i] = i * 5;
	 }
	 for (int j = 0; j<10; j=j+1){
		 printf("m_Array[%d]:%d\t",j, m_Array[j]);
		 if (j%3==0){
			 printf("\n");
		 }
	
	 } 
	 printf("\n");

	 int z=9;
	 while(z>=0){
		 printf("m_Array[%d]:%d\t",z, m_Array[z]);
		 z=z-1;		 
		 if(z%4==0){
			 printf("\n");
		 }
	 }
	 printf("\n");
	 Publica();
	 return 0;
	
}
//串口------------------
int Ex06(){
	printf("跳過\n");
	Publica();
	return 0;
}

 /*
int Ex06(){
int fd,y=0,z;
    int nread,i;
    char buff[9]="Hello\n";
	
		if((fd=open_port(fd,1))<0){
			perror("open_port error");
			return 0;
		}
		
		if((i=set_opt(fd,115200,8,'N',1))<0){
			perror("set_opt error");
			return 0;
		}
    printf("fd=%d\n",fd);
//    fd=3;
	
	for(int i=0;i<60000;i++){
		
		nread=read(fd,buff,19);
		usleep(200000);
		
		//while(buff[y] != 0x59 ){
		//	y++ ;
			
		//}
		printf("%d nread=%d:",i,nread);
		for(int m=0;m<=9;){
			printf(" %x",buff[y+m]);
			m++;
		}
		printf("\n");
		//y=0;
	}

	
    close(fd);
    return 0;
 }
*/
//---<位操作符>-----
int Ex07(){
	int a = 1,b = 1  ;
	
	printf("a=%d\n", a);
	a = a << 1;
	a = a|b;
	printf("a=%d\n", a);
	a = a << 2;
	a = a^b; //异或
	printf("a=%d\n", a);
	a = a >> 3;
	printf("a=%d\n", a);
	a = ~a;
	printf("a=%d\n", a);
	printf("sizeof a=%ld\n",sizeof a);
	a = ~a;
	printf("a=%d\n",a);	
	
	Publica();	
	return 0;
}
//---<静态变量>---
int Ex08a(){
	int p=1;
	p++;
	printf("p=%d\n",p);
	return 0;
}

int Ex08b(){
	static int P=1;
	P++;
	printf("P=%d\n",P);
	return 0;
}


int Ex08(){
	int q;
	for(int a=1;a<=10;a++){
		
		Ex08a();
		Ex08b();
	}
	
	Publica();
	return 0;
}

int* Ex09a(){
	int a=20,i=1;
	static int iQueue[21];
	iQueue[0]=20;
	srand((unsigned)time(NULL));
	
	//a = sizeof(iQueue)/sizeof(int);
	
	do {		
		iQueue[i] = rand()%51;		//产生 0~50 的随机数		
		i++;
		usleep(100000);
	}while(i<=iQueue[0]);	
	
	return iQueue;
}

int* Ex09b(){
	int* iQueue;
	int a;
	iQueue = Ex09a();
	
	a = *iQueue;
	
	printf("隨機數數量%d：\n",a);	
	printf("生成的隨機數是：\n");
	
	for(int i=1;i<=a;i++){
		if (i>*iQueue) { break ;}
		printf("第%d個是：[%d]\n ", i,*(iQueue+i));
	}
	
	return iQueue;
	
}

int* Ex09c(){
	int* iQueue;
	iQueue = Ex09b();
	
	int a=*iQueue,b;
	
	
	do{
		for(int i=1 ; i<a;i++){
		
			if (*(iQueue+i)>*(iQueue+i+1)) {
				b=*(iQueue+i+1);
				*(iQueue+i+1)=*(iQueue+i);
				*(iQueue+i)=b;			
			}		
		
		}
	}while(a--)	;
	
	a=*iQueue;
	printf("完成排序\n");
	for(int i=1;i<=a;i++){
		if (i>*iQueue) { break ;}
		printf("第%d個是：[%d]\n ", i,*(iQueue+i));
	}
	
	printf("\n輸入'0'返回\n");
	scanf("%d",&a);
	
	return iQueue;
}

int Ex09(){
	
	int* iQueue;
	iQueue = Ex09c();
	
	int a = *iQueue,iL,iR;
	iL=1;iR=a;
	
	int iList[a];
	
	for (int i=0 ; i<=a;i++){
		iList[i]=0;		
	}
	
	do{
			
		iList[iL-1] = *(iQueue+iL);
		iList[iR-1] =*(iQueue+iR);
		system("clear");
		for(int j=0;j<a;j++){				
			printf("[%d]\n",iList[j]);					
		}
		iL++;
		iR--;		
		sleep(1);
		
		
	}while(iL<=iR);
		
	Publica();
	return 0;
	
}

int Ex10(){
	
	system("clear");
	printf("搜索指定數是否在數組中。\n");
	int* iQueue;
	iQueue = Ex09c();
	
	int a,iL,iR;
	iL=1;iR=*iQueue;
	//int i = iR/2+iL;
	
	sleep(2);
	printf("生成數組並排序完成\n");
	
	for(int i=1 ; i<=*iQueue ; i++){
		if (i>*iQueue) { break ;}
			printf("[%d]",*(iQueue+i));
	}
	
	printf("\n輸入一個數：\n");
	scanf("%d",&a);
	
	int j=iR/2;
	do {
		if (a==*(iQueue+j)) {
			printf("%d是在%d位置\n",a,j);
			goto Target;
			}
		else if (a>*(iQueue+j)){
			iL = j+1;		
			}
		else if(a<*(iQueue+j)){
			iR = j-1;		
			}
		if (iR<iL)  {
			printf("%d 沒有找到\n",a);
			goto Target;
			}	
		j = (iR+iL)/2;
		//printf("[%d]-[%d]",iL,iR);

	}while(1);
	
	
	Target: Publica();
	return 0;
}

int Ex11a(int i){
	for (int j=2 ; j<=(i/2+1) ; j++) {
		if (i%j == 0) {
			return 0;
		}
		
	return i;
		
	}
		
}

int Ex11(){
	int iPrime[31000] = {1,0};
	int iTemp;
	
	system("clear");
	printf("計算六萬以內的素數：\n");
	for (int i=1 ; i<=60000 ; i++ ){
		iTemp = Ex11a(i);
		if (iTemp != 0){
			iPrime[iPrime[0]] = iTemp;
			printf("[%d]",iPrime[iPrime[0]]);
			iPrime[0]++;
			
		}
	}
	
	
	for (int i=1;i<iPrime[0];i++){
		if (iPrime[i]==0) {break;}
		printf("[%d]",iPrime[i]);		
	}
	printf("\n 共有%d個素數。\n",iPrime[0]);
	
	Publica();
	return 0;
}

int Ex12a(unsigned int uiNumber){
	
	if(uiNumber/10 > 0) {
		Ex12a(uiNumber/10);		
	}
			
	printf("[%d]",uiNumber%10);	
	
	
	return 0;
}

int Ex12b(unsigned int* uiNumber){
	printf("-%d-\n",uiNumber[0]);
	if (uiNumber[0] >3) {
		uiNumber[0] -=1;
		Ex12b(uiNumber);		
		//printf("-%d-",uiNumber[0]);
	}
	printf("-%d-\n",uiNumber[0]);
	*(uiNumber+uiNumber[0])=*(uiNumber+(uiNumber[0]-1))+*(uiNumber+(uiNumber[0]-2));
	
	if (uiNumber[0]<50) {
		uiNumber[0]++;
	}
	//Publica();
	return 0;
}

int Ex12(){
	unsigned int uiNumber = 0;
	printf("递归：\n");
	scanf("%*[^\n]%*c");
	printf("输入一个数：\n");
	scanf("%d",&uiNumber);
	
	Ex12a(uiNumber);
	
	Publica();
	
	static unsigned int uiNumberA[51];
	uiNumberA[0] = 50;
	uiNumberA[1] = 1;
	uiNumberA[2] = 1;
	Ex12b(uiNumberA);
	
	printf("=================\n");
	
	for(int i=1 ; i<=50;i++){
		
		printf("[%u]",uiNumberA[i]);
	}
	
	Publica();
	return 0;
	
}


int Ex15(){
	printf("\n\n");
	printf("----------異或----------\n");
	int i=3333,j=9999;
	printf("i=%d  j=%d\n",i,j);
	i = i ^ j;
	j = i ^ j;
	i = i ^ j;
	printf("i = i ^ j\n");
	printf("j = i ^ j\n");
	printf("i = i ^ j\n");
	printf("i=%d  j=%d\n",i,j);
	printf("----------十進制轉換二進制----------\n");
	unsigned int y[33] = {32}; 
	j=0;
	printf("輸入一個整數：\n");
	scanf("%d",&i);
	for (int x =1 ; x<=y[0] ; x++){
		if ((i&1)==1) {
			j++;
			y[x]=1;
		}
		i = i >> 1;
		//printf("i=%d  ",i);
	}
	
	y[0] = j;
	
	printf("【%d】- ",y[0]);
	for (int x=32 ; x>=1 ; x--){
		
		printf("[%d]",y[x]);
		
	}
	printf("\n----------sizeof操作符----------\n");
	printf("----------sizeof 等同于 sizeof()----------\n");
	printf("----------sizeof()括號內的表達式不參與計算----------\n");
	Publica();
	return 0;	
}

int Ex16(){
	
	struct LiDAR sP8864 ={23.3 ,150.2,1100}; 
	struct LiDAR *p=&sP8864;
	printf("\n----------結構體----------\n");
	
	printf("struct LiDAR {\n");
	printf("	float fMill;\n");
	printf("	float fAngle;\n");
	printf("	int iStrength;\n");
	printf("};\n\n");	
	
	printf("p->fMill;p->fAngle;p->iStrength\n");
	printf("距離：%.2f\n",p->fMill);	
	printf("角度：%.2f\n",p->fAngle);	
	printf("強度：%d\n\n",p->iStrength);	
	
	printf("sP8864.fMill;sP8864.fAngle;sP8864.iStrength\n");
	printf("距離：%.2f\n",sP8864.fMill);	
	printf("角度：%.2f\n",sP8864.fAngle);	
	printf("強度：%d\n",sP8864.iStrength);	
	
	struct LiDAR sP886[10]; 
	sP886[0].fMill=9;
	sP886[0].fAngle=98;
	sP886[0].iStrength=6655;
	printf("struct LiDAR sP886[10];sP886[0].fMill=9; \n");
	printf("距離：%.2f\n",sP886[0].fMill);	
	printf("角度：%.2f\n",sP886[0].fAngle);	
	printf("強度：%d\n",sP886[0].iStrength);	
	
	
	Publica();
	return 0;	
	
}

//全局变量定义处----------
//同名变量局部变量优先
//------------------------
int main(){	
	const int True = 1; //常量
	int Select=0 ;
	printf("C语言备忘（2021.11）\n");
	int (*iExFun[])() = {NULL,Ex01,Ex02,Ex03,Ex04,Ex05,Ex06,Ex07,Ex08,Ex09,Ex10,
						     Ex11,Ex12,Ex13,Ex14,Ex15,Ex16,Ex17,Ex18,Ex19,Ex20,
							 Ex21};
	while(True){
		system("clear");		//清屏
		printf("\n");
		printf("    ****************************************************************************************\n");
		printf("    *  1:加法  2:变量长度  3:枚举常量  4:字符串    5:数组     6:串口  7:移位    8:静态变量 *\n");
		printf("    *  9:隨機數   10:搜索 11:素數     12:遞歸     13:三子棋  14:掃雷 15:操作符 16:結構體   *\n");
		printf("    * 17:指針1    18:低端?19:指針2    20:指針傳參 21:str函數 22:     23:       24:         *\n");
		printf("    *                                                                                      *\n");
		printf("    *                                                                          0:退出      *\n");
		printf("    * mzhyu 20220103 -- C语言筆記                                                          *\n");
		printf("    ****************************************************************************************\n");
		printf("\n--------<輸入序號>--------\n");
		scanf("%d",&Select);
		
		if(0<Select && Select<=21) {
			(*iExFun[Select])();
		}
		else if(Select==0){
			printf("\n--------<退出程序>--------\n");
			return 0;			
		}
		else{
			printf("--------<输入错误，重新输入！>--------\n\n");
			scanf("%*[^\n]%*c");
		}
/*		
		switch( Select) { 

			case 1:	Ex01();		break;
			case 2: Ex02();		break;
			case 3: Ex03();		break;
			case 4: Ex04();		break;
			case 5: Ex05();		break;
			case 6: Ex06();		break;
			case 7: Ex07();		break;
			case 8: Ex08();		break;
			case 9: Ex09();		break;
			case 10: Ex10();	break;	
			case 11: Ex11();	break;	
			case 12: Ex12();	break;
			case 15: Ex15();	break;
			case 16: Ex16();	break;	
			case 17: Ex17();	break;
			case 18: Ex18();	break;	
			case 19: Ex19();	break;
			case 20: Ex20();	break;
			case 0: return 0;
			default: printf("输入错误，重新输入！\n\n");
			scanf("%*[^\n]%*c");
		}
*/
	}
	return 0;
} 
