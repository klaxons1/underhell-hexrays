bool __stdcall sub_1026AD50(int a1, int a2, int a3)
{
  int v4; // edi
  bool result; // al
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // [esp+10h] [ebp+4h]

  v4 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)a1 + 20))(a1, a2, a3, 1);
  result = 1;
  if ( !v4
    || v4 != (**(int (__thiscall ***)(int))a1)(a1)
    && (v6 = dword_1047CA70,
        v10 = *(_DWORD *)dword_1047CA70,
        v7 = (**(int (__thiscall ***)(int))a1)(a1),
        !(*(unsigned __int8 (__thiscall **)(int, int, int))(v10 + 88))(v6, v4, v7)) )
  {
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 144))(a1) )
      return 0;
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 144))(a1);
    v9 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v8 + 20))(v8, a2, a3, 1);
    if ( !v9 || v9 != (**(int (__thiscall ***)(int))v8)(v8) )
      return 0;
  }
  return result;
}
