bool __thiscall sub_102CA1F0(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  bool result; // al

  v1 = this[230];
  result = v1 != -1 && (v2 = &off_1061BE18[4 * (this[230] & 0xFFF) + 1], v2[1] == v1 >> 12) && *v2 != 0;
  return result;
}
