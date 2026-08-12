int __stdcall sub_10238110(int a1, int a2)
{
  int *v2; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  int result; // eax

  v2 = (int *)(*(int (__cdecl **)(int))(a2 + 20))(a1);
  v3 = atoi(*(const char **)(a2 + 12));
  v4 = dword_1047CA7C;
  v5 = *(_DWORD *)dword_1047CA7C;
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 80))(a1, v3);
  result = (*(int (__thiscall **)(int, int))(v5 + 52))(v4, v6);
  *v2 = result;
  return result;
}
