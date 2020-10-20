#include <stdio.h>
int main()
{

int n,case_no;

scanf("%d",&n);
for(case_no=1; case_no<=n;case_no++)


{
    int a,b,c,d;
    scanf("%d%d%d", &a,&b,&c);

    d=(a+b+c);

    printf("Family %d: %d\n",case_no,d);
}
n++;


return 0;
}
