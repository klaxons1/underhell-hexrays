char __thiscall sub_10123490(int this, int a2)
{
  char result; // al
  int *v4; // ecx

  if ( *(_BYTE *)(this + 803) )
    return sub_10123430(this, a2);
  if ( *(_BYTE *)(this + 800) != *(_BYTE *)(this + 801) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 801);
    }
    result = *(_BYTE *)(this + 800);
    *(_BYTE *)(this + 801) = result;
  }
  *(_BYTE *)(this + 803) = 1;
  return result;
}
