int __thiscall sub_10349370(
        void *this,
        int a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  int (__thiscall *v17)(void *, _DWORD *); // eax
  _DWORD v19[20]; // [esp+0h] [ebp-58h] BYREF
  __int16 v20; // [esp+50h] [ebp-8h]
  char v21; // [esp+53h] [ebp-5h]
  __int16 v22; // [esp+54h] [ebp-4h]

  *(float *)&v19[17] = 1.0;
  v19[0] = a2;
  *(float *)&v19[1] = *a3;
  v13 = a3[1];
  v19[15] = 0;
  *(float *)&v19[2] = v13;
  v19[19] = 0;
  v14 = a3[2];
  v19[13] = 0;
  *(float *)&v19[3] = v14;
  v15 = *a4;
  v22 = 0;
  *(float *)&v19[4] = v15;
  v21 = 0;
  v16 = a4[1];
  v20 = 1;
  *(float *)&v19[5] = v16;
  *(float *)&v19[6] = a4[2];
  *(float *)&v19[7] = *a5;
  *(float *)&v19[8] = a5[1];
  *(float *)&v19[9] = a5[2];
  v19[11] = a7;
  *(float *)&v19[10] = a6;
  v19[12] = a8;
  v19[14] = a11;
  v19[18] = a12;
  v17 = *(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 432);
  v19[16] = a13 != 0;
  return v17(this, v19);
}
