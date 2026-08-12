int __thiscall sub_100D15C0(_DWORD *this)
{
  unsigned int v2; // eax
  int result; // eax

  sub_100BDBA0((int)this);
  v2 = this[103];
  if ( v2 == -1
    || (result = v2 >> 12, off_1061BE18[4 * (this[103] & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (this[103] & 0xFFF) + 1] )
  {
    result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106B3CDC + 164))(dword_106B3CDC, this);
    if ( !(_BYTE)result )
      return sub_1025FAC0(this);
  }
  return result;
}
