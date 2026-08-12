int __thiscall sub_102E1F70(int this, int a2)
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
  v3 = (int *)(this + 5044);
  v4 = *(_DWORD *)(this + 5044) - result;
  if ( *(_DWORD *)(this + 5044) != v4 )
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
        result = sub_100194B0(v5, 5044);
    }
    *v3 = v4;
  }
  if ( *v3 < 0 )
  {
    result = (int)(v3 - 1261);
    if ( *((_BYTE *)v3 - 4960) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v3 = 0;
    }
    else
    {
      v6 = *(int **)(result + 24);
      if ( v6 )
        result = sub_100194B0(v6, 5044);
      *v3 = 0;
    }
  }
  return result;
}
