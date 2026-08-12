int __thiscall sub_10078FF0(_DWORD *this, int a2, float a3)
{
  int v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // ebx

  v3 = this[1];
  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(v3 + 1100) && sub_100D7240(v3) )
    sub_100BD750(v3);
  v5 = *(_DWORD **)(v3 + 1100);
  if ( v5 && *v5 )
    v6 = *(_DWORD *)(v3 + 1100);
  else
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  return sub_100BE7D0(v6, a2, a3);
}
