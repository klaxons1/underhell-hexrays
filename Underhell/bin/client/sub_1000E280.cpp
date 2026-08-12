int __thiscall sub_1000E280(_BYTE *this)
{
  char v1; // cl
  int result; // eax

  v1 = this[321];
  result = 0;
  if ( (v1 & 1) != 0 )
    result = 32;
  if ( (v1 & 2) != 0 )
    return result | 0x10;
  return result;
}
