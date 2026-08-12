int __thiscall sub_102438C0(int this)
{
  int v2; // edx
  int result; // eax
  int *v4; // ecx
  int *v5; // ecx

  sub_10112C00(this + 320, 0);
  result = sub_100E0970(this, v2, 0, 0);
  if ( *(_BYTE *)(this + 800) )
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
        result = sub_100194B0(v4, 800);
    }
    *(_BYTE *)(this + 800) = 0;
  }
  if ( *(_BYTE *)(this + 801) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 801) = 0;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 801);
      *(_BYTE *)(this + 801) = 0;
    }
  }
  return result;
}
