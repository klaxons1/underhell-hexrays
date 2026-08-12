void __thiscall sub_103DF4F0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax

  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, a5);
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, a4);
  if ( *(_WORD *)(v6 + 72) != 88 && *(_WORD *)(v7 + 72) != 88 )
  {
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, a4);
    v9 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_106BAFF8 + 24))(*(unsigned __int16 *)(v8 + 54));
    sub_101B5E80(this, a2, v9, v8 + 86, 0.30000001);
  }
}
