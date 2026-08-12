void ***__cdecl sub_1014F160(unsigned __int16 a1)
{
  if ( a1 >= (unsigned __int16)word_103E83F2 || a1 == 0xFFFF )
    return &off_103E8400;
  else
    return *(void ****)(dword_103E83E4 + 16 * a1 + 12);
}
