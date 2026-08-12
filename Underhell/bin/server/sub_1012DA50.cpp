_DWORD *__thiscall sub_1012DA50(int *this, int a2, int a3)
{
  int v3; // eax
  int *v4; // esi
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  _DWORD *result; // eax

  *(_DWORD *)(a3 + 252) |= 0x40u;
  v3 = this[3];
  v4 = this + 2;
  v5 = this[5];
  if ( v5 + 1 > v3 )
    sub_10226330(v5 - v3 + 1);
  ++v4[3];
  v6 = *v4;
  v7 = v4[3] - v5 - 1;
  v4[4] = *v4;
  if ( v7 > 0 )
    memcpy((void *)(v6 + 8 * v5 + 8), (const void *)(v6 + 8 * v5), 8 * v7);
  result = (_DWORD *)(*v4 + 8 * v5);
  result[1] = a3;
  *result = a2;
  return result;
}
