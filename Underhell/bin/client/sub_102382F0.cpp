int *__stdcall sub_102382F0(int a1, _DWORD *a2, int a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  int *result; // eax
  int *v7; // esi
  int v8; // eax
  const char *v9; // eax

  v3 = dword_1047CA7C;
  v4 = *(_DWORD *)dword_1047CA7C;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 80))(a1);
  result = (int *)(*(int (__thiscall **)(int, int))(v4 + 32))(v3, v5);
  v7 = result;
  if ( result )
  {
    v8 = (*(int (__cdecl **)(int))(a3 + 20))(a1);
    v9 = (const char *)(*(int (__thiscall **)(int *, int))(*v7 + 16))(v7, v8);
    return sub_1022ABA0(a2, *(char **)a3, v9);
  }
  return result;
}
