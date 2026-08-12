void sub_1019EAB0()
{
  int v0; // esi
  int v1; // eax
  int v2; // esi

  v0 = dword_10632630;
  if ( dword_10632630 != -1 )
  {
    v1 = dword_10632624;
    do
    {
      v2 = 12 * v0;
      sub_101902E0(*(_DWORD *)(v2 + v1));
      v1 = dword_10632624;
      v0 = *(_DWORD *)(v2 + dword_10632624 + 8);
    }
    while ( v0 != -1 );
  }
}
