void sub_100375B0()
{
  int v0; // edx
  int i; // ecx
  int v2; // eax

  v0 = dword_10404D6C;
  for ( i = 0; i < v0; ++i )
  {
    v2 = *(_DWORD *)(dword_10404D60 + 4 * i);
    if ( (*(_DWORD *)(v2 + 112) & 0x201) != 0 )
      *(_DWORD *)(v2 + 312) |= 0x800u;
  }
}
