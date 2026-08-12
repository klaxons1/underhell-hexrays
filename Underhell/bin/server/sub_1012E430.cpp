int __thiscall sub_1012E430(char *this, __int16 a2)
{
  int result; // eax
  int *v3; // ecx

  result = (int)(this - 804);
  if ( *(this - 720) )
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
