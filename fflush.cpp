#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    double d;
    float f;
     long long int k;
    char j;

    scanf("%d",&n);
    scanf("%lld",&k);
    fflush(stdin);       //fflush clears the input buffer
    scanf("%c",&j);
    scanf("%f",&f);
    scanf("%lf",&d);
    printf("%d\n",n);
    printf("%lld\n",k);
    fflush(stdout);
    printf("%c\n",j);
    printf("%0.2f\n",f);
    printf("%0.9lf",d);
    return 0;

}

