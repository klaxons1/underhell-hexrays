int __thiscall sub_101E5FB0(char *this, __int16 a2)
{
  int result; // eax
  int *v3; // ecx

  result = (int)(this - 3240);
  if ( *(this - 3156) )
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
