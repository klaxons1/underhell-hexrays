int __thiscall sub_10137A90(
        int *this,
        int a2,
        float *a3,
        float *a4,
        int a5,
        int a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        int a15,
        float a16,
        float a17,
        float a18,
        float a19)
{
  double v19; // st7
  int v20; // eax
  int (__thiscall *v21)(int *, _DWORD *); // eax
  _DWORD v23[28]; // [esp+0h] [ebp-90h] BYREF
  char v24; // [esp+70h] [ebp-20h]
  int v25; // [esp+74h] [ebp-1Ch]
  int v26; // [esp+78h] [ebp-18h]

  v23[12] = 0;
  v23[14] = 0;
  v26 = 0;
  v23[0] = a2;
  *(float *)&v23[5] = *a3;
  v23[11] = a5;
  *(float *)&v23[6] = a3[1];
  v23[23] = a15;
  *(float *)&v23[7] = a3[2];
  *(float *)&v23[8] = *a4;
  v25 = -1;
  v19 = a4[1];
  v24 = 1;
  *(float *)&v23[9] = v19;
  *(float *)&v23[10] = a4[2];
  v23[13] = a6;
  v20 = *this;
  *(float *)&v23[15] = a7;
  v21 = *(int (__thiscall **)(int *, _DWORD *))(v20 + 72);
  *(float *)&v23[16] = a8;
  *(float *)&v23[17] = a9;
  *(float *)&v23[18] = a10;
  *(float *)&v23[19] = a11;
  *(float *)&v23[20] = a12;
  *(float *)&v23[21] = a13;
  *(float *)&v23[22] = a14;
  *(float *)&v23[24] = a16;
  *(float *)&v23[25] = a17;
  *(float *)&v23[26] = a18;
  *(float *)&v23[27] = a19;
  return v21(this, v23);
}
