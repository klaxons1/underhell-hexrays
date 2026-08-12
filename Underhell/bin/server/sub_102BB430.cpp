int __thiscall sub_102BB430(char *this, __int16 a2)
{
  int result; // eax
  int *v3; // ecx

  result = (int)(this - 1124);
  if ( *(this - 1040) )
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
