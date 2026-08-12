_DWORD *__thiscall sub_1012D670(int *this, int a2)
{
  _DWORD *result; // eax
  int v3; // eax
  int *v4; // esi
  int v5; // edi
  int v6; // ecx
  int v7; // eax

  result = (_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 252) & 1) == 0 )
  {
    v3 = this[2];
    v4 = this + 1;
    v5 = this[4];
    if ( v5 + 1 > v3 )
      sub_102ABFC0(v5 - v3 + 1);
    ++v4[3];
    v6 = *v4;
    v7 = v4[3] - v5 - 1;
    v4[4] = *v4;
    if ( v7 > 0 )
      memcpy((void *)(v6 + 4 * v5 + 4), (const void *)(v6 + 4 * v5), 4 * v7);
    result = (_DWORD *)(*v4 + 4 * v5);
    if ( result )
      *result = a2;
  }
  return result;
}
