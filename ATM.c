#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    if(1)
    {
    level1:
    printf("Hallo and Welcome to our Branch\n\n\n");
    level2 :
    do

    {
    printf("Please Choose One Language\n");
    printf("For English press 1\n");
    printf("For Bengali press 2\n");
    printf("For Hindi press 3\n");
    scanf("%d",&a);
    system("cls");
    }while(6 % a != 0);
    switch(a)
    {
    case 1:
        {
            do

            {
            printf("Enter Your ATM card and then press 4\n\n\n\n\n");
            printf("#To Return In The Previous Option press 5\n");
            printf("#To Start From The First Press 6\n");
            scanf("%d",&b);
            system("cls");
            if(b == 5)
            {
                goto level2;
            }
            if(b == 6)
            {
                goto level1;
            }
            if(b == 4)
            {
                level3 :
                    do{
                    printf("How much money You want to withdraw\n");
                    scanf("%d",&c);
                    system("cls");

                    if(c % 100 == 0)
                    {
                        printf("Choose The Way of version of your withdrawing Money\n");
                        d = c / 2000;
                        if(d >= 1)
                        {
                            printf("You can Collect maximum %d Number of 2000 Rupee Note\n",d);
                        }
                        else
                        {
                            printf("You can't take 2000 Rupee Note\n");
                        }
                        e = c / 500;
                        if(e >= 1)
                        {
                            printf("You can Collect maximum %d Number of 500 Rupee Note\n",e);
                        }
                        else
                        {
                            printf("You can't take 500 Rupee Note\n");
                        }
                        f = c / 200;
                        if(f >= 1)
                        {
                            printf("You can Collect maximum %d Number of 200 Rupee Note\n",f);
                        }
                        else
                        {
                            printf("You can't collect 200 Rupee Note\n");
                        }
                        g = c / 100;
                        if(g >= 1)
                        {
                            printf("You can Collect maximum %d Number of 100 Rupee Note\n",g);
                        }
                        else
                        {
                            printf("You can't collect 100 Rupee Note\n");
                        }
                        printf("\n\n\n\n\n");
                        printf("#To return in The Pervious Option press 5\n");
                        printf("#To Start From The First Press 6\n");
                        printf("#To Continue Press 4\n");
                        scanf("%d",&n);
                        if(n == 5)
                        {
                            goto level3;
                        }
                        if(n == 6)
                        {
                            goto level1;
                        }
                        if(n == 4)
                        {
                            goto level4;
                        }
                    }

                    }
                    while(c % 100 != 0);
                    level4:
                    do
                    {
                        printf("Put Your Choise\n");
                        if(d >= 1)
                        {
                            printf("How many RS.2000 You wanna Collect : ");
                            scanf("%d",&h);
                            printf("\n");
                        }
                        else
                        {
                            h = 0;
                        }
                        if(e >= 1 && (h*2000) < c)
                        {
                            printf("How many Rs.500 You wanna Collect : ");
                            scanf("%d",&i);
                            printf("\n");
                        }
                        else
                        {
                            i = 0;
                        }
                        if(f >= 1 && ((h*2000)+(i*500)) < c)
                        {
                            printf("How many Rs.200 You wanna Collect : ");
                            scanf("%d",&j);
                            printf("\n");
                        }
                        else
                        {
                            j = 0;
                        }
                        if(g >= 1 &&((h*2000)+(i*500)+(j*200)) < c)
                        {
                            printf("How many Rs.100 You wanna collect : ");
                            scanf("%d",&k);
                            printf("\n");
                        }
                        else
                        {
                            k = 0;
                        }
                        l = (h*2000)+(i*500)+(j*200)+(k*100);
                     }
                     while(c != l);
                     printf("\n\n\n\n\n#To Go to The previous Step press 5\n");
                     printf("To start From The First Press 6\n");
                     printf("To Continue Press 4\n");
                     scanf("%d",&p);
                     system("cls");
                     if(p == 5)
                     {
                         goto level4;
                     }
                     if(p == 6)
                     {
                         goto level1;
                     }
                     if(p == 4)
                     {
                         goto level5;
                     }
                     system("cls");
                     level5:
                     printf("Collect Your money\n");
                     printf("Press any key to take Your ATM Card : ");
                     scanf("%d",&m);
                     printf("\n");
                     system("cls");
                     if(1)
                     {
                         printf("Take Your ATM Card\nThank You,Visit Again\n");
                     }
            }

            }while(b != 4);

        }
    case 2:
           {
            do

            {
            printf("Enter Your ATM card and then press 4\n\n\n\n\n");
            printf("#To Return In The Previous Option press 5\n");
            printf("#To Start From The First Press 6\n");
            scanf("%d",&b);
            system("cls");
            if(b == 5)
            {
                goto level2;
            }
            if(b == 6)
            {
                goto level1;
            }
            if(b == 4)
            {
                level6 :
                    do{
                    printf("How much money You want to withdraw\n");
                    scanf("%d",&c);
                    system("cls");

                    if(c % 100 == 0)
                    {
                        printf("Choose The Way of version of your withdrawing Money\n");
                        d = c / 2000;
                        if(d >= 1)
                        {
                            printf("You can Collect maximum %d Number of 2000 Rupee Note\n",d);
                        }
                        else
                        {
                            printf("You can't take 2000 Rupee Note\n");
                        }
                        e = c / 500;
                        if(e >= 1)
                        {
                            printf("You can Collect maximum %d Number of 500 Rupee Note\n",e);
                        }
                        else
                        {
                            printf("You can't take 500 Rupee Note\n");
                        }
                        f = c / 200;
                        if(f >= 1)
                        {
                            printf("You can Collect maximum %d Number of 200 Rupee Note\n",f);
                        }
                        else
                        {
                            printf("You can't collect 200 Rupee Note\n");
                        }
                        g = c / 100;
                        if(g >= 1)
                        {
                            printf("You can Collect maximum %d Number of 100 Rupee Note\n",g);
                        }
                        else
                        {
                            printf("You can't collect 100 Rupee Note\n");
                        }
                        printf("\n\n\n\n\n");
                        printf("#To return in The Pervious Option press 5\n");
                        printf("#To Start From The First Press 6\n");
                        printf("#To Continue Press 4\n");
                        scanf("%d",&n);
                        if(n == 5)
                        {
                            goto level6;
                        }
                        if(n == 6)
                        {
                            goto level1;
                        }
                        if(n == 4)
                        {
                            goto level7;
                        }
                    }

                    }
                    while(c % 100 != 0);
                    level7:
                    do
                    {
                        printf("Put Your Choise\n");
                        if(d >= 1)
                        {
                            printf("How many RS.2000 You wanna Collect : ");
                            scanf("%d",&h);
                            printf("\n");
                        }
                        else
                        {
                            h = 0;
                        }
                        if(e >= 1 && (h*2000) < c)
                        {
                            printf("How many Rs.500 You wanna Collect : ");
                            scanf("%d",&i);
                            printf("\n");
                        }
                        else
                        {
                            i = 0;
                        }
                        if(f >= 1 && ((h*2000)+(i*500)) < c)
                        {
                            printf("How many Rs.200 You wanna Collect : ");
                            scanf("%d",&j);
                            printf("\n");
                        }
                        else
                        {
                            j = 0;
                        }
                        if(g >= 1 &&((h*2000)+(i*500)+(j*200)) < c)
                        {
                            printf("How many Rs.100 You wanna collect : ");
                            scanf("%d",&k);
                            printf("\n");
                        }
                        else
                        {
                            k = 0;
                        }
                        l = (h*2000)+(i*500)+(j*200)+(k*100);
                     }
                     while(c != l);
                     printf("\n\n\n\n\n#To Go to The previous Step press 5\n");
                     printf("To start From The First Press 6\n");
                     printf("To Continue Press 4\n");
                     scanf("%d",&p);
                     system("cls");
                     if(p == 5)
                     {
                         goto level7;
                     }
                     if(p == 6)
                     {
                         goto level1;
                     }
                     if(p == 4)
                     {
                         goto level8;
                     }
                     system("cls");
                     level8:
                     printf("Collect Your money\n");
                     printf("Press any key to take Your ATM Card : ");
                     scanf("%d",&m);
                     printf("\n");
                     system("cls");
                     if(1)
                     {
                         printf("Take Your ATM Card\nThank You,Visit Again\n");
                     }
            }

            }while(b != 4);

        }
    case 3:

           {
            do

            {
            printf("Enter Your ATM card and then press 4\n\n\n\n\n");
            printf("#To Return In The Previous Option press 5\n");
            printf("#To Start From The First Press 6\n");
            scanf("%d",&b);
            system("cls");
            if(b == 5)
            {
                goto level2;
            }
            if(b == 6)
            {
                goto level1;
            }
            if(b == 4)
            {
                level9 :
                    do{
                    printf("How much money You want to withdraw\n");
                    scanf("%d",&c);
                    system("cls");

                    if(c % 100 == 0)
                    {
                        printf("Choose The Way of version of your withdrawing Money\n");
                        d = c / 2000;
                        if(d >= 1)
                        {
                            printf("You can Collect maximum %d Number of 2000 Rupee Note\n",d);
                        }
                        else
                        {
                            printf("You can't take 2000 Rupee Note\n");
                        }
                        e = c / 500;
                        if(e >= 1)
                        {
                            printf("You can Collect maximum %d Number of 500 Rupee Note\n",e);
                        }
                        else
                        {
                            printf("You can't take 500 Rupee Note\n");
                        }
                        f = c / 200;
                        if(f >= 1)
                        {
                            printf("You can Collect maximum %d Number of 200 Rupee Note\n",f);
                        }
                        else
                        {
                            printf("You can't collect 200 Rupee Note\n");
                        }
                        g = c / 100;
                        if(g >= 1)
                        {
                            printf("You can Collect maximum %d Number of 100 Rupee Note\n",g);
                        }
                        else
                        {
                            printf("You can't collect 100 Rupee Note\n");
                        }
                        printf("\n\n\n\n\n");
                        printf("#To return in The Pervious Option press 5\n");
                        printf("#To Start From The First Press 6\n");
                        printf("#To Continue Press 4\n");
                        scanf("%d",&n);
                        if(n == 5)
                        {
                            goto level9;
                        }
                        if(n == 6)
                        {
                            goto level1;
                        }
                        if(n == 4)
                        {
                            goto level10;
                        }
                    }

                    }
                    while(c % 100 != 0);
                    level10:
                    do
                    {
                        printf("Put Your Choise\n");
                        if(d >= 1)
                        {
                            printf("How many RS.2000 You wanna Collect : ");
                            scanf("%d",&h);
                            printf("\n");
                        }
                        else
                        {
                            h = 0;
                        }
                        if(e >= 1 && (h*2000) < c)
                        {
                            printf("How many Rs.500 You wanna Collect : ");
                            scanf("%d",&i);
                            printf("\n");
                        }
                        else
                        {
                            i = 0;
                        }
                        if(f >= 1 && ((h*2000)+(i*500)) < c)
                        {
                            printf("How many Rs.200 You wanna Collect : ");
                            scanf("%d",&j);
                            printf("\n");
                        }
                        else
                        {
                            j = 0;
                        }
                        if(g >= 1 &&((h*2000)+(i*500)+(j*200)) < c)
                        {
                            printf("How many Rs.100 You wanna collect : ");
                            scanf("%d",&k);
                            printf("\n");
                        }
                        else
                        {
                            k = 0;
                        }
                        l = (h*2000)+(i*500)+(j*200)+(k*100);
                     }
                     while(c != l);
                     printf("\n\n\n\n\n#To Go to The previous Step press 5\n");
                     printf("To start From The First Press 6\n");
                     printf("To Continue Press 4\n");
                     scanf("%d",&p);
                     system("cls");
                     if(p == 5)
                     {
                         goto level10;
                     }
                     if(p == 6)
                     {
                         goto level1;
                     }
                     if(p == 4)
                     {
                         goto level11;
                     }
                     system("cls");
                     level11:
                     printf("Collect Your money\n");
                     printf("Press any key to take Your ATM Card : ");
                     scanf("%d",&m);
                     printf("\n");
                     system("cls");
                     if(1)
                     {
                         printf("Take Your ATM Card\nThank You,Visit Again\n");
                     }
            }

            }while(b != 4);
           }
    }
 }
}
