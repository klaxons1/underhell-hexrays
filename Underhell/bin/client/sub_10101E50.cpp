int __cdecl sub_10101E50(int a1, int a2)
{
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)off_103E1DD0 + 12))(off_103E1DD0, a1);
  if ( a1 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 64))(a1, 0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1043625C + 16))(dword_1043625C, a1);
  if ( a2 && (*(_BYTE *)(a2 + 312) & 1) != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1043625C + 16))(dword_1043625C, a2);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436254 + 40))(dword_10436254, a1);
}
