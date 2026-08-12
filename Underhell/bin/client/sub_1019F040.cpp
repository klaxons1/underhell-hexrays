int *sub_1019F040()
{
  if ( (dword_10449500 & 1) == 0 )
  {
    dword_10449500 |= 1u;
    dword_104494E4 = (int)"C_PropCannon";
    dword_104494EC = 0;
    dword_104494F0 = 0;
    dword_104494F4 = 0;
    dword_104494F8 = 0;
    dword_104494FC = 0;
    dword_104494E8 = 12;
    atexit(sub_102CD980);
  }
  dword_103EB5F4 = (int)&dword_103D8A64;
  dword_103EB5EC = 1;
  dword_103EB5E8 = (int)asc_103EB66C;
  return &dword_103EB5E8;
}
