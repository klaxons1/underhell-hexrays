int __thiscall sub_100FB630(int *this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  result = sub_100D62E0(a4, this[200]);
  if ( result )
    this[200] = 1 - this[200];
  return result;
}
