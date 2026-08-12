bool __cdecl sub_1040B950(int a1, int a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a1 + 1712);
  if ( !a2 )
    return v2 != -1
        && off_1061BE18[4 * (*(_DWORD *)(a1 + 1712) & 0xFFF) + 2] == v2 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(a1 + 1712) & 0xFFF) + 1] != 0;
  if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1712) & 0xFFF) + 2] != *(_DWORD *)(a1 + 1712) >> 12 )
    return a2 == 0;
  else
    return off_1061BE18[4 * (*(_DWORD *)(a1 + 1712) & 0xFFF) + 1] == a2;
}
