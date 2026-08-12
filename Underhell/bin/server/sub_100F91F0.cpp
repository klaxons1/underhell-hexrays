void __thiscall sub_100F91F0(int this, int a2)
{
  int v3; // esi
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int *v7; // ecx

  sub_100C1170(this, a2);
  v3 = ((unsigned __int8)*(_DWORD *)(this + 1156) + 1) & 7;
  if ( *(_DWORD *)(this + 1156) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 1156);
    }
    *(_DWORD *)(this + 1156) = v3;
  }
  v5 = *(_DWORD *)(this + 1168);
  if ( v5 != -1 && off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 2] == v5 >> 12 )
  {
    v6 = off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 1];
    if ( v6 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 1196))(v6);
  }
  if ( *(_DWORD *)(this + 904) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 904);
    }
    *(float *)(this + 904) = 0.0;
  }
  sub_100C2AB0(this);
}
