int __thiscall sub_10115D20(int this, int a2)
{
  int *v3; // ecx
  int result; // eax
  int *v5; // ecx

  if ( *(_BYTE *)(this + 829) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 829);
    }
    *(_BYTE *)(this + 829) = 1;
  }
  if ( *(float *)(this + 800) > 0.0 )
    return sub_10115C20(this);
  result = *(_DWORD *)(this + 840);
  if ( result != *(_DWORD *)(this + 824) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 840) = *(float *)(this + 824);
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 840);
      *(float *)(this + 840) = *(float *)(this + 824);
    }
  }
  return result;
}
