#include <stdio.h>

int main(){
    int i,j;
    int para=0,rhombus=0,rectangle=0,square=0;

    for(i=1;i<=5;i++){
        int s[4],a[4];

        printf("shape %d sides:\n",i);
        for(j=0;j<4;j++) scanf("%d",&s[j]);
        printf("shape %d angles:\n",i);
        for(j=0;j<4;j++) scanf("%d",&a[j]);

        int sides = (s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]);
        int opp = (s[0]==s[2]&&s[1]==s[3]);
        int right = (a[0]==90&&a[1]==90&&a[2]==90&&a[3]==90);

        if(sides&&right) square++;
        else if(opp&&right) rectangle++;
        else if(sides) rhombus++;
        else para++;
    }

    printf("Rhombus:%d\n",rhombus);
    printf("Squares:%d\n",square);
    printf("Rectangle:%d\n",rectangle);
    printf("Neither:%d\n",para);

    return 0;
}
