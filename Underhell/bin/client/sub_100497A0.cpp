float *__thiscall sub_100497A0(_DWORD *this, float *a2, int a3)
{
  unsigned int v3; // edx
  int *v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  float *result; // eax

  v3 = this[80];
  if ( v3 != -1
    && (v4 = (int *)((char *)off_103DCD74 + 16 * (this[80] & 0xFFF) + 4),
        v5 = v3 >> 12,
        *((_DWORD *)off_103DCD74 + 4 * (this[80] & 0xFFF) + 2) == v5)
    && *v4 )
  {
    if ( *((_DWORD *)off_103DCD74 + 4 * (this[80] & 0xFFF) + 2) == v5 )
      v6 = *v4;
    else
      v6 = 0;
    return (float *)(*(int (__thiscall **)(int, float *, int))(*(_DWORD *)(v6 + 4) + 80))(v6 + 4, a2, a3);
  }
  else
  {
    result = (float *)(*(int (__thiscall **)(_DWORD *))(*(this - 1) + 36))(this - 1);
    *a2 = *result;
    a2[1] = result[1];
    a2[2] = result[2];
  }
  return result;
}
