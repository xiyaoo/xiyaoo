#include "GCCk.h" //自定義頭文件
#include <stdio.h>
#include <string.h>

struct LiDAR {
		float fMill;
		float fAngle;
		int iStrength;		
	};
	
int Publica(){			//等待返回
	int a;

	scanf("%*[^\n]%*c");
	printf("\n----------輸入'0'返回----------\n");
	scanf("%d",&a);	
	
	return 0;
}


int Ex13(){
	
	printf("\n--------<待完成>--------\n");
	Publica();
	return 0;
}

int Ex14(){
	
	printf("\n--------<待完成>--------\n");
	Publica();
	return 0;
}

//字符串內容交換函數
int Ex17A2B(char *cInputA,char *cInputB){ 
	
	while((*cInputA)!='\0'|| (*cInputB)!='\0' ) {
		
		*cInputA=(*cInputA) ^ (*cInputB);
		*cInputB=(*cInputA) ^ (*cInputB);
		*cInputA=(*cInputA) ^ (*cInputB);
		
		cInputA++;
		cInputB++;		
		
	}
	
	return 0;
}

int Ex17(){
	int y[10] = {0};
	char *p0 = y;
	int *p1 = y;
	long *p2 = y;
	float *p3 = y;
	double *p4 = y;
	
	for (int i = 0;i<10;i++) {
		
		printf("y[%d]=%d ",i,y[i]);
	}
	
	*(p0+1) = 1;	
	printf("\n%d-%d\n",p0,p0+1);
	printf("\n\n*(p0+1) = 1\n");
	printf("(p0+1)-(p0) = %d\n",(p0+1)-(p0));
	for (int i = 0;i<10;i++) {
		
		printf("y[%d]=%d ",i,y[i]);
	}
	
	printf("\n");
	Publica();
	*(p1+1) = 1;	
	printf("%d-%d\n",p1,p1+1);
	printf("\n\n*(p1+1) = 1\n");
	printf("(p1+1)-(p1) = %d\n",(p1+1)-(p1));
	for (int i = 0;i<10;i++) {
		
		printf("y[%d]=%d ",i,y[i]);
	}
	
	printf("\n");
	Publica();
	*(p2+1) = 1;
	printf("%d-%d\n",p2,p2+1);
	printf("\n\n*(p1+1) = 1\n");
	printf("(p2+1)-(p2) = %d\n",(p2+1)-(p2));
	for (int i = 0;i<10;i++) {
		
		printf("y[%d]=%d ",i,y[i]);
	}
	
	printf("\n");
	Publica();
	*(p3+1) = 1.0;	
	printf("%d-%d\n",p3,p3+1);
	printf("\n\n*(p1+1) = 1\n");
	printf("(p3+1)-(p3) = %d\n",(p3+1)-(p3));
	for (int i = 0;i<10;i++) {
		
		printf("y[%d]=%d ",i,y[i]);
	}
	
	printf("\n");
	Publica();
	*(p4+1) = 1.0;	
	printf("%d-%d\n",p4,p4+1);
	printf("\n\n*(p1+1) = 1\n");
	for (int i = 0;i<10;i++) {
		
		printf("y[%d]=%d ",i,y[i]);
	}
	printf("\n");
	
	printf("------<字符串複製>------\n");
	char cInputA[] = {"XXXXXXXXXX"};
	char cInputB[] = {"XXXXXXXXXX"};
	char *pA = cInputA,*pB = cInputB;
	
	printf("------輸入字符串A------\n");
	scanf("%s",cInputA);
	
	printf("------輸入字符串B------\n");
	scanf("%s",cInputB);
	
	printf("\n");
	
	printf("cInputA='%s'\n",cInputA);
	printf("cInputB='%s'\n",cInputB);	
	
	Ex17A2B(pA,pB);
	
	printf("------A<-->B------\n");
	
	printf("cInputA='%s'\n",cInputA);
	printf("cInputB='%s'\n",cInputB);	
	
	Publica();
	return 0;	
}

//---------------------------------------------------------------------------------------
int Ex18(){
	
	int x = 0x1;
	unsigned char y = (unsigned char) x ;
	printf("\n--------<數據存儲順序>--------\n");
	if (y==1) {
		printf("低位在高端\n");
	}
	else {
		printf("低位在低端\n");
	}
	
	Publica();
	return 0;	
}

//--------<字符串指針>---------------------------------------------------------------------------
int Ex19(){
	char *cPs = "Training sets like the ones Google and Facebook have are private" ;
	printf("--------<字符串指針>--------\n");
	printf("char *cPs = “Training sets like the ones Google and Facebook have are private” \n");
	printf("打印首字符：%c\n",*cPs);
	printf("打印字符串：%s\n",cPs);
	
	printf("--------<循環打印字符串>--------\n");
	int i = 0;
	do{
		if (*cPs != 'NULL') {
			printf("%c",*(cPs+i));
			i++;
		} 
		else {break;}
	}while(*(cPs+i) != '\0');
	
	Publica();
	return 0;
	
}

//--------<指針傳參>---------------------------------------------------------------------------
int Ex20a(int *i , int j){
	printf("\n--------<指針傳參打印整數數組>--------\n");
	
	for(int x=0; x<j ;x++){
		
		printf("[%d]",*(i+x));
	}
	
	return 0;
}

int Ex20b(int i[10],int j){
	printf("\n--------<數組傳參打印整數數組>--------\n");
	
	for(int x=0; x<j ;x++){
		
		printf("[%d]",i[x]);
	}
	
	return 0;	
	
}

int Ex20c(int *i,int j){
	printf("\n--------<數組地址傳參打印整數數組>--------\n");
	
	for(int x=0; x<j ;x++){
		
		printf("[%d]",*(i+x));
	}
	
	return 0;	
	
}


int Ex20d(char (*p)[5],int j){
	printf("\n--------<數組指針傳參打印字符數組>--------\n");
	
	for(int x=0 ; x<j ; x++){
		
		printf("%s \n",*(p+x));
	}
	
	return 0;
}

int Ex20e(int (*psi)[5],int j){
	printf("\n--------<數組指針傳參打印整數數組>--------\n");
	
		for(int x=0 ; x<j ; x++){
			for(int y=0 ; y<5 ;y++){
		
				printf("[%d]",*(*(psi+x)+y));
				*(*(psi+x)+y) = x+y;
			}
			printf("\n");
	}
	
}

int Ex20(){
	int i[10] = {1,2,3,4,5,6,7,8,9,0};
	int j = sizeof(i)/sizeof(i[0]);//數組數字個數計算
	int *pi = i;
	
	char s[3][5] = {{"abor\0"},{"bdos\0"},{"cabsl"}};
	
	int is[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
	
	int (*psi)[5] = is ; 
	
	char (*ps)[5] = s;
	
	Ex20a(i,j);
	
	Ex20b(i,j);
	
	Ex20c(&i,j);
	
	//Ex20a(&i,j);
	
	Ex20a(pi,j);
	
	Ex20d(ps,3);
	
	Ex20e(psi,3);	
	
	printf("\n--------<數組指針傳參賦值>--------\n");
	for(int x=0 ; x<3 ; x++){
		for(int y=0 ; y<5 ; y++){
			printf("[%d]",is[x][y]);
		}
		printf("\n");
		
	}
	
	Publica();
	return 0;
}

int Ex21(){
	char* arr = "a detailed";
	char Carr[10];
	char *parr = arr;
	printf("--------<打印arr字符>--------\n");
	printf("%s--%ld\n",arr, strlen(arr) );
	printf("--------<打印*Parr字符>-------\n");
	printf("%s--%ld\n",parr,strlen(parr));
	printf("--------<修改arr字符內容>-------\n");
	scanf("%s",Carr);
	//parr = Carr;
	arr = Carr;
	//arr = parr;
	printf("--------<打印arr字符>--------\n");
	printf("%s--%ld\n",arr,strlen(arr));
	Publica();
	return 0;
	
}