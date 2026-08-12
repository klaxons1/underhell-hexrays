int __thiscall sub_10078F70(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ebx

  v2 = (_DWORD *)this[1];
  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !v2[275] && sub_100D7240(v2) )
    sub_100BD750(v2);
  v4 = (_DWORD *)v2[275];
  if ( v4 && *v4 )
    v5 = v2[275];
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  return (*(int (__thiscall **)(_DWORD *, int, int))(*v2 + 740))(v2, v5, a2);
}
