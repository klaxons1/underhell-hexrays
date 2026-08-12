int __thiscall sub_102AB8F0(int this, int a2, float *a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int result; // eax

  v4 = *(_DWORD *)(this + 8);
  if ( v4 == -1
    || (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 8) & 0xFFF) + 1], result = v4 >> 12, v5[1] != result)
    || !*v5 )
  {
    *(float *)(this + 28) = *a3;
    *(float *)(this + 32) = a3[1];
    *(float *)(this + 36) = a3[2];
    off_10689714();
    *(_DWORD *)(this + 56) = a2;
    return sub_102AA950(this, this);
  }
  return result;
}
