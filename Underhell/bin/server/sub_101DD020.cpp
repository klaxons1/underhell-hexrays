char __cdecl sub_101DD020(_DWORD *a1, _DWORD *a2, char a3)
{
  int v3; // esi

  v3 = a1[106];
  if ( !v3 || (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 4))(a1[106]) )
    return 0;
  sub_100D6020(a1, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 284))(v3);
  sub_100E9500(a2, v3);
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 64))(v3, a2);
  (*(void (__thiscall **)(_DWORD *, int))(*a2 + 596))(a2, v3);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 60))(v3, 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 52))(v3, 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  if ( a3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 96))(v3);
  return 1;
}
