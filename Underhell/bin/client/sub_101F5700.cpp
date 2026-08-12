float *__thiscall sub_101F5700(int this)
{
  float *result; // eax
  float v3[3]; // [esp+4h] [ebp-18h] BYREF
  float v4[3]; // [esp+10h] [ebp-Ch] BYREF

  result = *(float **)(this + 12);
  if ( result )
  {
    v3[0] = *(float *)(this + 24) * 57.29578;
    v3[1] = 57.29578 * *(float *)(this + 28);
    v3[2] = 0.0;
    sub_101EDA00((int)result, 3, v4);
    return sub_101F0B70(v3, v4, *(float **)(this + 12));
  }
  return result;
}
