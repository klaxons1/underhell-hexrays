void __thiscall sub_102E1EC0(int this, int a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  int *v4; // ecx
  _DWORD *v5; // eax
  int *v6; // ecx

  v2 = (_DWORD *)(this + 5044);
  v3 = a2 + *(_DWORD *)(this + 5044);
  if ( *(_DWORD *)(this + 5044) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 5044);
    }
    *v2 = v3;
  }
  if ( (int)*v2 > 20 )
  {
    v5 = v2 - 1261;
    if ( *((_BYTE *)v2 - 4960) )
    {
      *((_BYTE *)v5 + 88) |= 1u;
      *v2 = 20;
    }
    else
    {
      v6 = (int *)v5[6];
      if ( v6 )
        sub_100194B0(v6, 5044);
      *v2 = 20;
    }
  }
}
