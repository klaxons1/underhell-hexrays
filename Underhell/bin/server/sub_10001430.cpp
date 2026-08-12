_DWORD *__thiscall sub_10001430(_DWORD *this)
{
  int v1; // edi
  _DWORD *v3; // esi

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v3 = (_DWORD *)this[275];
  if ( !v3 || !*v3 )
    v3 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  return v3;
}
