int __stdcall sub_100A7110(int a1)
{
  int v1; // esi
  unsigned __int16 v2; // ax
  void (__thiscall *v3)(int, int *, int); // edx
  _DWORD *v4; // edi
  int v5; // ebx
  _BYTE *v6; // eax
  _DWORD *v7; // eax
  int v8; // edi
  int i; // ebx
  int j; // edi
  void (__thiscall *v11)(int, int *, int); // edx
  int v12; // eax
  int v14; // [esp+Ch] [ebp-Ch] BYREF
  _BYTE *v15; // [esp+10h] [ebp-8h] BYREF
  int v16; // [esp+14h] [ebp-4h] BYREF

  v1 = a1;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 32))(a1, "Squads");
  v2 = sub_100B0ED0(&dword_10695280);
  v3 = *(void (__thiscall **)(int, int *, int))(*(_DWORD *)v1 + 44);
  v16 = v2;
  v3(v1, &v16, 1);
  v4 = (_DWORD *)dword_10695280;
  v5 = dword_10695280;
  if ( dword_10695280 )
  {
    do
    {
      v6 = *(_BYTE **)(v5 + 4);
      if ( !v6 || !*v6 )
        v6 = 0;
      v15 = v6;
      (*(void (__thiscall **)(int, const char *, _BYTE **, int))(*(_DWORD *)v1 + 80))(v1, String, &v15, 1);
      (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)v1 + 20))(v1, v5, &dword_1060B8C8);
      v7 = v4;
      if ( v4 )
        v7 = (_DWORD *)*v4;
      v4 = v7;
      v5 = (int)v7;
    }
    while ( v7 );
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 36))(v1);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v1 + 32))(v1, "Enemies");
  v8 = 0;
  a1 = 0;
  for ( i = sub_1002A680(&dword_10690DF8); v8 < sub_1016BFB0(&dword_10690DF8); ++v8 )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(i + 4 * v8) + 1868))(*(_DWORD *)(i + 4 * v8)) )
      ++a1;
  }
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v1 + 44))(v1, &a1, 1);
  for ( j = 0; j < sub_1016BFB0(&dword_10690DF8); ++j )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(i + 4 * j) + 1868))(*(_DWORD *)(i + 4 * j)) )
    {
      v11 = *(void (__thiscall **)(int, int *, int))(*(_DWORD *)v1 + 164);
      v14 = *(_DWORD *)(i + 4 * j);
      v11(v1, &v14, 1);
      v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(i + 4 * j) + 1868))(*(_DWORD *)(i + 4 * j));
      (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)v1 + 20))(v1, v12, &dword_10607EB0);
    }
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 36))(v1);
}
