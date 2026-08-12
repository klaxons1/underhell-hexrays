void __fastcall sub_101C8220(_DWORD *a1)
{
  int v1; // ebx
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // [esp+4h] [ebp-8h]
  _DWORD *v6; // [esp+8h] [ebp-4h]

  v1 = a1[3] - 1;
  v6 = a1;
  if ( v1 < 0 )
  {
    a1[3] = 0;
  }
  else
  {
    v2 = 20 * v1;
    v5 = 20 * v1;
    do
    {
      v3 = (_DWORD *)(v2 + *a1);
      v3[3] = 0;
      if ( (int)v3[2] >= 0 )
      {
        if ( *v3 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v3);
          a1 = v6;
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
          a1 = v6;
          *v3 = 0;
        }
        v3[1] = 0;
      }
      --v1;
      v2 = v5 - 20;
      v5 -= 20;
    }
    while ( v1 >= 0 );
    a1[3] = 0;
  }
}
