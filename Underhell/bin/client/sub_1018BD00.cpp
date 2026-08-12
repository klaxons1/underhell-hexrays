float *__thiscall sub_1018BD00(float *this, double *a2)
{
  float *result; // eax
  double v3; // st7
  float v4; // [esp+8h] [ebp+8h]

  result = this;
  v3 = *a2;
  v4 = v3;
  if ( *(_DWORD *)this != LODWORD(v4) )
    *this = v3;
  return result;
}
