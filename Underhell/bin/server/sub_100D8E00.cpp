float *__thiscall sub_100D8E00(_DWORD *this, float *a2, float *a3)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // esi
  float *result; // eax

  v3 = this[77];
  if ( v3 != -1 && (v4 = &off_1061BE18[4 * (this[77] & 0xFFF) + 1], v4[1] == v3 >> 12) && (v5 = *v4) != 0 )
  {
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(*v4);
    return (float *)sub_10421B40(a2, v5 + 500, a3);
  }
  else
  {
    result = a2;
    *a3 = *a2;
    a3[1] = a2[1];
    a3[2] = a2[2];
  }
  return result;
}
