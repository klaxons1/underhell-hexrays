void __fastcall sub_1026E730(_DWORD *a1)
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
    v2 = 48 * v1;
    v7 = 48 * v1;
    do
    {
      v3 = (_DWORD *)(v2 + *a1);
      v3[10] = 0;
      if ( (int)v3[9] >= 0 )
      {
        if ( v3[7] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v3[7]);
          v3[7] = 0;
        }
        v3[8] = 0;
      }
      v4 = v3[7];
      v3[11] = v4;
      if ( (int)v3[9] >= 0 )
      {
        if ( v4 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
          v3[7] = 0;
        }
        v3[8] = 0;
      }
      v3[5] = 0;
      if ( (int)v3[4] >= 0 )
      {
        if ( v3[2] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v3[2]);
          v3[2] = 0;
        }
        v3[3] = 0;
      }
      v5 = v3[2];
      v3[6] = v5;
      if ( (int)v3[4] >= 0 )
      {
        if ( v5 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v5);
          v3[2] = 0;
        }
        v3[3] = 0;
      }
      a1 = v6;
      --v1;
      v2 = v7 - 48;
      v7 -= 48;
    }
    while ( v1 >= 0 );
    v6[3] = 0;
  }
}
