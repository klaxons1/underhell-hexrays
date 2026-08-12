float *__thiscall sub_1033ECF0(int this, float *a2, int a3, float a4)
{
  float *result; // eax

  sub_10021390((float *)this, a2, a3, a4);
  result = a2;
  if ( (*(_BYTE *)(this + 256) & 2) != 0 )
  {
    *a2 = *a2;
    a2[1] = a2[1];
    a2[2] = a2[2] - 24.0;
  }
  return result;
}
