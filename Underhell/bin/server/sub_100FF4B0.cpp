int __cdecl sub_100FF4B0(int a1, float *a2)
{
  float v3; // [esp+4h] [ebp-24h] BYREF
  float v4; // [esp+8h] [ebp-20h]
  float v5; // [esp+Ch] [ebp-1Ch]
  float v6; // [esp+10h] [ebp-18h] BYREF
  float v7; // [esp+14h] [ebp-14h]
  float v8; // [esp+18h] [ebp-10h]
  float v9; // [esp+1Ch] [ebp-Ch] BYREF
  float v10; // [esp+20h] [ebp-8h]
  float v11; // [esp+24h] [ebp-4h]

  v9 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  off_10689714();
  sub_10421D00(&v9, 0, a1);
  sub_10421CE0(a1, 2, &v3);
  v6 = v4 * v11 - v5 * v10;
  v7 = v5 * v9 - v11 * v3;
  v8 = v10 * v3 - v9 * v4;
  off_10689714();
  sub_10421D00(&v6, 1, a1);
  v3 = v8 * v10 - v7 * v11;
  v4 = v11 * v6 - v8 * v9;
  v5 = v9 * v7 - v6 * v10;
  return sub_10421D00(&v3, 2, a1);
}
