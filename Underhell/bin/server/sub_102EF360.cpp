double sub_102EF360()
{
  int *v0; // eax

  if ( dword_10668F04 == -1 )
    return 1.0;
  v0 = &off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 1];
  if ( off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 2] != (unsigned int)dword_10668F04 >> 12 || !*v0 )
    return 1.0;
  if ( off_1061BE18[4 * (dword_10668F04 & 0xFFF) + 2] == (unsigned int)dword_10668F04 >> 12 )
    return *(float *)(*v0 + 804);
  return MEMORY[0x324];
}
