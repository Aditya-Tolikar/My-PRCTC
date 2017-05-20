int D, Len[], lh /* = index -1*/, lm=0;
int output = ArrayLength(Len) - (lh+1);

while((Len[lh]+lh-lm-2) >= D)
{
  lm += Len[lh]+lh-lm-2 -D;
  lh--;
}
