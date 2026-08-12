_BYTE *__thiscall DName::operator=(_BYTE *this, char a2)
{
  this[4] = 0;
  *((_DWORD *)this + 1) &= 0xFFFF00FF;
  *(_DWORD *)this = 0;
  if ( a2 )
    DName::doPchar((DName *)this, &a2, 1u);
  return this;
}
