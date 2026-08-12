void __fastcall sub_101BC180(_DWORD *a1)
{
  int v1; // ebx
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v1 = a1[3] - 1;
  v6 = a1;
  if ( v1 < 0 )
  {
    a1[3] = 0;
  }
  else
  {
    v2 = 916 * v1;
    v7 = 916 * v1;
    do
    {
      v3 = (_DWORD *)(v2 + *a1);
      v3[178] = 0;
      if ( (int)v3[177] >= 0 )
      {
        if ( v3[175] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v3[175]);
          v3[175] = 0;
        }
        v3[176] = 0;
      }
      v4 = v3[175];
      v3[179] = v4;
      if ( (int)v3[177] >= 0 )
      {
        if ( v4 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
          v3[175] = 0;
        }
        v3[176] = 0;
      }
      v3[173] = 0;
      if ( (int)v3[172] >= 0 )
      {
        if ( v3[170] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v3[170]);
          v3[170] = 0;
        }
        v3[171] = 0;
      }
      v5 = v3[170];
      v3[174] = v5;
      if ( (int)v3[172] >= 0 )
      {
        if ( v5 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v5);
          v3[170] = 0;
        }
        v3[171] = 0;
      }
      a1 = v6;
      --v1;
      v2 = v7 - 916;
      v7 -= 916;
    }
    while ( v1 >= 0 );
    v6[3] = 0;
  }
}
