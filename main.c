#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int avg(int array[100]);
int max(int array[100]);
int min(int array[100]);

int main(void){
    srand(time(NULL));
    int array[100];
    //γέμισμα πίνακα
    for(int i = 0;i < 100;i++){
        array[i] = rand() % 61 + 20;
    }
    //άναθεση τιμών
    int average = avg(array);
    int mmax = max(array);
    int mmin = min(array);
    return 0;
}

int avg(int array[100]){
    int sum;
    for(int i = 0; i < 100;i++){
        sum = sum + array[i];
    }
    printf("sum is %d\n",sum);
    printf("avg is : %d\n",sum/100);
    return sum/100;
}

int max(int array[100]){
    int max;
    for(int i = 0;i <100;i++){
        if(i == 0) max = array[i];
        else if(array[i] > max) max = array[i];
    }
    printf("max is : %d\n",max);
    return max;
}

int min(int array[100]){
    int min;
    for(int i= 0;i < 100;i++) {
        if(i == 0) min = array[i];
        else if(array[i] < min) min = array[i];
    }
    printf("min is : %d",min);
    return min;
}