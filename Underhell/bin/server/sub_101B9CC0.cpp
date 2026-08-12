void __cdecl sub_101B9CC0(int a1)
{
  int v1; // ebx
  int v2; // esi
  const char *v3; // ecx
  const char *v4; // edi
  const char *v5; // eax
  int v6; // edi
  const char *v7; // eax
  const char *v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // esi
  const char *v12; // [esp-Ch] [ebp-1028h]
  int v13; // [esp-8h] [ebp-1024h]
  const char *v14; // [esp-4h] [ebp-1020h]
  _DWORD v15[1024]; // [esp+8h] [ebp-1014h] BYREF
  int v16[2]; // [esp+1008h] [ebp-14h] BYREF
  int v17; // [esp+1010h] [ebp-Ch]
  int v18; // [esp+1014h] [ebp-8h]
  int v19; // [esp+1018h] [ebp-4h]

  v1 = a1;
  v2 = 0;
  if ( a1 )
  {
    v3 = "NAV IGNORE";
    if ( *(float *)(a1 + 448) < (double)*(float *)(dword_106B31C8 + 12) )
      v3 = String;
    v4 = *(const char **)(a1 + 92);
    if ( !v4 )
      v4 = String;
    v13 = *(_DWORD *)(a1 + 420);
    v12 = v3;
    v5 = sub_100D6390((_DWORD *)a1);
    Msg("Entity %s (%s) %s Collision Group %d\n", v4, v5, v12, v13);
    v16[0] = 0;
    v16[1] = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    sub_101B9730(&dword_106B9F38, v1, v16);
    if ( v18 <= 0 )
    {
      v6 = v16[0];
    }
    else
    {
      do
      {
        v6 = v16[0];
        v7 = *(const char **)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v16[0] + 4 * v2) + 28))(
                               *(_DWORD *)(v16[0] + 4 * v2),
                               &a1);
        if ( !v7 )
          v7 = String;
        v14 = v7;
        v8 = sub_100D6390(*(_DWORD **)(v6 + 4 * v2));
        Msg("  penetration with entity %s (%s)\n", v8, v14);
        ++v2;
      }
      while ( v2 < v18 );
    }
    v9 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v1 + 624))(v1, v15);
    v10 = v9;
    if ( v9 )
    {
      if ( v9 <= 1 )
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v15[0] + 324))(v15[0]);
      }
      else
      {
        v11 = 0;
        do
        {
          Msg("Object %d (of %d) =========================\n", v11 + 1, v10);
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v15[v11] + 324))(v15[v11]);
          ++v11;
        }
        while ( v11 < v10 );
        v6 = v16[0];
      }
    }
    if ( v17 >= 0 )
    {
      if ( v6 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v6);
    }
  }
}
