int __thiscall sub_10035510(int *this, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  int *v5; // esi
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax

  result = dword_106B345C;
  if ( *(_DWORD *)(dword_106B345C + 48) )
  {
    v4 = this[2];
    v5 = this + 1;
    v6 = this[4];
    if ( v6 + 1 > v4 )
      sub_102ABFC0(v6 - v4 + 1);
    ++v5[3];
    v7 = *v5;
    v8 = v5[3] - v6 - 1;
    v5[4] = *v5;
    if ( v8 > 0 )
      memcpy((void *)(v7 + 4 * v6 + 4), (const void *)(v7 + 4 * v6), 4 * v8);
    v9 = (_DWORD *)(*v5 + 4 * v6);
    if ( v9 )
      *v9 = a3;
    result = a2;
    *(_BYTE *)(a2 + 3549) = 1;
  }
  return result;
}
