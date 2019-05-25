#include<stdio.h>
int main ()
{
  int number, N;
  int a=2, cnt;
  scanf("%d %d",&number, &N);
  for(cnt=1; cnt<=N &&a>0; cnt++){
    scanf("%d",&a);
    if(a>number){
      printf("Too big");
    }
    if(a<number){
        printf("Too small");
      }
    if(a==number){
        if(cnt==1){
          printf("Bingo!");
        }
        if(cnt<=3&&cnt>1){
          printf("Lucky You!");
        }
        if(cnt>3&&cnt<=N){
          printf("Good Guess!");
        }
    }
}
  if(cnt>N||cnt<0){
    printf("Game Over!");
    return 0;
	}
}
