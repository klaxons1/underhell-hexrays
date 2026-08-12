char __cdecl sub_10318DC0(float *a1)
{
  int v1; // esi
  unsigned int v2; // eax
  int v3; // ecx

  v1 = dword_106E3BFC - 1;
  if ( dword_106E3BFC - 1 < 0 )
    return 1;
  while ( 1 )
  {
    v2 = *(_DWORD *)(dword_106E3BF0 + 4 * v1);
    if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(dword_106E3BF0 + 4 * v1) & 0xFFF) + 2] != v2 >> 12 )
      v3 = 0;
    else
      v3 = off_1061BE18[4 * (*(_DWORD *)(dword_106E3BF0 + 4 * v1) & 0xFFF) + 1];
    if ( sub_101119E0(v3 + 320, a1) )
      break;
    if ( --v1 < 0 )
      return 1;
  }
  return 0;
}
