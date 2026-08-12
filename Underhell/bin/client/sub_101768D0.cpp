int __cdecl sub_101768D0(int a1, float *a2, float *a3, int a4, float a5, float *a6, int a7, float a8)
{
  double v8; // st7
  double v9; // st7
  _DWORD v11[28]; // [esp+0h] [ebp-90h] BYREF
  char v12; // [esp+70h] [ebp-20h]
  int v13; // [esp+74h] [ebp-1Ch]
  int v14; // [esp+78h] [ebp-18h]

  v11[11] = -1;
  v11[13] = -1;
  *(float *)&v11[5] = *a2;
  v11[14] = 0;
  v8 = a2[1];
  v11[23] = 0;
  *(float *)&v11[6] = v8;
  *(float *)&v11[7] = a2[2];
  v14 = a7;
  *(float *)&v11[8] = *a3;
  v11[0] = 9;
  v9 = a3[1];
  v13 = 20;
  *(float *)&v11[9] = v9;
  v12 = 1;
  *(float *)&v11[10] = a3[2];
  v11[12] = a4;
  *(float *)&v11[15] = 0.0;
  *(float *)&v11[16] = a8;
  *(float *)&v11[17] = a5;
  *(float *)&v11[18] = 1.0;
  *(float *)&v11[19] = 0.30000001;
  *(float *)&v11[20] = 16.0;
  *(float *)&v11[21] = 200.0;
  *(float *)&v11[22] = 0.0;
  *(float *)&v11[24] = 1.0;
  *(float *)&v11[25] = *a6 * 255.0;
  *(float *)&v11[26] = a6[1] * 255.0;
  *(float *)&v11[27] = 255.0 * a6[2];
  return (*((int (__thiscall **)(void ***, _DWORD *))*off_103E773C[0] + 12))(off_103E773C[0], v11);
}
