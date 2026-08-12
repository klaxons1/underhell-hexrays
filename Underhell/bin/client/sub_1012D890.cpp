_DWORD *__thiscall sub_1012D890(int *this, int a2)
{
  int v2; // eax
  int *v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  _DWORD *result; // eax

  v2 = this[4];
  v3 = this + 3;
  v4 = this[6];
  if ( v4 + 1 > v2 )
    sub_1010AFF0(v3, v4 - v2 + 1);
  ++v3[3];
  v5 = *v3;
  v6 = v3[3] - v4 - 1;
  v3[4] = *v3;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 4 * v4 + 4), (const void *)(v5 + 4 * v4), 4 * v6);
  result = (_DWORD *)(*v3 + 4 * v4);
  if ( result )
    *result = a2;
  return result;
}
