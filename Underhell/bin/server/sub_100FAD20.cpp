int __thiscall sub_100FAD20(int this, float *a2, _DWORD *a3)
{
  int *v4; // ecx
  int *v5; // ecx
  _DWORD *v6; // esi
  int *v7; // ecx
  int v8; // edi
  int *v9; // ecx

  if ( *(_DWORD *)(this + 824) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 824);
    }
    *(_DWORD *)(this + 824) = 1;
  }
  if ( *(_DWORD *)(this + 816) != 2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 816);
    }
    *(_DWORD *)(this + 816) = 2;
  }
  sub_100E10C0(this, a2);
  sub_100FA5F0((_DWORD *)this, a3);
  v6 = (_DWORD *)(this + 872);
  if ( *(_DWORD *)(this + 872) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 872);
    }
    *v6 = 0;
  }
  v8 = *(_DWORD *)(this + 816);
  if ( v6[v8 - 1] )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
        sub_100194B0(v9, 4 * v8 - 4 + 872);
    }
    v6[v8 - 1] = 0;
  }
  return sub_100F9B80(this);
}
