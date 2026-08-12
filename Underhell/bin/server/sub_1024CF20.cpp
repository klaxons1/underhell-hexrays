int __cdecl sub_1024CF20(int *a1)
{
  int v1; // edx
  int v2; // ecx
  _DWORD *v3; // edi
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // esi
  const char *v7; // eax
  char *v8; // eax
  int v9; // edx
  int v10; // ecx
  int i; // edx
  char *v12; // ecx

  v1 = dword_106C6E34;
  v2 = 0;
  dword_106C6E40 = 0;
  if ( dword_106C6E3C >= 0 )
  {
    if ( dword_106C6E34 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_106C6E34);
      v2 = dword_106C6E40;
      v1 = 0;
      dword_106C6E34 = 0;
    }
    dword_106C6E38 = 0;
  }
  v3 = (_DWORD *)dword_106C6E30;
  dword_106C6E44 = v1;
  if ( dword_106C6E30 )
  {
    do
    {
      v4 = v2;
      if ( v2 + 1 > dword_106C6E38 )
      {
        sub_102ABFC0(v2 - dword_106C6E38 + 1);
        v2 = dword_106C6E40;
        v1 = dword_106C6E34;
      }
      dword_106C6E40 = ++v2;
      dword_106C6E44 = v1;
      if ( v2 - v4 - 1 > 0 )
      {
        memcpy((void *)(v1 + 4 * v4 + 4), (const void *)(v1 + 4 * v4), 4 * (v2 - v4 - 1));
        v2 = dword_106C6E40;
        v1 = dword_106C6E34;
      }
      v5 = (_DWORD *)(v1 + 4 * v4);
      if ( v5 )
      {
        *v5 = v3;
        v2 = dword_106C6E40;
        v1 = dword_106C6E34;
      }
      v3 = (_DWORD *)*v3;
    }
    while ( v3 );
  }
  v6 = 100;
  if ( *a1 >= 2 )
  {
    v7 = String;
    if ( *a1 > 1 )
      v7 = (const char *)a1[259];
    v6 = atoi(v7);
  }
  v8 = (char *)dword_106C6E48;
  dword_106C6E54 = 0;
  if ( dword_106C6E50 < 0 )
  {
    v9 = dword_106C6E4C;
  }
  else
  {
    if ( dword_106C6E48 )
    {
      (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_106C6E48);
      v8 = 0;
      dword_106C6E48 = 0;
    }
    v9 = 0;
    dword_106C6E4C = 0;
  }
  v10 = 0;
  dword_106C6E58 = (int)v8;
  dword_106C6E54 = 0;
  if ( v6 )
  {
    if ( v6 > v9 )
    {
      sub_102ABFC0(v6 - v9);
      v10 = dword_106C6E54;
      v8 = (char *)dword_106C6E48;
    }
    dword_106C6E54 = v6 + v10;
    dword_106C6E58 = (int)v8;
    if ( v10 > 0 && v6 > 0 )
    {
      memcpy(&v8[4 * v6], v8, 4 * v10);
      v8 = (char *)dword_106C6E48;
    }
    for ( i = 0; i < v6; ++i )
    {
      v12 = &v8[4 * i];
      if ( v12 )
      {
        *(_DWORD *)v12 = -1;
        v8 = (char *)dword_106C6E48;
      }
    }
  }
  return Msg("Test_InitRandomEntitySpawner: created %d slots.\n", v6);
}
