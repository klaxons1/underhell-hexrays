int __stdcall sub_1023A900(int a1, int a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int result; // eax
  int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edi
  int (__thiscall *v11)(int, int *, int, _DWORD); // edx
  int *v12; // ebp
  int v13; // [esp-8h] [ebp-14h]

  v2 = dword_1047CA7C;
  v3 = *(_DWORD *)dword_1047CA7C;
  v4 = a1;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 80))(a1);
  result = (*(int (__thiscall **)(int, int))(v3 + 32))(v2, v5);
  v7 = result;
  if ( result )
  {
    v13 = v4;
    v8 = a2;
    v9 = (*(int (__cdecl **)(int))(a2 + 20))(v13);
    v10 = *(_DWORD *)(v8 + 12);
    v11 = *(int (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)v7 + 20);
    v12 = (int *)v9;
    a1 = 0;
    result = *(_DWORD *)v11(v7, &a1, v10, 0);
    *v12 = result;
  }
  return result;
}
