void sub_1018CFC0()
{
  int v0; // esi
  int v1; // eax
  int v2; // esi
  _DWORD *v3; // edi

  v0 = dword_10632630;
  dword_1063261C = 1;
  if ( dword_10632630 != -1 )
  {
    v1 = dword_10632624;
    do
    {
      v2 = 12 * v0;
      v3 = *(_DWORD **)(v2 + v1);
      *v3 = dword_1063261C++;
      sub_1019FF30(v3);
      sub_1019FC80(v3);
      v1 = dword_10632624;
      v0 = *(_DWORD *)(v2 + dword_10632624 + 8);
    }
    while ( v0 != -1 );
  }
}
