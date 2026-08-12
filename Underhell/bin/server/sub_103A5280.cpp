void __thiscall sub_103A5280(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // esi
  unsigned int v5; // esi
  int v6; // ecx

  v2 = *(_DWORD *)(this + 312);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 312) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( v4 )
  {
    while ( *(char **)(v4 + 92) != "combine_mine" && !sub_100D6240((_DWORD *)v4, "combine_mine") )
    {
      v5 = *(_DWORD *)(v4 + 316);
      if ( v5 == -1 || off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12 )
        v4 = 0;
      else
        v4 = off_1061BE18[4 * (v5 & 0xFFF) + 1];
      if ( !v4 )
        return;
    }
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v4 + 140))(v4, 0, -1);
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    sub_100DD660(v4, (float *)(this + 476));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 76))(v4, this);
    sub_10328900((_BYTE *)this, (int)"DeployMine");
    v6 = *(_DWORD *)(v4 + 424);
    if ( v6 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 96))(v6);
    if ( *(_BYTE *)(this + 3968) )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 71);
  }
}
