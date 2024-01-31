//Bubble Sort
#include<stdio.h>
#include<conio.h>
void bubbleSort(int dizi[],int size){
	int i,j,gecici;
	  for(i=0;i<size;i++){
	  	for(j=0;j<size-1;j++){
	  		if(dizi[j]>dizi[j+1]){
	  			gecici=dizi[j];
	  			dizi[j]=dizi[j+1];
	  			dizi[j+1]=gecici;
			}//if
	  	}//icfor
	  }//disfor
}//fonk
int main(){
	int array[]={77,4,5,2,9,75,45,12,56,21};
	int i;
	//before
	for(i=0;i<=9;i++){
		printf("A[%d]=%d\n",i,array[i]);
	}
	bubbleSort(array,10);
	printf("********\n");
	//after
	for(i=0;i<=9;i++){
		printf("A[%d]=%d\n",i,array[i]);
	}
	getch();
	return 0;
}
