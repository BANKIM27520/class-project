#include<stdio.h>
int n;
int c=0,j=0,b=0,a=0;
struct voter{
    char name[50];
    int age;
};
struct voter s[50];
void voter()
{
    printf("ENTER TOTAL NO. OF VOTERS:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("ENTER THE NAME OF %d VOTER:",i);
        scanf("%s",s[i].name);
        printf("ENTER THE AGE OF VOTER %d:",i);
        scanf("%d",&s[i].age);
    }
}
void age()
{
    int found=0;
    for(int i=1;i<=n;i++)
    {
        if(s[i].age>=18)
        {
            printf("ELIGIBLE TO GIVE VOTE%d\n",i);
        }
        else
        {
            printf("THE USER %s not eligible to vote",s[i].name);
            printf("REMOVING NAME FROM VOTER LIST\n");
            s[i]=s[i+1];
            n--;
        }
    } 
}
void vote()
{
    int choice;
    for(int i=1;i<=n;i++)
    {
        printf("VOTE NOW %s\n",s[i].name);
        printf("1.BJP\n2.CONGRESS\n3.AAP\n4.UPES\n");
        printf("ENTER YOUR CHOICE:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                c++;
                break;
            case 2:
                j++;
                break;
            case 3:
                b++;
                break;
            case 4:
                a++;
                break;
            default:
                printf("INVALID CHOICE\n");
                i--;
                break;
        }
    }
}
void calculate()
{
    printf("TOTAL VOTES FOR BJP:%d\n",c);
    printf("TOTAL VOTES FOR CONGRESS:%d\n",j);
    printf("TOTAL VOTES FOR AAP:%d\n",b);
    printf("TOTAL VOTES FOR UPES:%d\n",a);
    if(c>j && c>b && c>a)
    {
        printf("BJP WINS THE ELECTION");
    }
    else if(j>c && j>b && j>a)
    {
        printf("CONGRESS WINS THE ELECTION");
    }
    else if(b>c && b>j && b>a)
    {
        printf("AAP WINS THE ELECTION");
    }
    else if(a>c && a>j && a>b)
    {
        printf("UPES WINS THE ELECTION");
    }
    else
    {
        printf("ELECTION TIED");
    }
}
int main()
{
    voter();
    age();
    vote();
    calculate();
    return 0;
}




