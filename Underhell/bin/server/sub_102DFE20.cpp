int __thiscall sub_102DFE20(int this, int a2)
{
  int result; // eax
  int *v3; // esi
  int v4; // edi
  int *v5; // ecx
  int *v6; // ecx

  if ( *(_DWORD *)(a2 + 24) == 5 )
    result = *(_DWORD *)(a2 + 8);
  else
    result = 0;
  v3 = (int *)(this + 2184);
  v4 = result + *(_DWORD *)(this + 2184);
  if ( *(_DWORD *)(this + 2184) != v4 )
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
    *v3 = v4;
  }
  if ( *v3 > 100 )
  {
    result = (int)(v3 - 546);
    if ( *((_BYTE *)v3 - 2100) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v3 = 100;
    }
    else
    {
      v6 = *(int **)(result + 24);
      if ( v6 )
        result = sub_100194B0(v6, 2184);
      *v3 = 100;
    }
  }
  return result;
}
