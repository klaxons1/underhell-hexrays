char __cdecl sub_10415A10(unsigned int a1)
{
  if ( a1 == -1 || off_1061BE18[4 * (a1 & 0xFFF) + 2] != a1 >> 12 )
    return MEMORY[0x858];
  else
    return *(_BYTE *)(off_1061BE18[4 * (a1 & 0xFFF) + 1] + 2136);
}
