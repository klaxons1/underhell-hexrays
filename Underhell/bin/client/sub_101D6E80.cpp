int __stdcall sub_101D6E80(int a1, _DWORD *a2)
{
  int v2; // edx
  BOOL v3; // esi
  unsigned __int8 v4; // al
  int v5; // eax
  int v6; // eax

  v2 = 0;
  a2[1] = 0;
  *a2 = 0;
  do
  {
    v3 = v2 >= 8;
    v4 = (int)(*(float *)(a1 + 4 * v2) * 255.0 + 0.5);
    v5 = (v4 + 8 - ((v4 & 0xF0u) < 0x80) - (v4 >> 4)) >> 4;
    if ( (unsigned __int8)v5 > 0xFu )
      LOBYTE(v5) = 15;
    v6 = (unsigned __int8)v5 << (4 * (v2++ & 7));
    a2[v3] |= v6;
  }
  while ( v2 < 16 );
  return 0;
}
