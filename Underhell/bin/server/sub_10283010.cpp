void __thiscall sub_10283010(int this, int a2)
{
  unsigned int *v2; // esi
  int v3; // edi
  unsigned int v4; // edi
  int *v5; // ecx

  v2 = (unsigned int *)(this + 812);
  v3 = *(_DWORD *)(this + 812);
  if ( a2 )
    v4 = v3 | 2;
  else
    v4 = v3 & 0xFFFFFFFD;
  if ( *v2 != v4 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v2 = v4;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 812);
      *v2 = v4;
    }
  }
}
