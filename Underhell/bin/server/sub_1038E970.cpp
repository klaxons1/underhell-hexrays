bool __thiscall sub_1038E970(_DWORD *this)
{
  return (this[62] & 0x800000) == 0
      && (this[1105] == -1
       || off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != this[1105] >> 12
       || !off_1061BE18[4 * (this[1105] & 0xFFF) + 1])
      && this[1044] >= 1;
}
