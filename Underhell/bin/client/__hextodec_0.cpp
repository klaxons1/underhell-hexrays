int __cdecl _hextodec_0(unsigned __int16 a1)
{
  if ( (a1 & 0xFF00) != 0 || !isdigit((unsigned __int8)a1) )
    return (a1 & 0xFFDF) - 7;
  else
    return a1;
}
