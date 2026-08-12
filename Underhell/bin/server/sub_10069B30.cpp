unsigned int __thiscall sub_10069B30(_BYTE *this)
{
  unsigned int result; // eax

  result = sub_100DA1F0() & 0xFFFFFFFD;
  if ( this[830] )
    result |= 0x80000000;
  return result;
}
