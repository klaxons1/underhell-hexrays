float *__thiscall sub_1009E440(int this, float *a2)
{
  float *v3; // eax
  float *v4; // eax
  float *result; // eax
  double v6; // st6
  double v7; // st7
  float v8[3]; // [esp+4h] [ebp-24h] BYREF
  float v9[3]; // [esp+10h] [ebp-18h] BYREF
  float v10; // [esp+1Ch] [ebp-Ch] BYREF
  float v11; // [esp+20h] [ebp-8h]
  float v12; // [esp+24h] [ebp-4h]

  v3 = (float *)sub_10034A00((char *)this);
  v10 = *v3 + *(float *)(this + 1224);
  v11 = v3[1] + *(float *)(this + 1228);
  v12 = v3[2] + *(float *)(this + 1232);
  sub_100382D0((_DWORD *)this, &v10, v9);
  v4 = (float *)sub_10034A00((char *)this);
  v10 = *v4 + *(float *)(this + 1236);
  v11 = v4[1] + *(float *)(this + 1240);
  v12 = v4[2] + *(float *)(this + 1244);
  sub_100382D0((_DWORD *)this, &v10, v8);
  result = a2;
  v6 = v9[1] - v8[1];
  v7 = v9[2] - v8[2];
  *a2 = v9[0] - v8[0];
  a2[1] = v6;
  a2[2] = v7;
  return result;
}
