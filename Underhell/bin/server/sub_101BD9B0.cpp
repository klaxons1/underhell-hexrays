int __cdecl sub_101BD9B0(int a1, _DWORD *a2, int a3)
{
  int v3; // ebx
  int result; // eax
  const char *v5; // eax
  int v6; // eax
  int v7; // edx
  int (__thiscall *v8)(int, int *); // eax
  int v9; // edi
  int v10; // eax
  int *v11; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // [esp+4h] [ebp-63Ch] BYREF
  char String2[1572]; // [esp+8h] [ebp-638h] BYREF
  const char *v17; // [esp+62Ch] [ebp-14h]
  char v18; // [esp+63Ch] [ebp-4h]

  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF0 + 152))(dword_106BAFF0, *(_DWORD *)(a3 + 8));
  for ( result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
        !(_BYTE)result;
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3) )
  {
    v5 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
    v6 = _stricmp(v5, "solid");
    v7 = *(_DWORD *)v3;
    if ( v6 )
    {
      (*(void (__thiscall **)(int))(v7 + 36))(v3);
    }
    else
    {
      (*(void (__thiscall **)(int, int *, _DWORD))(v7 + 12))(v3, &v15, 0);
      v8 = *(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 28);
      v18 = 1;
      v17 = *(const char **)v8(a1, &a3);
      if ( !v17 )
        v17 = String;
      ++*a2;
      v9 = a2[4];
      v10 = a2[2];
      v11 = a2 + 1;
      if ( v9 + 1 > v10 )
        sub_10226330(v9 - v10 + 1);
      ++a2[4];
      v12 = *v11;
      v13 = a2[4] - v9 - 1;
      a2[5] = a2[1];
      if ( v13 > 0 )
        memcpy((void *)(v12 + 8 * v9 + 8), (const void *)(v12 + 8 * v9), 8 * v13);
      v14 = 8 * v9 + *v11;
      if ( v14 )
        *(_DWORD *)(v14 + 4) = -1;
      sub_101BD580(a1, (int *)(8 * v9 + *v11), String2, &v15);
    }
  }
  return result;
}
