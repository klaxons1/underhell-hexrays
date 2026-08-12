int __thiscall sub_10019CE0(_DWORD *this, int a2, float a3)
{
  int v3; // edi
  _DWORD *v5; // eax
  int v6; // ebx

  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v5 = (_DWORD *)this[275];
  if ( v5 && *v5 )
    v6 = this[275];
  else
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  return sub_100BE7D0(v6, a2, a3);
}
