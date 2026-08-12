unsigned int __thiscall sub_101088B0(_DWORD *this)
{
  bool v2; // bl
  unsigned int result; // eax

  v2 = (this[62] & 0x400) != 0;
  result = (v2 ? 0x210 : 0) | sub_100DA1F0(this) & 0xFFFFFFFD;
  if ( (this[62] & 0x400) != 0 )
    result |= 0x220u;
  return result;
}
