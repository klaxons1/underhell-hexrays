int __cdecl sub_101DB3D0(int a1, int a2)
{
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)off_1063AC88 + 12))(off_1063AC88, a1);
  if ( a1 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 64))(a1, 0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFFC + 16))(dword_106BAFFC, a1);
  if ( a2 && (*(_BYTE *)(a2 + 252) & 1) != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFFC + 16))(dword_106BAFFC, a2);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 40))(dword_106BAFF4, a1);
}
