int __cdecl sub_10264DF0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // edi
  int v8; // eax

  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 12))(a1);
  v7 = *(_DWORD *)dword_106B31F4;
  v8 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v6 + 36))(v6, a4, a5, a6);
  return (*(int (__thiscall **)(int, int, int, int, int))(v7 + 32))(dword_106B31F4, v6, a2, a3, v8);
}
