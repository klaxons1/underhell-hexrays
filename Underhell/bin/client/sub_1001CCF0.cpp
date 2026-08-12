void __thiscall sub_1001CCF0(float *this, float *a2, int a3)
{
  this[24] = *a2;
  this[25] = a2[1];
  this[26] = a2[2];
  if ( *(float *)(a3 + 8) <= 0.9999 )
  {
    if ( *(float *)(a3 + 8) <= 0.707 )
      this[26] = this[26] - this[21];
    else
      this[26] = this[26] - sqrt(1.0 - *(float *)(a3 + 8) * *(float *)(a3 + 8)) / *(float *)(a3 + 8) * this[21];
  }
}
