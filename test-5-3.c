// #include <stdio.h>
// int main()
// {
//     char password[20];
//     printf("请输入密码：>");
//     scanf("%s", password);
//     printf("请确认密码：>");
//     char ch;
//     ch = getchar();
//     while(ch != '\n')
//     {
//         ch = getchar();
//     }
//     if (ch == 'Y')
//     {
//         printf("确认正确");
//     }
//     else
//     {
//         printf("确认失败");
//     }
//     return 0;
// }



// #include <stdio.h>
// int main()
// {

//     return 0;
// }



/*#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct Student)
//int LEN = sizeof(struct Student);
struct Student
{
    long num;
    float score;
    struct Student * next;
};
int n;
struct Student *creak()
{
    struct Student *head;
    struct Student *p1, *p2;
    n = 0;
    p1 = p2 =(struct Student*) malloc(LEN);
    scanf("%ld,%f",&p1->num,&p1->score);
    head = NULL;
    while(p1->num!=0)
    {
        n++;
        if(n==1)
            head=p1;
        else
            p2->next=p1;
            p2 = p1;
            p1 = (struct Student *)malloc(LEN);
            scanf("%ld,%f",&p1->num,&p1->score);
    }
    p2->next=NULL;
    return 0;
}
void print(struct Student *head)
{
    struct Student *p;
    p = head;
    if(head!=NULL)
        do
        {
            printf("%ld %5.1f/n",p->num,p->score);
            p->next;
        }while(p!=NULL);
}

int main()
{
    struct Student *head;
    head = creak();
    print(head);
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int i, n, a, b, q[100000];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d", &a, &b);
        q[i] = b - a;
    }
    for(i=0;i<n-1;i++)
    {
        if(q[i]<=q[i+1])
            q[i+1]=q[i]; 
    }
    printf("%d",q[n-1]);
    return 0;
}*/

#include <stdio.h>
int main()
{
    int n, i, j, sum, count;
    sum = 0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        count = 1;
        for(j=1;j<=i;j++)
        {
            count = count * j;
        }
        sum = sum + count;
    }
    printf("%d", sum);
    return 0;
}