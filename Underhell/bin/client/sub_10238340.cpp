int __stdcall sub_10238340(int a1, _DWORD *a2, int a3)
{
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int result; // eax
  int *v8; // edi
  int *v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // [esp+10h] [ebp+4h]

  v4 = dword_1047CA7C;
  v5 = *(_DWORD *)dword_1047CA7C;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 80))(a1);
  result = (*(int (__thiscall **)(int, int))(v5 + 32))(v4, v6);
  v8 = (int *)result;
  if ( result )
  {
    v9 = (int *)(*(int (__cdecl **)(int))(a3 + 20))(a1);
    v10 = sub_1022B4C0(a2, *(char **)a3, (int)Locale);
    v12 = *v8;
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 84))(a1);
    result = (*(int (__thiscall **)(int *, int, int))(v12 + 12))(v8, v10, v11);
    *v9 = result;
  }
  return result;
}
