void sub_1019EF70()
{
  int v0; // esi
  int v1; // eax
  int v2; // esi
  int v3; // esi
  int v4; // eax
  int v5; // esi
  void (__thiscall ***v6)(_DWORD, int); // ecx

  v0 = dword_10632630;
  if ( dword_10632630 != -1 )
  {
    v1 = dword_10632624;
    do
    {
      v2 = 12 * v0;
      sub_1018EC70((_DWORD *)(*(_DWORD *)(v2 + v1) + 84));
      v1 = dword_10632624;
      v0 = *(_DWORD *)(v2 + dword_10632624 + 8);
    }
    while ( v0 != -1 );
  }
  v3 = dword_1063282C;
  dword_1063281C = 0;
  if ( dword_1063282C != -1 )
  {
    v4 = dword_10632820;
    do
    {
      v5 = 12 * v3;
      v6 = *(void (__thiscall ****)(_DWORD, int))(v5 + v4);
      if ( v6 )
      {
        (**v6)(v6, 1);
        v4 = dword_10632820;
      }
      v3 = *(_DWORD *)(v5 + v4 + 8);
    }
    while ( v3 != -1 );
  }
  sub_1018EC70(&dword_10632820);
}
