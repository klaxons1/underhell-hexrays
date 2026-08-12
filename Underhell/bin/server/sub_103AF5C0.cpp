float *__thiscall sub_103AF5C0(void *this, float *a2, int a3)
{
  float *v4; // edi
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  float *result; // eax
  double v10; // rt2
  double v11; // st6
  _BYTE v12[12]; // [esp+8h] [ebp-24h] BYREF
  int v13[3]; // [esp+14h] [ebp-18h] BYREF
  int v14[3]; // [esp+20h] [ebp-Ch] BYREF

  sub_100BF1B0(this, "left skewer", (int)v14, 0, 0, 0);
  sub_100BF1B0(this, "left foot", (int)v13, 0, 0, 0);
  v4 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 504))(a3, v12);
  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 576))(a3);
  v6 = *v4 + *v5;
  v7 = v4[1] + v5[1];
  v8 = v4[2] + v5[2];
  result = a2;
  v10 = v7 * 0.5 - *(float *)&v14[1];
  v11 = v8 * 0.5 - *(float *)&v14[2];
  *a2 = v6 * 0.5 - *(float *)v14 + *(float *)v13;
  a2[1] = v10 + *(float *)&v13[1];
  a2[2] = v11 + *(float *)&v13[2];
  return result;
}
