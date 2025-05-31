#include<stdio.h>
#include<math.h>

float Circum(float r){
    return(2*M_PI*r);
}

float Area(float r){
    return(M_PI * r * r);
}

void main(){
    float radius,area,circum;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    area=Area(radius);
    circum=Circum(radius);
    printf("\nThe result is :\n");
    printf("Area:%.4f\nCircumference:%.4f",area,circum);
}