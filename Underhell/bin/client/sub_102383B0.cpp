int __stdcall sub_102383B0(int a1, int a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int result; // eax
  int *v7; // edi
  int v8; // eax
  int v9; // ebx
  int *v10; // ebp
  int v11; // eax
  int v12; // [esp+10h] [ebp+4h]

  v3 = dword_1047CA7C;
  v4 = *(_DWORD *)dword_1047CA7C;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 80))(a1);
  result = (*(int (__thiscall **)(int, int))(v4 + 32))(v3, v5);
  v7 = (int *)result;
  if ( result )
  {
    v8 = (*(int (__cdecl **)(int))(a2 + 20))(a1);
    v9 = *(_DWORD *)(a2 + 12);
    v10 = (int *)v8;
    v12 = *v7;
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 84))(a1);
    result = (*(int (__thiscall **)(int *, int, int))(v12 + 12))(v7, v9, v11);
    *v10 = result;
  }
  return result;
}
