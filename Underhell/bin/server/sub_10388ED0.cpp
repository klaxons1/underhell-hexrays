float *__stdcall sub_10388ED0(float *a1, float *a2, float *a3)
{
  double v4; // st7
  float *result; // eax
  float v6; // [esp+8h] [ebp-54h]
  int v7[16]; // [esp+10h] [ebp-4Ch] BYREF
  int v8[3]; // [esp+50h] [ebp-Ch] BYREF
  float v9; // [esp+64h] [ebp+8h]
  float v10; // [esp+68h] [ebp+Ch]

  v4 = a2[1] * a1[1] + *a1 * *a2 + a2[2] * a1[2];
  v9 = v4;
  if ( fabs(v4 - 1.0) < 0.001
    || (*(float *)v8 = a2[2] * a1[1] - a1[2] * a2[1],
        *(float *)&v8[1] = *a2 * a1[2] - a2[2] * *a1,
        *(float *)&v8[2] = *a1 * a2[1] - *a2 * a1[1],
        off_10689714() < 0.001) )
  {
    result = a3;
    *a3 = *a1;
    a3[1] = a1[1];
    a3[2] = a1[2];
  }
  else
  {
    v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.0,
            1.0);
    v6 = acos(v9) * v10;
    sub_10425F00((int)v7, (int)v8, v6);
    return (float *)sub_10425E60(v7, a1, a3);
  }
  return result;
}
