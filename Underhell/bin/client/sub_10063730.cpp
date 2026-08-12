int __thiscall sub_10063730(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int i; // esi
  _DWORD *v5; // esi
  int j; // ebx
  int v7; // eax
  char *v8; // esi
  int k; // edi
  int result; // eax

  sub_1022E020(1);
  sub_1022E020(1);
  v2 = this + 20;
  v3 = 2;
  do
  {
    for ( i = *v2 - 1; i >= 0; --i )
      sub_10034930(*(_DWORD *)(*(v2 - 3) + 4 * i));
    *v2 = 0;
    v2 += 5;
    --v3;
  }
  while ( v3 );
  v5 = this + 27;
  for ( j = 1; j >= 0; --j )
  {
    v5 -= 5;
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
    v7 = *v5;
    v5[4] = *v5;
    if ( (int)v5[2] >= 0 )
    {
      if ( v7 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v7);
        *v5 = 0;
      }
      v5[1] = 0;
    }
  }
  v8 = (char *)(this + 16);
  for ( k = 1; k >= 0; --k )
  {
    v8 -= 32;
    result = sub_1022E180(v8);
  }
  return result;
}
