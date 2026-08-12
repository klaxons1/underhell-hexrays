float *__thiscall sub_101859B0(int this, float *a2, float *a3)
{
  bool v4; // zf
  double v5; // st7
  float *result; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  int v10; // [esp+Ch] [ebp-18h] BYREF
  float v11; // [esp+10h] [ebp-14h]
  float v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+18h] [ebp-Ch] BYREF
  int v14; // [esp+1Ch] [ebp-8h] BYREF
  float v15; // [esp+20h] [ebp-4h]

  v4 = *(_BYTE *)(this + 6388) == 0;
  v5 = 90.0;
  v15 = *(float *)(this + 6372) - 90.0;
  if ( v4 )
  {
    if ( !*(_BYTE *)(this + 6332) )
      v5 = 0.0;
    v15 = v5;
  }
  sub_102361D0(&v13, &v14);
  *(float *)&v10 = *a3 - *(float *)(this + 6360);
  v11 = a3[1] - *(float *)(this + 6364);
  v12 = 0.0;
  sub_101EE800((int)&v10, v15, (int)&v10);
  result = a2;
  v7 = *(float *)(this + 6348) * *(float *)(this + 6344) * 0.0009765625;
  v8 = v7 * v11;
  v9 = (double)v14;
  *a2 = (double)v13 * 0.5 + *(float *)&v10 * v7 * v9;
  a2[1] = 0.5 * v9 + v8 * v9;
  return result;
}
