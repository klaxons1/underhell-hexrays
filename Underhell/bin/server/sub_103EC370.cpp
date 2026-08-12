int __thiscall sub_103EC370(int this, int a2)
{
  int result; // eax
  int *v4; // ecx

  result = sub_100C1600(this, 1, 0);
  if ( *(_BYTE *)(this + 1689) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 1689) = 0;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 1689);
      *(_BYTE *)(this + 1689) = 0;
    }
  }
  return result;
}
