int __fastcall sub_10142260(int a1)
{
  int result; // eax

  result = 0;
  if ( (a1 & 0x800) != 0 )
    result = 16;
  if ( (a1 & 0x20) != 0 )
    result |= 5u;
  if ( (a1 & 0x10) != 0 )
    result |= 6u;
  if ( (a1 & 0x40) != 0 )
    result |= 8u;
  if ( (a1 & 0x40000) != 0 )
    result |= 0x20u;
  if ( (a1 & 0x100000) != 0 )
    result |= 0x40u;
  if ( (a1 & 1) != 0 )
    result |= 0x80u;
  if ( (a1 & 2) != 0 )
    return result | 0x100;
  return result;
}
