float *__thiscall sub_100382D0(_DWORD *this, float *a2, float *a3)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // esi
  float *result; // eax

  v3 = this[81];
  if ( v3 != -1
    && (v4 = (int *)((char *)off_103DCD74 + 16 * (this[81] & 0xFFF) + 4), v4[1] == v3 >> 12)
    && (v5 = *v4) != 0 )
  {
    sub_10037F50(*v4);
    return (float *)sub_101ED860(a2, v5 + 660, a3);
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
