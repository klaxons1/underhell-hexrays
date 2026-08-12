int __thiscall sub_100392A0(char *this, int a2, float *a3, int a4)
{
  char *v5; // edi
  int result; // eax

  sub_10037F50((int)this);
  v5 = this + 660;
  if ( a2 )
    sub_101EDA00(this + 660, 0, a2);
  if ( a3 )
  {
    sub_101EDA00(v5, 1, a3);
    *a3 = *a3 * -1.0;
    a3[1] = a3[1] * -1.0;
    a3[2] = -1.0 * a3[2];
  }
  result = a4;
  if ( a4 )
    return sub_101EDA00(v5, 2, a4);
  return result;
}
