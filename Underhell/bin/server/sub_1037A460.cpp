int __thiscall sub_1037A460(float *this, int a2, int a3, int a4)
{
  int result; // eax

  result = 1;
  if ( a2 == 1 )
  {
    *((_BYTE *)this + 20) = 1;
    return sub_10378640(this - 422);
  }
  return result;
}
