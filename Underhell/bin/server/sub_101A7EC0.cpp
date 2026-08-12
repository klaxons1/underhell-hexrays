int __thiscall sub_101A7EC0(_DWORD *this, int a2)
{
  int result; // eax

  result = this[64] >> 27;
  if ( (this[64] & 0x8000000) == 0 )
  {
    result = *(_DWORD *)(dword_106B91BC + 48) / 2;
    if ( this[429] >= result )
      return sub_1023C380((int)"Zombine.Pain", 0.0, 0);
  }
  return result;
}
