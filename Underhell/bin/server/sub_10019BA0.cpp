int __thiscall sub_10019BA0(_DWORD *this, char *String2)
{
  int v2; // edi
  _DWORD *v4; // eax
  int v5; // ebx

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
  return sub_100BD5F0(v5, String2);
}
