#include <stdio.h>
#include <math.h>

float convert(float fahr) {
    return ((fahr - 32) * (5 / 9));
}

float average(float a,float b,float c,float d,float e) {
    return (a + b + c + d + e) / 5;
}

int main(void) {
    float temp1,temp2,temp3,temp4,temp5;
    scanf("%f/%f/%f/%f/%f",&temp1,&temp2,&temp3,&temp4,&temp5);

    float ctemp1 = convert(temp1);
    float ctemp2 = convert(temp2);
    float ctemp3 = convert(temp3);
    float ctemp4 = convert(temp4);
    float ctemp5 = convert(temp5);
    
    printf("%+.3f",average(temp1,temp2,temp3,temp4,temp5)); 
    printf("%+.3f",average(ctemp1,ctemp2,ctemp3,ctemp4,ctemp5));

}
