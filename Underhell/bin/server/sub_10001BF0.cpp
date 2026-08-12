int __thiscall sub_10001BF0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  result = this[28];
  if ( !result || a4 == result )
  {
    if ( ++this[29] == 5 )
      result = sub_100BC7D0(this);
    this[28] = a4;
  }
  else
  {
    this[28] = a4;
    this[29] = 1;
  }
  return result;
}
