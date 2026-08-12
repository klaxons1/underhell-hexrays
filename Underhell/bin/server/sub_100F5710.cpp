int __thiscall sub_100F5710(int this, __int16 a2)
{
  int result; // eax
  int *v3; // ecx

  result = this;
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v3 = *(int **)(this + 24);
    if ( v3 )
      return sub_100194B0(v3, a2 - result);
  }
  return result;
}
