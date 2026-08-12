void __thiscall sub_1018B720(float *this)
{
  int v1; // edx
  double v2; // st6
  double v3; // st6

  v1 = dword_106B31C8;
  v2 = this[17] - (*(float *)(dword_106B31C8 + 12) - this[19]) * 0.0083333338;
  this[17] = v2;
  if ( v2 < 0.0 )
    this[17] = 0.0;
  this[19] = *(float *)(v1 + 12);
  v3 = this[18] - 0.0083333338 * (*(float *)(v1 + 12) - this[20]);
  this[18] = v3;
  if ( v3 < 0.0 )
    this[18] = 0.0;
  this[20] = *(float *)(v1 + 12);
}
