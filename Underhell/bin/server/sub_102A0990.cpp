float *__thiscall sub_102A0990(int *this, float a2, float *a3, float *a4, float *a5, float *a6)
{
  float *result; // eax
  double v7; // st6
  double v8; // st7
  int v9[3]; // [esp+18h] [ebp-24h] BYREF
  _DWORD v10[3]; // [esp+24h] [ebp-18h] BYREF
  int v11; // [esp+30h] [ebp-Ch] BYREF
  float v12; // [esp+34h] [ebp-8h]
  float v13; // [esp+38h] [ebp-4h]

  sub_100BFA80(this[1], *(_DWORD *)(this[1] + 908), 1.0, a2, (int)&v11, (int)v9);
  v10[0] = v11;
  *(float *)&v10[1] = v12;
  *(float *)&v10[2] = v13;
  sub_10424E70(v10, a4, &v11);
  result = a5;
  if ( a5 )
  {
    v7 = a3[1] + v12;
    v8 = a3[2] + v13;
    *a5 = *a3 + *(float *)&v11;
    a5[1] = v7;
    a5[2] = v8;
  }
  if ( a6 )
  {
    *a6 = (double)(unsigned __int16)(int)((*a4 + *(float *)v9) * 182.04445) * 0.0054931641;
    a6[1] = (double)(unsigned __int16)(int)((a4[1] + *(float *)&v9[1]) * 182.04445) * 0.0054931641;
    result = (float *)(unsigned __int16)(int)(182.04445 * (a4[2] + *(float *)&v9[2]));
    a6[2] = 0.0054931641 * (double)(int)result;
  }
  return result;
}
