bool __cdecl sub_102654D0(int a1, int a2)
{
  int v2; // eax
  _BYTE *v3; // esi
  int v5; // edi
  int v6; // eax

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a1) )
    return 1;
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1);
  v3 = (_BYTE *)v2;
  if ( !v2 )
    return 1;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)(v2 + 320) + 44))(v2 + 320);
  v6 = sub_100D7240(v3);
  return ((*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 36))(dword_106B31F0, v6) == 1
       && (v5 == 1 || v5 == 6)
       || (a2 & 0x2000000) != 0)
      && ((a2 & 2) != 0 || !v3[113])
      && ((a2 & 0x4000) != 0 || v3[306] != 7);
}
