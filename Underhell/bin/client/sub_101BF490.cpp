_WORD *__thiscall sub_101BF490(_WORD *this, _BYTE *a2)
{
  _WORD *result; // eax
  __int16 v3; // dx
  __int16 v4; // si
  __int16 v5; // cx

  result = this;
  v3 = *this & 0x83FF | (a2[2] >> 3 << 10);
  *this = v3;
  v4 = v3 & 0xFC1F | (32 * (a2[1] >> 3));
  *this = v4;
  v5 = v4 & 0xFFE0 | (*a2 >> 3);
  *result = v5;
  *result = v5 & 0x7FFF | (a2[3] >> 7 << 15);
  return result;
}
