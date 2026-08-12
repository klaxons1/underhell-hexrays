void __thiscall sub_1010AEB0(void *this, int a2, int *a3)
{
  int *i; // esi

  sub_1010A950((int)this, a2, (int)a3, *a3, a3[1]);
  for ( i = (int *)a3[3]; i; i = (int *)i[3] )
    sub_1010A950((int)this, a2, (int)i, *i, i[1]);
}
