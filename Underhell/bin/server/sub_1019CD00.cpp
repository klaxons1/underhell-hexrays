void __thiscall sub_1019CD00(void *this)
{
  int v1; // esi
  int v3; // eax
  int v4; // esi

  v1 = dword_10632630;
  if ( dword_10632630 != -1 )
  {
    v3 = dword_10632624;
    do
    {
      v4 = 12 * v1;
      sub_10190CF0(*(int **)(v4 + v3), (int)this);
      v3 = dword_10632624;
      v1 = *(_DWORD *)(v4 + dword_10632624 + 8);
    }
    while ( v1 != -1 );
  }
}
