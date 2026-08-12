int __thiscall sub_10145E80(_DWORD *this, char *String2)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // ebx

  v2 = this[1];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[1] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(v4 + 1100) && sub_100D7240((void *)v4) )
    sub_100BD750((volatile signed __int32 *)v4);
  v6 = *(_DWORD **)(v4 + 1100);
  if ( v6 && *v6 )
    v7 = *(_DWORD *)(v4 + 1100);
  else
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  return sub_100BD5F0(v7, String2);
}
