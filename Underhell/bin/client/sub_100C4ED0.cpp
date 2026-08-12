void __fastcall sub_100C4ED0(_DWORD *a1)
{
  int v1; // ebx
  int v2; // eax
  int v3; // esi
  int v4; // eax
  _DWORD *v5; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v1 = a1[3] - 1;
  v5 = a1;
  if ( v1 < 0 )
  {
    a1[3] = 0;
  }
  else
  {
    v2 = 84 * v1;
    for ( i = 84 * v1; ; v2 = i )
    {
      v3 = v2 + *a1;
      *(_DWORD *)(v3 + 40) = 0;
      if ( *(int *)(v3 + 36) >= 0 )
      {
        if ( *(_DWORD *)(v3 + 28) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v3 + 28));
          *(_DWORD *)(v3 + 28) = 0;
        }
        *(_DWORD *)(v3 + 32) = 0;
      }
      v4 = *(_DWORD *)(v3 + 28);
      *(_DWORD *)(v3 + 44) = v4;
      if ( *(int *)(v3 + 36) >= 0 )
      {
        if ( v4 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
          *(_DWORD *)(v3 + 28) = 0;
        }
        *(_DWORD *)(v3 + 32) = 0;
      }
      sub_100C1A20(v3);
      *(_WORD *)(v3 + 20) = -1;
      if ( *(int *)(v3 + 12) >= 0 )
      {
        if ( *(_DWORD *)(v3 + 4) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v3 + 4));
          *(_DWORD *)(v3 + 4) = 0;
        }
        *(_DWORD *)(v3 + 8) = 0;
      }
      *(_WORD *)(v3 + 22) = -1;
      if ( *(int *)(v3 + 12) >= 0 )
      {
        if ( *(_DWORD *)(v3 + 4) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v3 + 4));
          *(_DWORD *)(v3 + 4) = 0;
        }
        *(_DWORD *)(v3 + 8) = 0;
      }
      i -= 84;
      a1 = v5;
      if ( --v1 < 0 )
        break;
    }
    v5[3] = 0;
  }
}
