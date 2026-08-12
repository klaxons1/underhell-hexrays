double __cdecl sub_101C6890(float a1, float a2)
{
  double v2; // st6
  float v4; // [esp+0h] [ebp-4h]
  float v5; // [esp+8h] [ebp+4h]
  float v6; // [esp+8h] [ebp+4h]
  float v7; // [esp+8h] [ebp+4h]
  float v8; // [esp+8h] [ebp+4h]
  float v9; // [esp+8h] [ebp+4h]
  float v10; // [esp+8h] [ebp+4h]
  float v11; // [esp+8h] [ebp+4h]

  v5 = a1 * 2.0;
  v4 = v5 - 1.0;
  v6 = 2.0 * a2;
  v7 = v6 - 1.0;
  v2 = v7 * v7 + v4 * v4;
  if ( v2 >= 1.0 )
    v2 = 1.0;
  v8 = v2;
  v9 = 1.0 - v8;
  v10 = sqrt(v9);
  v11 = v10 + 1.0;
  return (float)(v11 * 0.5);
}
