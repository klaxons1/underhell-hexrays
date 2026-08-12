float *__thiscall sub_101E6420(float *this, float *a2, int a3, int a4)
{
  int v5; // eax
  double v6; // st7
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  float *result; // eax
  double v11; // st7
  float v12; // ecx
  float v13; // [esp+8h] [ebp-48h]
  float v14[3]; // [esp+2Ch] [ebp-24h] BYREF
  float v15[4]; // [esp+38h] [ebp-18h] BYREF
  float v16; // [esp+48h] [ebp-8h]
  float v17; // [esp+4Ch] [ebp-4h]

  v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 508))(this);
  v6 = 0.0;
  v7 = *(float *)v5;
  v8 = *(float *)(v5 + 4);
  v9 = *(float *)(v5 + 8);
  v15[3] = v7;
  v17 = v9;
  v16 = v8;
  if ( v7 >= 0.0 )
    v6 = v7;
  v15[0] = v6 + this[576];
  v15[1] = this[577] + v16;
  v15[2] = this[578] + v17;
  sub_10422220(v15, v14);
  result = a2;
  v11 = v14[1];
  *a2 = v14[0];
  v13 = v11;
  v12 = v14[2];
  a2[1] = v13;
  a2[2] = v12;
  return result;
}
