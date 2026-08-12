int *__thiscall sub_102AAAD0(_BYTE *this, _BYTE *Src)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)sub_102AA770(this, Src);
  if ( v2 )
    return sub_102AA950(v2);
  if ( (dword_104828E8 & 1) == 0 )
  {
    dword_104828E8 |= 1u;
    sub_1022D3E0(&dword_104828D8);
    atexit(sub_102CE710);
  }
  sub_1022CFC0((char **)&dword_104828D8, 0);
  return &dword_104828D8;
}
