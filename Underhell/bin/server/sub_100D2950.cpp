int __cdecl sub_100D2950(int a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v4; // eax
  int v5; // ecx
  _DWORD *v6; // esi
  int v7; // eax

  if ( !a3 )
    return 0;
  v4 = *(_DWORD *)(a3 + 1120);
  if ( v4 == -1 )
    return 0;
  if ( off_1061BE18[4 * (*(_DWORD *)(a3 + 1120) & 0xFFF) + 2] != v4 >> 12 )
    return 0;
  v5 = off_1061BE18[4 * (*(_DWORD *)(a3 + 1120) & 0xFFF) + 1];
  if ( !v5 )
    return 0;
  v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 288))(v5);
  if ( !v6 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 320))(v6) )
    return 0;
  v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v6[6]);
  if ( a4 )
  {
    *a4 = 0;
    a4[1] = 0;
    a4[2] = 0;
    a4[3] = 0;
    a4[4] = 0;
    a4[5] = 0;
    a4[6] = 0;
    a4[7] = 0;
  }
  a4[(v7 - 1) >> 5] |= 1 << ((v7 - 1) & 0x1F);
  return a3;
}
