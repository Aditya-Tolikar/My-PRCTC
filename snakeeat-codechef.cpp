int D/*Eatable length required*/, Len[]/*sorted array of snake length*/, lh /*( = index -1) index is of the snake which is just smaller than D*/, lm=0/*smallest snake alive*/;
int NoOfEatableSnakes = ArrayLength(Len) - (lh+1); /* = Total no. of snakes - the index no. of snake w/ L,D*/
//lh will be the SELECTED SNAKE
while((Len[lh]+lh-lm-2) >= D) /*while selected snake + no. of all smaller snakes >= D*/
{
  lm += Len[lh]+lh-lm-2 -D; /*The no. of smallest snakes being eaten is added to lm*/
  lh--; /* Selected snake has eaten its fill(=> L=D), so select the next largest snake.*/
}
