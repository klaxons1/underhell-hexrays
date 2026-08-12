int __thiscall sub_101E5F80(char *this, __int16 a2)
{
  int result; // eax
  int *v3; // ecx

  result = (int)(this - 2192);
  if ( *(this - 2108) )
  {
    *(_BYTE *)(result + 88) |= 1u;
  }
  else
  {
    v3 = *(int **)(result + 24);
    if ( v3 )
      return sub_100194B0(v3, a2 - result);
  }
  return result;
}
