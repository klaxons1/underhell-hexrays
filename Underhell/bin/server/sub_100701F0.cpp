const char *__cdecl sub_100701F0(int a1)
{
  int v1; // eax

  v1 = 0;
  while ( dword_10607330[2 * v1] != *(__int16 *)(a1 + 816) )
  {
    if ( (unsigned int)++v1 >= 0x1A )
      return "Obsolete / Unused";
  }
  return (&off_10607334)[2 * v1];
}
