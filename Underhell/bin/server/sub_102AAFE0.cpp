float *__thiscall sub_102AAFE0(int this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  float *result; // eax

  v3 = *(_DWORD *)(this + 8);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 8) & 0xFFF) + 1], v4[1] != v3 >> 12) || !*v4 )
    sub_102AA950(this, this);
  v5 = *(_DWORD *)(this + 8);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 8) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 8) & 0xFFF) + 1];
  result = (float *)sub_100F9650(v6);
  *(float *)(this + 16) = *a2 * 1000.0 + *result;
  *(float *)(this + 20) = a2[1] * 1000.0 + result[1];
  *(float *)(this + 24) = 1000.0 * a2[2] + result[2];
  return result;
}
