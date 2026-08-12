int __thiscall sub_10137CD0(
        int *this,
        int a2,
        int a3,
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
        float a18,
        int a19)
{
  int v20; // eax
  int (__thiscall *v21)(int *, _DWORD *); // edx
  _DWORD v23[28]; // [esp+8h] [ebp-90h] BYREF
  char v24; // [esp+78h] [ebp-20h]
  int v25; // [esp+7Ch] [ebp-1Ch]
  int v26; // [esp+80h] [ebp-18h]

  v23[0] = 0;
  v23[12] = 0;
  v23[14] = 0;
  v26 = 0;
  v25 = -1;
  v24 = 1;
  v23[2] = (a2 >> 12) & 0xF;
  v23[1] = sub_1007A6A0(off_103DCD78, a2 & 0xFFF);
  *(float *)&v23[15] = a6;
  *(float *)&v23[16] = a7;
  v23[3] = sub_1007A6A0(off_103DCD78, a3 & 0xFFF);
  *(float *)&v23[17] = a8;
  v23[11] = a4;
  *(float *)&v23[18] = a9;
  v23[23] = a14;
  *(float *)&v23[19] = a10;
  v23[13] = a5;
  v20 = *this;
  *(float *)&v23[20] = a11;
  *(float *)&v23[21] = a12;
  v26 = a19;
  v21 = *(int (__thiscall **)(int *, _DWORD *))(v20 + 56);
  *(float *)&v23[22] = a13;
  *(float *)&v23[24] = a15;
  v23[4] = (a3 >> 12) & 0xF;
  *(float *)&v23[25] = a16;
  *(float *)&v23[26] = a17;
  *(float *)&v23[27] = a18;
  return v21(this, v23);
}
