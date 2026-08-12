bool __thiscall sub_102E8270(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // ecx
  bool result; // al

  v2 = *(_DWORD *)(this[1] + 5144);
  result = v2 != -1
        && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this[1] + 5144) & 0xFFF) + 1], v3[1] == v2 >> 12)
        && *v3 != 0;
  return result;
}
