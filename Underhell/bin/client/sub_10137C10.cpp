int __thiscall sub_10137C10(
        void *this,
        float *a2,
        float a3,
        float a4,
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
        float a19,
        int a20)
{
  int (__thiscall *v20)(void *, _DWORD *); // eax
  _DWORD v22[28]; // [esp+0h] [ebp-90h] BYREF
  char v23; // [esp+70h] [ebp-20h]
  int v24; // [esp+74h] [ebp-1Ch]
  int v25; // [esp+78h] [ebp-18h]
  float v26; // [esp+7Ch] [ebp-14h]
  float v27; // [esp+80h] [ebp-10h]
  float v28; // [esp+84h] [ebp-Ch]
  float v29; // [esp+88h] [ebp-8h]
  float v30; // [esp+8Ch] [ebp-4h]

  *(float *)&v22[15] = a7;
  v22[0] = 0;
  *(float *)&v22[16] = a8;
  v22[12] = 0;
  v22[14] = 0;
  *(float *)&v22[17] = a9;
  v22[11] = a5;
  *(float *)&v22[18] = a10;
  v22[23] = a15;
  *(float *)&v22[19] = a11;
  v22[13] = a6;
  *(float *)&v22[20] = a12;
  v25 = a20;
  *(float *)&v22[21] = a13;
  *(float *)&v22[22] = a14;
  v24 = -1;
  v23 = 1;
  *(float *)&v22[24] = a16;
  *(float *)&v22[25] = a17;
  *(float *)&v22[26] = a18;
  *(float *)&v22[27] = a19;
  v26 = *a2;
  v27 = a2[1];
  v20 = *(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 64);
  v28 = a2[2];
  v29 = a3;
  v30 = a4;
  return v20(this, v22);
}
