_WORD *__thiscall sub_1007E840(int *this, __int16 a2)
{
  int v2; // eax
  int *v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  _WORD *result; // eax

  v2 = this[92];
  v3 = this + 91;
  v4 = this[94];
  if ( v4 + 1 > v2 )
    sub_1007D060(v3, v4 - v2 + 1);
  ++v3[3];
  v5 = *v3;
  v6 = v3[3] - v4 - 1;
  v3[4] = *v3;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 2 * v4 + 2), (const void *)(v5 + 2 * v4), 2 * v6);
  result = (_WORD *)(*v3 + 2 * v4);
  if ( result )
    *result = a2;
  return result;
}
