bool __cdecl sub_1012D010(int a1, int a2)
{
  int v2; // esi
  int v4; // ebx
  int v5; // eax
  __int16 v6; // bx

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 28))(a1);
  if ( !v2 )
    return 1;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 276))(v2);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)(v2 + 4) + 36))(v2 + 4);
  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, v5) == 1
    && (v4 == 1 || v4 == 6) )
  {
    v6 = a2;
  }
  else
  {
    v6 = a2;
    if ( (a2 & 0x2000000) == 0 )
      return 0;
  }
  return ((v6 & 2) != 0 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(v2 + 4) + 16))(v2 + 4))
      && ((v6 & 0x4000) != 0 || *(_BYTE *)(v2 + 316) != 7);
}
