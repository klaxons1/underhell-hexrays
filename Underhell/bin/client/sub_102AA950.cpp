int *__thiscall sub_102AA950(_DWORD *this)
{
  if ( *this == 5 )
    return (int *)this[2];
  if ( (dword_104828D4 & 1) == 0 )
  {
    dword_104828D4 |= 1u;
    sub_1022D3E0(&dword_104828C4);
    atexit(sub_102CE6D0);
  }
  sub_1022CFC0((char **)&dword_104828C4, 0);
  return &dword_104828C4;
}
