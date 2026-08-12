unsigned int __thiscall sub_10051B20(_DWORD *this)
{
  unsigned int result; // eax
  int v2; // edx
  int v3; // esi
  int v4; // eax
  int v5[3]; // [esp+20h] [ebp-Ch] BYREF

  result = this[5];
  if ( result != -1 )
  {
    result >>= 12;
    if ( off_1061BE18[4 * (this[5] & 0xFFF) + 2] == result )
    {
      if ( off_1061BE18[4 * (this[5] & 0xFFF) + 1] )
      {
        v2 = this[8];
        v3 = this[1];
        v5[0] = this[7];
        v4 = this[9];
        v5[1] = v2;
        v5[2] = v4;
        if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
          sub_100DAE60(v3);
        return sub_1011C3A0(v3 + 580, (int)v5, 16.0, 0, 255, 0, 0, 1, 0.0);
      }
    }
  }
  return result;
}
