int __thiscall sub_101E6820(_DWORD *this)
{
  int v1; // edx
  int result; // eax

  v1 = this[62];
  result = 0;
  if ( (v1 & 4) != 0 )
    result = 2;
  if ( (v1 & 8) != 0 )
    result |= 4u;
  if ( (v1 & 0x10) != 0 )
    result |= 0x20u;
  if ( (v1 & 0x20) != 0 )
    result |= 0x20000u;
  if ( (v1 & 0x40) != 0 || (v1 & 1) != 0 )
    result |= 0x801u;
  if ( (v1 & 0x80) != 0 )
    return result | 0x80000;
  return result;
}
