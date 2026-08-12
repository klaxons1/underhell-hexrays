void __fastcall sub_10241BC0(_DWORD *a1)
{
  int v1; // edi
  int v2; // eax
  _DWORD *v3; // esi
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
    v2 = 20 * v1;
    for ( i = 20 * v1; ; v2 = i )
    {
      v3 = (_DWORD *)(v2 + *a1);
      sub_101AB5D0(v3);
      if ( (int)v3[2] >= 0 )
      {
        if ( *v3 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v3);
          *v3 = 0;
        }
        v3[1] = 0;
      }
      v4 = *v3;
      v3[4] = *v3;
      if ( (int)v3[2] >= 0 )
      {
        if ( v4 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
          *v3 = 0;
        }
        v3[1] = 0;
      }
      i -= 20;
      a1 = v5;
      if ( --v1 < 0 )
        break;
    }
    v5[3] = 0;
  }
}
