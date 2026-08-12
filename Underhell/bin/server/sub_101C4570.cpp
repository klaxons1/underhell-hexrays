float *__thiscall sub_101C4570(int *this, int a2)
{
  int v2; // eax
  int *v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  float *result; // eax

  v2 = this[7];
  v3 = this + 6;
  v4 = this[9];
  if ( v4 + 1 > v2 )
    sub_101C12E0(v3, v4 - v2 + 1);
  ++v3[3];
  v5 = *v3;
  v6 = v3[3] - v4 - 1;
  v3[4] = *v3;
  if ( v6 > 0 )
    memcpy((void *)(104 * v4 + v5 + 104), (const void *)(104 * v4 + v5), 104 * v6);
  v7 = 104 * v4;
  *(_DWORD *)(v7 + *v3) = a2;
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  result = (float *)(v7 + *v3 + 4);
  *result = *(float *)(a2 + 580);
  result[1] = *(float *)(a2 + 584);
  result[2] = *(float *)(a2 + 588);
  return result;
}
