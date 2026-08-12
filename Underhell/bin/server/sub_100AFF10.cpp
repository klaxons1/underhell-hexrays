int __stdcall sub_100AFF10(void **a1, int a2)
{
  int v2; // esi
  int (__thiscall *v3)(int); // eax
  int result; // eax
  void (__thiscall *v5)(int); // eax
  void (__thiscall *v6)(int, char *, int, _DWORD); // edx
  char *v7; // eax
  int *v8; // eax
  int v9; // edx
  char *v10; // eax
  int *v11; // edi
  bool v12; // zf
  char v13[512]; // [esp+8h] [ebp-210h] BYREF
  char *v14; // [esp+208h] [ebp-10h] BYREF
  void *v15; // [esp+20Ch] [ebp-Ch]
  float v16; // [esp+210h] [ebp-8h] BYREF
  int *v17; // [esp+214h] [ebp-4h]

  v2 = a2;
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 56);
  v15 = *a1;
  result = v3(a2);
  if ( result > 0 )
  {
    a2 = result;
    do
    {
      v5 = *(void (__thiscall **)(int))(*(_DWORD *)v2 + 20);
      v16 = -1.0;
      v13[0] = 0;
      v17 = 0;
      v5(v2);
      (*(void (__thiscall **)(int, char *, int, _DWORD))(*(_DWORD *)v2 + 80))(v2, v13, 512, 0);
      (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)v2 + 8))(v2, &v16, &dword_1060B3F4);
      v6 = *(void (__thiscall **)(int, char *, int, _DWORD))(*(_DWORD *)v2 + 64);
      HIBYTE(a1) = 0;
      v6(v2, (char *)&a1 + 3, 1, 0);
      if ( HIBYTE(a1) )
      {
        v7 = (char *)sub_10184390(168);
        if ( v7 )
          v8 = (int *)sub_10065740(v7);
        else
          v8 = 0;
        v9 = *(_DWORD *)v2;
        v17 = v8;
        (*(void (__thiscall **)(int, int *, int *))(v9 + 8))(v2, v8, &dword_106063F0);
      }
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 32))(v2);
      if ( v13[0] )
      {
        v10 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(v13) + 1);
        if ( v10 )
          strcpy(v10, v13);
        else
          v10 = 0;
        v14 = v10;
        result = sub_100AFBE0(v15, (int *)&v14, (int)&v16);
      }
      if ( v17 )
      {
        v11 = v17;
        sub_10068150(v17);
        result = sub_10184660(v11);
      }
      v12 = a2-- == 1;
      v17 = 0;
    }
    while ( !v12 );
  }
  return result;
}
