void __cdecl sub_10191B30(int a1, int a2, float a3, int a4)
{
  int v4; // ebx
  int v5; // [esp+28h] [ebp-18h] BYREF
  float v6; // [esp+2Ch] [ebp-14h]
  float v7; // [esp+30h] [ebp-10h]
  int v8; // [esp+34h] [ebp-Ch] BYREF
  float v9; // [esp+38h] [ebp-8h]
  float v10; // [esp+3Ch] [ebp-4h]

  v4 = dword_106326A0[a4];
  v8 = *(int *)a2;
  v9 = *(float *)(a2 + 4);
  v10 = *(float *)(a2 + 8) + 1.0;
  v5 = *(int *)a1;
  v6 = *(float *)(a1 + 4);
  v7 = *(float *)(a1 + 8) + 1.0;
  sub_1011C3A0((float *)&v5, (float *)&v8, a3, (unsigned __int8)v4 >> 1, BYTE1(v4) >> 1, BYTE2(v4) >> 1, 255, 1, 0.1);
  v5 = *(int *)a2;
  v6 = *(float *)(a2 + 4);
  v7 = *(float *)(a2 + 8) + 1.0;
  v8 = *(int *)a1;
  v9 = *(float *)(a1 + 4);
  v10 = *(float *)(a1 + 8) + 1.0;
  sub_1011C3A0((float *)&v8, (float *)&v5, a3, (unsigned __int8)v4, BYTE1(v4), BYTE2(v4), 255, 0, 0.15000001);
}
