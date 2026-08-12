float *__cdecl sub_10234270(float *a1, float *a2)
{
  int v3; // [esp+Ch] [ebp-16Ch] BYREF
  float v4; // [esp+10h] [ebp-168h]
  float v5; // [esp+14h] [ebp-164h]
  float v6[16]; // [esp+18h] [ebp-160h] BYREF
  float v7[16]; // [esp+58h] [ebp-120h] BYREF
  float v8[12]; // [esp+98h] [ebp-E0h] BYREF
  float v9[12]; // [esp+C8h] [ebp-B0h] BYREF
  int v10[16]; // [esp+F8h] [ebp-80h] BYREF
  int v11[16]; // [esp+138h] [ebp-40h] BYREF

  sub_101F0B70(a2 + 3, a2, v8);
  qmemcpy(v6, v8, 0x30u);
  v6[12] = 0.0;
  v6[13] = 0.0;
  v6[14] = 0.0;
  v6[15] = 1.0;
  v5 = 1.0;
  *(float *)&v3 = 0.0;
  v4 = 0.0;
  sub_101F2440((float *)v10, (float *)&v3, -90.0);
  sub_101F1FF0(v6, (float *)v10, v6);
  *(float *)&v3 = 1.0;
  v4 = 0.0;
  v5 = 0.0;
  sub_101F2440((float *)v11, (float *)&v3, 90.0);
  sub_101F1FF0(v6, (float *)v11, v6);
  qmemcpy(v8, v6, sizeof(v8));
  sub_101F0AB0(v8, v9);
  qmemcpy(v7, v9, 0x30u);
  v7[12] = 0.0;
  v7[13] = 0.0;
  v7[14] = 0.0;
  v7[15] = 1.0;
  return sub_101F17F0(a1, v7);
}
