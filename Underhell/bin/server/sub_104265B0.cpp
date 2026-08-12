int *__thiscall sub_104265B0(int *this, int a2)
{
  if ( !dword_106FD9F0 )
  {
    sub_10426490();
    dword_106FD9F0 = 1;
  }
  if ( a2 >= 1 )
  {
    *this = a2;
    this[1] = 16 * a2;
  }
  else
  {
    *this = 1;
    this[1] = 8;
  }
  this[2] = sub_10184390((12 * (unsigned __int64)(unsigned int)this[1]) >> 32 != 0 ? -1 : 12 * this[1]);
  return this;
}
