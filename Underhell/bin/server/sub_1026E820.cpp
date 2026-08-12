void __fastcall sub_1026E820(_DWORD *a1)
{
  int v1; // edi
  int v2; // ebx
  _DWORD *v3; // esi
  bool v4; // sf
  int v5; // eax
  _DWORD *v6; // [esp+4h] [ebp-4h]

  v1 = a1[3] - 1;
  v6 = a1;
  if ( v1 >= 0 )
  {
    v2 = 24 * v1;
    do
    {
      v3 = (_DWORD *)(v2 + *a1);
      sub_1026E730(v3 + 1);
      if ( (int)v3[3] >= 0 )
      {
        if ( v3[1] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v3[1]);
          v3[1] = 0;
        }
        v3[2] = 0;
      }
      v4 = (int)v3[3] < 0;
      v5 = v3[1];
      v3[5] = v5;
      if ( !v4 )
      {
        if ( v5 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v5);
          v3[1] = 0;
        }
        v3[2] = 0;
      }
      a1 = v6;
      v2 -= 24;
      --v1;
    }
    while ( v1 >= 0 );
  }
  a1[3] = 0;
}
