void __cdecl sub_10191A10(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // [esp+10h] [ebp-18h] BYREF
  float v5; // [esp+14h] [ebp-14h]
  float v6; // [esp+18h] [ebp-10h]
  int v7; // [esp+1Ch] [ebp-Ch] BYREF
  float v8; // [esp+20h] [ebp-8h]
  float v9; // [esp+24h] [ebp-4h]

  v3 = dword_106326A0[a3];
  v7 = *(int *)a2;
  v8 = *(float *)(a2 + 4);
  v9 = *(float *)(a2 + 8) + 1.0;
  v4 = *(int *)a1;
  v5 = *(float *)(a1 + 4);
  v6 = *(float *)(a1 + 8) + 1.0;
  sub_1011BC50((float *)&v4, (float *)&v7, (unsigned __int8)v3 >> 1, BYTE1(v3) >> 1, BYTE2(v3) >> 1, 1, 0.1);
  v4 = *(int *)a2;
  v5 = *(float *)(a2 + 4);
  v6 = *(float *)(a2 + 8) + 1.0;
  v7 = *(int *)a1;
  v8 = *(float *)(a1 + 4);
  v9 = *(float *)(a1 + 8) + 1.0;
  sub_1011BC50((float *)&v7, (float *)&v4, (unsigned __int8)v3, BYTE1(v3), BYTE2(v3), 0, 0.15000001);
}
