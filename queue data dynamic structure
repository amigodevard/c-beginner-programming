#include <stdio.h>

#define maxsize  5
//static structure with static memory allocation

int size = 0;
int front = 0;
int rear = 0;

struct dat
{
    float num;
};

struct dat datas[maxsize];

void enqueue(){
    if(size < maxsize){
    size ++;
    printf("enter the number for new data: ");
    scanf("%f", &datas[rear].num);
    rear = (rear + 1) % maxsize;
    
    } else printf("max data size has reached\n");

};

void dequeue(){
    if(size != 0){
    front = (front + 1) % maxsize;
    size --;
    }
    else printf("no data to dequeue\n");
};

void read(){
    printf("%d datas found\n", size);

    int i = front;
    while(i != rear){
        printf("\ndata %d:\n num = %f\n",i , datas[i].num);

        i = (i + 1)% maxsize;
    };
    printf("\n");
};

void main(){
    while (1)
    {
    printf(" 1. enqueue\n 2. dequeue\n 3. raedall\n 4. exit\nchoose:");
    int choice;
    scanf("%d", &choice);

        if(choice == 1) enqueue();
        if(choice == 2) dequeue();
        if(choice == 3) read();
        if(choice == 4) break;
    }
}


