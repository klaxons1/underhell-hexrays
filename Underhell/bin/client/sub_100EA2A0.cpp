void __fastcall sub_100EA2A0(_DWORD *a1)
{
  int v1; // ebx
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  v1 = a1[3] - 1;
  v7 = a1;
  if ( v1 < 0 )
  {
    a1[3] = 0;
  }
  else
  {
    v2 = 24 * v1;
    v8 = 24 * v1;
    do
    {
      v3 = *a1;
      v4 = *(_DWORD *)(*a1 + v2 + 20);
      v5 = (_DWORD *)(v2 + v3);
      if ( v4 )
        sub_100F1860(v4);
      v5[3] = 0;
      if ( (int)v5[2] >= 0 )
      {
        if ( *v5 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v5);
          *v5 = 0;
        }
        v5[1] = 0;
      }
      v6 = *v5;
      v5[4] = *v5;
      if ( (int)v5[2] >= 0 )
      {
        if ( v6 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v6);
          *v5 = 0;
        }
        v5[1] = 0;
      }
      a1 = v7;
      --v1;
      v2 = v8 - 24;
      v8 -= 24;
    }
    while ( v1 >= 0 );
    v7[3] = 0;
  }
}
