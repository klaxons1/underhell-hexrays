unsigned int __thiscall sub_10336CF0(int this)
{
  unsigned int result; // eax

  result = sub_100DA1F0((_DWORD *)this) & 0xFFFFFFF5 | 8;
  if ( *(_BYTE *)(this + 800) )
    result |= 0x80000000;
  return result;
}
