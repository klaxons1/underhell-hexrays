int __cdecl sub_101765A0(int a1, int a2)
{
  double v2; // st7
  int v3; // edi
  int result; // eax
  float v5; // [esp+0h] [ebp-30h]
  float v6; // [esp+8h] [ebp-28h]
  int v7[3]; // [esp+20h] [ebp-10h] BYREF
  float v8; // [esp+2Ch] [ebp-4h]

  sub_101EDFB0(a2);
  v2 = 100.0;
  v8 = 100.0;
  v3 = 5;
  do
  {
    v6 = 0.30000001 * v2;
    v5 = v2;
    result = sub_1008DBD0(a1, (int)v7, v5, 32.0, v6, 5.0, 0.30000001, (int)"effects/bluespark");
    v2 = v8 * 1.5;
    --v3;
    v8 = v2;
  }
  while ( v3 );
  return result;
}
