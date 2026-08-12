void __cdecl sub_102355B0(float *a1, float *a2, int a3, int a4)
{
  double v4; // st7
  double v5; // st5
  double v6; // st4
  double v7; // st3
  double v8; // st2
  double v9; // st6
  float v10; // [esp+0h] [ebp-1Ch]
  float v11; // [esp+4h] [ebp-18h] BYREF
  float v12; // [esp+8h] [ebp-14h]
  float v13; // [esp+Ch] [ebp-10h]
  float v14[3]; // [esp+10h] [ebp-Ch] BYREF

  sub_10235460(v14, &v11, a3, a4);
  v4 = v11;
  v5 = (v14[0] + v11) * 0.5;
  *a1 = v5;
  v6 = v12;
  v7 = (v14[1] + v12) * 0.5;
  a1[1] = v7;
  v8 = 0.5 * (v14[2] + v13);
  v9 = v13;
  a1[2] = v8;
  v10 = (v9 - v8) * (v9 - v8) + (v4 - v5) * (v4 - v5) + (v6 - v7) * (v6 - v7);
  *a2 = off_103EDFE0(v10);
}
