float *__thiscall sub_10124BD0(int this)
{
  int i; // edx
  float *result; // eax
  double v3; // st7
  double v4; // st6
  double v5; // st5
  double v6; // rt0
  double v7; // st5

  for ( i = 0; i < *(_DWORD *)(this + 2828); result[5] = *(float *)(this + 2848) / *(float *)(this + 2912) * result[5] )
  {
    result = (float *)(this + 24 * (((_BYTE)i++ + (unsigned __int8)*(_DWORD *)(this + 2824)) & 0x3F) + 1288);
    *result = *result - *(float *)(this + 2836);
    result[1] = result[1] - *(float *)(this + 2840);
    result[2] = result[2] - *(float *)(this + 2844);
    v3 = *(float *)(this + 2848) / *(float *)(this + 2912);
    v4 = *result * v3;
    *result = v4;
    v5 = result[1] * v3;
    result[1] = v5;
    v6 = v5;
    v7 = v3 * result[2];
    result[2] = v7;
    *result = v4 - *(float *)(this + 2900);
    result[1] = v6 - *(float *)(this + 2904);
    result[2] = v7 - *(float *)(this + 2908);
  }
  return result;
}
