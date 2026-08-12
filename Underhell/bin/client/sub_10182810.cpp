bool __cdecl sub_10182810(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // eax
  int v6; // edi
  int v7; // eax

  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 868))(a1, a2);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 868))(a1, a3);
  v3 = sub_1022A800("frags", 0);
  v4 = sub_1022A800("frags", 0);
  if ( v3 > v4 )
    return 1;
  if ( v3 < v4 )
    return 0;
  v6 = sub_1022A800("deaths", 0);
  v7 = sub_1022A800("deaths", 0);
  if ( v6 > v7 )
    return 0;
  if ( v6 < v7 )
    return 1;
  return a2 < a3;
}
