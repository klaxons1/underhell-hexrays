int __thiscall sub_1011FC50(_DWORD *this)
{
  int result; // eax

  result = sub_100DA1F0(this);
  if ( (this[62] & 0x100) != 0 )
    return result | 0x210;
  return result;
}
