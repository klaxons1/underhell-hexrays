float *__thiscall sub_102A12B0(int this, int a2, int a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  float *result; // eax

  if ( !*(_BYTE *)(this + 100)
    || (v4 = *(_DWORD *)(this + 68), v4 == -1)
    || (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1],
        result = (float *)(v4 >> 12),
        (float *)off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != result)
    || !*v5 )
  {
    *(_BYTE *)(this + 100) = 1;
    if ( a2 )
      *(_DWORD *)(this + 68) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      *(_DWORD *)(this + 68) = -1;
    *(_DWORD *)(this + 16) = 0;
    return sub_102A0400(this);
  }
  return result;
}
