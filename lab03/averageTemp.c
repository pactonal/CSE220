#include <stdio.h>

float convert(float);

float average(float,float,float,float,float); 

int main(void) {
    
    float temp1,temp2,temp3,temp4,temp5;
    printf("Enter five Fahrenheit temperatures separated by slashes: ");
    scanf("%f/%f/%f/%f/%f",&temp1,&temp2,&temp3,&temp4,&temp5);

    float ctemp1 = convert(temp1);
    float ctemp2 = convert(temp2);
    float ctemp3 = convert(temp3);
    float ctemp4 = convert(temp4);
    float ctemp5 = convert(temp5);
    
    printf("The average temperature in F:");
    printf("%+9.3f\n",average(temp1,temp2,temp3,temp4,temp5)); 
    printf("The average temperature in C:");
    printf("%+9.3f\n",average(ctemp1,ctemp2,ctemp3,ctemp4,ctemp5));

}

float convert(float fahr) {
    float cels = ((fahr - 32) * (5.0f / 9.0f));
    return cels;
}

float average(float a,float b,float c,float d,float e) {
    float avg = (a + b + c + d + e) / 5;
    return avg;
}
