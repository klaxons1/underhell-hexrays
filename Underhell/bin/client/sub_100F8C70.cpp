int *__thiscall sub_100F8C70(_DWORD *this, int a2, int a3)
{
  int *result; // eax

  result = (int *)a2;
  if ( a2 )
  {
    if ( ((this[183] | *(_DWORD *)(a2 + 732)) & 0x4000000) == 0 )
      return sub_100F8C00(this, a2, a3);
  }
  return result;
}
