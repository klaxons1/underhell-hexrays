float *__thiscall sub_100EC3F0(int this, float *a2, float *a3, char a4)
{
  float *result; // eax

  *(float *)(this + 80) = *a2;
  *(float *)(this + 84) = a2[1];
  result = a3;
  *(float *)(this + 88) = a2[2];
  *(float *)(this + 92) = *a3;
  *(float *)(this + 96) = a3[1];
  *(float *)(this + 100) = a3[2];
  if ( a4 )
    *(_DWORD *)(this + 148) &= ~8u;
  return result;
}
