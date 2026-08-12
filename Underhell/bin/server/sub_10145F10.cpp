void __thiscall sub_10145F10(_DWORD *this, int a2, float a3)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // esi
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx

  v3 = this[1];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[1] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(v5 + 1100) && sub_100D7240((void *)v5) )
    sub_100BD750((volatile signed __int32 *)v5);
  v7 = *(_DWORD **)(v5 + 1100);
  if ( v7 && *v7 )
    v8 = *(_DWORD *)(v5 + 1100);
  else
    v8 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  sub_100BE7D0((_DWORD *)v5, v8, a2, a3);
}
