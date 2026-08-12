void __usercall sub_10016EC0(float *a1@<eax>, float *a2@<esi>)
{
  float *v2; // eax
  float v3; // [esp+0h] [ebp-Ch]
  float v4; // [esp+4h] [ebp-8h]
  float v5; // [esp+8h] [ebp-4h]

  v3 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  off_103EDFEC();
  v2 = (float *)sub_101422E0();
  *a2 = v2[1] * v5 - v2[2] * v4;
  a2[1] = v2[2] * v3 - v5 * *v2;
  a2[2] = v4 * *v2 - v3 * v2[1];
  off_103EDFEC();
}
