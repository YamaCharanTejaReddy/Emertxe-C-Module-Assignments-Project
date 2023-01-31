/*Name:Yama Charan Teja ReddyDate:17/01/2023Description: C program to calculate variance with dynamic arraysSample Execution:Enter the no.of elements : 10Enter the 10 elements:[0] -> 9[1] -> 12[2] -> 15[3] -> 18[4] -> 20[5] -> 22[6] -> 23[7] -> 24[8] -> 26[9] -> 31Variance is 40.000000*/#include<stdio.h>#include<stdlib.h>float variance(int *, int); 									                //Function prototypeint main(){    int n1;       									                        //Variable declaration    float var;    printf("Enter the no.of elements : ");    scanf("%d", &n1);    int *arr = malloc (n1 * sizeof(int));     							        	//Dynamic memory allocation using malloc    printf("Enter the %d elements:\n",n1);    for(int i = 0; i < n1; i++)    {        printf("[%d]-> ", i);        scanf("%d", &arr[i]);    }    var = variance(arr, n1);    printf("Variance is %f", var);}float variance(int *arr, int num)  								                //Funtion definition{    int sum = 0, t = 0;    float mean = 0, sigma = 0;  									       //Variable declaration and initialisation    for(int i = 0; i < num; i++)    {        sum = sum + arr[i]; 									                //sum of elements stored in array    }    mean = sum / num;    for(int j = 0; j < num; j++)  									       //formula : D=num-mean, D^2 and t of D^2    {        arr[j] = arr[j] - mean;   									       //D        arr[j] = arr[j] * arr[j]; 									       //D^2        t = t + arr[j];    }    sigma = (float) t / num;    return sigma;}