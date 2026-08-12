_WORD *__thiscall sub_101BF510(_WORD *this, _BYTE *a2)
{
  _WORD *result; // eax
  __int16 v3; // dx
  __int16 v4; // di
  __int16 v5; // dx
  __int16 v6; // cx

  result = this;
  LOBYTE(v3) = 0;
  HIBYTE(v3) = a2[2] >> 4;
  v4 = *this & 0xF0FF;
  *this = v4 | v3;
  v5 = (v4 | v3) & 0xFF0F | (16 * (a2[1] >> 4));
  *this = v5;
  v6 = v5 & 0xFFF0 | (*a2 >> 4);
  *result = v6;
  *result = v6 & 0xFFF | (a2[3] >> 4 << 12);
  return result;
}
