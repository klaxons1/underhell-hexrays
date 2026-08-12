bool __cdecl sub_1012D3A0(int a1, int a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  _DWORD *v5; // esi

  if ( !a2 )
    return 1;
  if ( a1 == a2 )
    return 0;
  v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 28))(a1);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  v5 = (_DWORD *)v4;
  if ( !v3 || !v4 )
    return 1;
  if ( sub_100116E0(v3) == v4 )
    return 0;
  return sub_100116E0(v5) != (_DWORD)v3;
}
