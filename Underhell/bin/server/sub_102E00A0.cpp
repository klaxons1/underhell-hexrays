int __thiscall sub_102E00A0(int this, int a2)
{
  int result; // eax
  int v3; // edi
  _DWORD *v4; // esi
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  v4 = (_DWORD *)(this + 2184);
  if ( *(_DWORD *)(this + 2184) != v3 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 2184);
    }
    *v4 = v3;
  }
  if ( (int)*v4 < 0 )
  {
    result = (int)(v4 - 546);
    if ( *((_BYTE *)v4 - 2100) )
    {
      *(_BYTE *)(result + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(result + 24);
      if ( v6 )
        result = sub_100194B0(v6, 2184);
    }
    *v4 = 0;
  }
  if ( (int)*v4 > 100 )
  {
    result = (int)(v4 - 546);
    if ( *((_BYTE *)v4 - 2100) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v4 = 100;
    }
    else
    {
      v7 = *(int **)(result + 24);
      if ( v7 )
        result = sub_100194B0(v7, 2184);
      *v4 = 100;
    }
  }
  return result;
}
