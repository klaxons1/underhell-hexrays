int __stdcall sub_102380C0(int a1, _DWORD *a2, int a3)
{
  int *v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // ebp
  int v7; // eax
  int result; // eax

  v3 = (int *)(*(int (__cdecl **)(int))(a3 + 20))(a1);
  v4 = sub_1022A800(a2, *(char **)a3, 0);
  v5 = dword_1047CA7C;
  v6 = *(_DWORD *)dword_1047CA7C;
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 80))(a1, v4);
  result = (*(int (__thiscall **)(int, int))(v6 + 52))(v5, v7);
  *v3 = result;
  return result;
}
