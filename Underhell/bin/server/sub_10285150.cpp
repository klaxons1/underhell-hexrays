int __thiscall sub_10285150(int this, int a2)
{
  int result; // eax
  int *v4; // ecx
  int *v5; // ecx

  if ( *(_BYTE *)(this + 825) != 1 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 825);
    }
    *(_BYTE *)(this + 825) = 1;
  }
  *(_BYTE *)(this + 800) = 1;
  if ( *(_BYTE *)(this + 824) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 824) = 0;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 824);
      *(_BYTE *)(this + 824) = 0;
    }
  }
  return result;
}
