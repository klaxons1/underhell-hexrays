bool __thiscall sub_10022CA0(_DWORD *this, int a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v4 = (_DWORD *)this[275];
  if ( v4 && *v4 )
    v5 = this[275];
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  if ( !v5 )
    return 0;
  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v7 = this[275];
  if ( !v7 || !*(_DWORD *)v7 )
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  if ( !*(_BYTE *)(v7 + 92) )
    sub_10246010(v7);
  return sub_10245D70(a2) > 0;
}
