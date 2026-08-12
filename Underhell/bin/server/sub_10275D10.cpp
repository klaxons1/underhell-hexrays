void ***__cdecl sub_10275D10(unsigned __int16 a1)
{
  if ( a1 >= (unsigned __int16)word_106567CA || a1 == 0xFFFF )
    return &off_106567D8;
  else
    return *(void ****)(dword_106567BC + 16 * a1 + 12);
}
