int __thiscall sub_10123430(int this, int a2)
{
  int result; // eax
  int *v4; // ecx

  if ( *(_BYTE *)(this + 801) != 3 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 801) = 3;
      *(_BYTE *)(this + 803) = 0;
      return result;
    }
    v4 = *(int **)(this + 24);
    if ( v4 )
      result = sub_100194B0(v4, 801);
    *(_BYTE *)(this + 801) = 3;
  }
  *(_BYTE *)(this + 803) = 0;
  return result;
}
