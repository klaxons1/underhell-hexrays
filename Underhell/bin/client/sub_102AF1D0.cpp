unsigned int __thiscall sub_102AF1D0(float *this, unsigned int a2)
{
  unsigned int result; // eax
  float *v3; // edx
  int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // eax

  *((_DWORD *)this + 220) = this + 92;
  result = a2;
  *((_DWORD *)this + 221) = this + 216;
  v3 = this + 2;
  v4 = 55;
  do
  {
    *(v3 - 2) = (double)HIWORD(result) * 0.0000152587890625;
    v5 = -1153374675 - 1153374675 * result;
    *(v3 - 1) = (double)HIWORD(v5) * 0.0000152587890625;
    *v3 = (double)((-1153374675 - 1153374675 * v5) >> 16) * 0.0000152587890625;
    v6 = -1153374675 - 1153374675 * (-1153374675 - 1153374675 * v5);
    v3[1] = (double)HIWORD(v6) * 0.0000152587890625;
    v3 += 4;
    --v4;
    result = -1153374675 - 1153374675 * v6;
  }
  while ( v4 );
  return result;
}
