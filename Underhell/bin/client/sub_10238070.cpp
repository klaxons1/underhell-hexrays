_DWORD *__stdcall sub_10238070(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  int v7; // eax

  v3 = (_DWORD *)(*(int (__cdecl **)(int))(a3 + 20))(a1);
  v4 = dword_1047CA7C;
  v5 = *(_DWORD *)dword_1047CA7C;
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 80))(a1, *v3);
  v7 = (*(int (__thiscall **)(int, int))(v5 + 56))(v4, v6);
  return sub_1022ACA0(a2, *(char **)a3, v7);
}
