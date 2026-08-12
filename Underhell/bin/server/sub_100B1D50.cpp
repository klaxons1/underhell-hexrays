void __fastcall sub_100B1D50(_DWORD **a1)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ebx
  int v3; // eax
  _DWORD **v4; // [esp+8h] [ebp-4h]

  v1 = *a1;
  v4 = a1;
  if ( *a1 )
  {
    do
    {
      v2 = (_DWORD *)*v1;
      v1[31] = 0;
      if ( (int)v1[30] >= 0 )
      {
        if ( v1[28] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v1[28]);
          v1[28] = 0;
        }
        v1[29] = 0;
      }
      v3 = v1[28];
      v1[32] = v3;
      if ( (int)v1[30] >= 0 )
      {
        if ( v3 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v3);
          v1[28] = 0;
        }
        v1[29] = 0;
      }
      v1[18] = 0;
      v1[19] = v1 + 2;
      sub_10184660(v1);
      v1 = v2;
    }
    while ( v2 );
    a1 = v4;
  }
  *a1 = 0;
}
