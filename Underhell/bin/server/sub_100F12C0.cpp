_DWORD *__thiscall sub_100F12C0(int this, int a2)
{
  int v3; // ecx
  _DWORD *result; // eax
  _DWORD *v5; // edx
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax

  v3 = *(_DWORD *)(this + 1604);
  result = 0;
  if ( v3 <= 0 )
    goto LABEL_7;
  v5 = *(_DWORD **)(this + 1592);
  while ( *v5 != a2 )
  {
    result = (_DWORD *)((char *)result + 1);
    ++v5;
    if ( (int)result >= v3 )
      goto LABEL_7;
  }
  if ( result == (_DWORD *)-1 )
  {
LABEL_7:
    v6 = *(_DWORD *)(this + 1596);
    v7 = v3;
    if ( v3 + 1 > v6 )
      sub_102ABFC0(v3 - v6 + 1);
    ++*(_DWORD *)(this + 1604);
    v8 = *(_DWORD *)(this + 1592);
    v9 = *(_DWORD *)(this + 1604) - v7 - 1;
    *(_DWORD *)(this + 1608) = v8;
    if ( v9 > 0 )
      memcpy((void *)(v8 + 4 * v7 + 4), (const void *)(v8 + 4 * v7), 4 * v9);
    result = (_DWORD *)(*(_DWORD *)(this + 1592) + 4 * v7);
    if ( result )
      *result = a2;
    *(_BYTE *)(this + 1612) = 1;
  }
  return result;
}
