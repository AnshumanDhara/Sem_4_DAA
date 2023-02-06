#include<stdio.h>
#include<conio.h>
#include<math.h>

float fn_1(int);float fn_2(int);float fn_3(int);float fn_4(int);float fn_5(int);float fn_6(int);
float fn_7(int);float fn_8(int);float fn_9(int);float fn_10(int);float fn_11(int);float fn_12(int);
float fn_13(int);float fn_14(int);float fn_15(int);float fn_16(int);float fn_17(int);float fn_18(int);
float fn_19(int);float fn_20(int);float fn_21(int);float fn_22(int);float fn_23(int);float fn_24(int);
float fn_fact(int);


void main()
{
    int start=0,end=100;
    printf("\nTable:-\n");
    printf("\nValue\t\tn\t\t2^(lg n)\t\t(sqrt 2))^(lg n)\t\tln n\t\tlg n\t\tln (ln n)\t\t2^(sqrt (2*(lg n)))\t\t(lg n)^2\t\tlg (lg n)\t\tsqrt(lg n)\t\tn!\n");
    for(int i=start;i<=end;i++)
    {
        printf("\n%d\t\t%.0f\t\t%.0f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f",i,fn_21(i),fn_12(i),fn_17(i),fn_11(i),fn_8(i),fn_7(i),fn_20(i),fn_3(i),fn_19(i),fn_18(i));
        if(i<=20)
        {
            printf("\t\t%.0f",fn_fact(i));
        }
    }
}


// (3/2)^n
float fn_1(int n)
{
    return pow(1.5,n);
}

// n^3
float fn_2(int n)
{
    return n*n*n;
}

// (lg n)^2
float fn_3(int n)
{
    return log2(n)*log2(n);
}

// lg (n!)
float fn_4(int n)
{
    float sum=0;
    for(int i=1;i<n;i++)
    {
        sum+=log2(i);
    }
    return sum;
}

// 2^(2^n)
float fn_5(int n)
{
    return pow(2,pow(2,n));
}

// n^(1/(lg n))
float fn_6(int n)
{
    return pow(n,(1/log2(n)));
}

// ln (ln n)
float fn_7(int n)
{
    return log(log(n));
}

// lg n
float fn_8(int n)
{
    return log2(n);
}

// n*2^n
float fn_9(int n)
{
    return n*pow(2,n);
}

// n^(lg (lg n))
float fn_10(int n)
{
    return pow(n,log2(log2(n)));
}

// ln n
float fn_11(int n)
{
    return log(n);
}

// 2^(lg n)
float fn_12(int n)
{
    return pow(2,log2(n));
}

// 2^(lg n)
float fn_13(int n)
{
    return pow(2,log2(n));
}

// (lg n)^(lg n)
float fn_14(int n)
{
    return pow(log2(n),log2(n));
}

// e^n
float fn_15(int n)
{
    return exp(n);
}

// (lg n)!
float fn_16(int n)
{
    float fact=1;
    for(int i=1;i<=log2(n);i++)
    {
        fact*=i;
    }
    return fact;
}

// (sqrt(2))^(lg n)
float fn_17(int n)
{
    return pow(pow(2,0.5),log2(n));
}

// sqrt(lg n)
float fn_18(int n)
{
    return pow(log2(n),0.5);
}

// lg (lg n)
float fn_19(int n)
{
    return log2(log2(n));
}

// 2^(sqrt(2*(lg n)))
float fn_20(int n)
{
    return pow(2,pow(2*log2(n),0.5));
}

// n
float fn_21(int n)
{
    return n;
}

// 2^n
float fn_22(int n)
{
    float product=1;
    for(int i=0;i<n;i++)
    product*=2;
    return product;
}

// n (lg n)
float fn_23(int n)
{
    return n*log2(n);
}

// 2^(2^(n+1))
float fn_24(int n)
{
    return pow(2,pow(2,n+1));
}

// n!
float fn_fact(int n)
{
    float fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}