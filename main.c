#include <stdio.h>
#include <stdlib.h>

int Build(int arr[]){
    int num;
    int size=0;

    int counter=0;
    int i=0;



    for(counter=0;counter<20;counter++){
    printf("Please enter the value you want to add \n");
    scanf("%d",&num);
      while(size<20){
        if (num==arr[size]){
           size++;
     }
    else{


          arr[size]=num;
          size++;
}

}
}
    printf("The given elements for the array are\n");
    for(i=0;i<20;i++){
        printf("%d \t",arr[i]);
    }


return arr;
}
int Sum(int arr[]){


    printf("\nThe sum of the array's numbers is= ");

{
    int sum = 0; // initialize sum

    // Iterate through all elements
    // and add them to sum
    for (int i = 0; i < 20; i++)
    sum += arr[i];
    printf("%d",sum);

    return sum;



}
}
int main()
{
    int arr[20];
    Build(arr);
    Sum(arr);
    return 0;
}
