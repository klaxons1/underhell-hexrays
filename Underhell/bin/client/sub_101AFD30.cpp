int __stdcall sub_101AFD30(float *a1, float *a2)
{
  float *v2; // eax
  _DWORD v4[3]; // [esp+0h] [ebp-18h] BYREF
  float v5; // [esp+Ch] [ebp-Ch] BYREF
  float v6; // [esp+10h] [ebp-8h]
  float v7; // [esp+14h] [ebp-4h]

  sub_101356D0();
  v2 = sub_101356E0();
  *(float *)v4 = *v2;
  *(float *)&v4[1] = v2[1];
  *(float *)&v4[2] = v2[2];
  sub_101EE040(v4, &v5, 0, 0);
  v7 = 0.0;
  off_103EDFEC();
  *a2 = (atan2(
           ((v6 * 0.0 - 0.0 * v5) * a1[2] + (v7 * 0.0 - v6) * *a1 + (v5 - v7 * 0.0) * a1[1]) * -360.0,
           -360.0 * (v7 * a1[2] + v5 * *a1 + v6 * a1[1]))
       + 3.141592653589793)
      * 57.29577951308232;
  sub_10076740();
  return sub_10076720();
}
