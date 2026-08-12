int __thiscall sub_101379D0(
        int *this,
        float *a2,
        float *a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        int a14,
        float a15,
        float a16,
        float a17,
        float a18)
{
  int v18; // edx
  int (__thiscall *v19)(int *, _DWORD *); // edx
  double v20; // st7
  _DWORD v22[28]; // [esp+0h] [ebp-90h] BYREF
  char v23; // [esp+70h] [ebp-20h]
  int v24; // [esp+74h] [ebp-1Ch]
  int v25; // [esp+78h] [ebp-18h]

  v22[0] = 0;
  v22[12] = 0;
  v22[14] = 0;
  v25 = 0;
  *(float *)&v22[5] = *a2;
  v22[13] = a5;
  v18 = *this;
  *(float *)&v22[6] = a2[1];
  v19 = *(int (__thiscall **)(int *, _DWORD *))(v18 + 48);
  *(float *)&v22[7] = a2[2];
  v24 = -1;
  v20 = *a3;
  v23 = 1;
  *(float *)&v22[8] = v20;
  *(float *)&v22[9] = a3[1];
  *(float *)&v22[10] = a3[2];
  v22[11] = a4;
  *(float *)&v22[15] = a6;
  v22[23] = a14;
  *(float *)&v22[16] = a7;
  *(float *)&v22[17] = a8;
  *(float *)&v22[18] = a9;
  *(float *)&v22[19] = a10;
  *(float *)&v22[20] = a11;
  *(float *)&v22[21] = a12;
  *(float *)&v22[22] = a13;
  *(float *)&v22[24] = a15;
  *(float *)&v22[25] = a16;
  *(float *)&v22[26] = a17;
  *(float *)&v22[27] = a18;
  return v19(this, v22);
}
