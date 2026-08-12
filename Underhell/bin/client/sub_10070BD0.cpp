float *__thiscall sub_10070BD0(float *this, float *a2, float *a3, float *a4)
{
  float *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  int v9; // eax
  double v10; // st7
  double v11; // st5
  double v12; // st6
  double v13; // st4
  double v14; // st3
  double v15; // st2
  float *result; // eax
  double v17; // st1
  double v18; // st7
  double v19; // rt1
  double v20; // st2
  double v21; // st6
  float v22[3]; // [esp+4h] [ebp-24h] BYREF
  float v23[3]; // [esp+10h] [ebp-18h] BYREF
  float v24; // [esp+1Ch] [ebp-Ch]
  float v25; // [esp+20h] [ebp-8h]
  float v26; // [esp+24h] [ebp-4h]

  v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
  v6 = *v5;
  v7 = v5[1];
  v8 = v5[2];
  v24 = v6;
  v25 = v7;
  v26 = v8;
  v9 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 40))(this);
  sub_101EE040(v9, v22, v23, 0);
  v10 = v23[0] * -1.0;
  v11 = v23[1] * -1.0;
  v12 = -1.0 * v23[2];
  v13 = v24;
  *a4 = v24;
  v14 = v25;
  a4[1] = v25;
  v15 = v26;
  a4[2] = v26;
  result = a2;
  v17 = v10 * this[301];
  v18 = this[301];
  v19 = v15;
  v20 = v13 + v17;
  *a2 = v20;
  a2[1] = v14 + v11 * v18;
  a2[2] = v19 + v12 * v18;
  v21 = this[300];
  *a3 = v20 + v22[0] * v21;
  a3[1] = v22[1] * v21 + a2[1];
  a3[2] = v21 * v22[2] + a2[2];
  return result;
}
