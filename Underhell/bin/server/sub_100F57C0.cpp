bool __thiscall sub_100F57C0(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  bool result; // al

  v1 = this[855];
  result = v1 != -1 && (v2 = &off_1061BE18[4 * (this[855] & 0xFFF) + 1], v2[1] == v1 >> 12) && *v2 != 0;
  return result;
}
