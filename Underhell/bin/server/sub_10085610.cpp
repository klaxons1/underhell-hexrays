int __thiscall sub_10085610(_DWORD *this, float *a2, int a3, int a4)
{
  int result; // eax
  float *v5; // eax

  result = dword_106935FC;
  if ( !*(_DWORD *)(dword_106935FC + 48) )
  {
    v5 = (float *)&this[6 * this[195] + 3];
    *v5 = *a2;
    v5[1] = a2[1];
    v5[2] = a2[2];
    this[6 * this[195] + 7] = a3;
    this[6 * this[195] + 8] = a4;
    result = this[195];
    *(float *)&this[6 * result + 6] = *(float *)(dword_106B31C8 + 12) + 10.0;
    if ( --this[195] < 0 )
      this[195] = 31;
  }
  return result;
}
