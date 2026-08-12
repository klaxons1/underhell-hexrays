float *__thiscall sub_1038DBA0(float *this, float *a2, float *a3)
{
  float *v5; // ebx
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // rt1
  double v12; // st5
  float *result; // eax
  float v14; // [esp+0h] [ebp-2Ch]
  float v15; // [esp+14h] [ebp-18h] BYREF
  float v16; // [esp+18h] [ebp-14h]
  float v17; // [esp+1Ch] [ebp-10h]
  float v18; // [esp+20h] [ebp-Ch]
  float v19; // [esp+24h] [ebp-8h]
  float v20; // [esp+28h] [ebp-4h]
  float v21; // [esp+34h] [ebp+8h]
  char v22; // [esp+37h] [ebp+Bh]

  *a2 = this[1052];
  a2[1] = this[1053];
  a2[2] = this[1054];
  v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  if ( v5 && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v5 + 320))(v5) && !sub_1038A110(this) )
  {
    v22 = 1;
    sub_10111820(v5 + 80, a2, &v15);
    if ( v15 >= -0.1 && v15 <= 1.1 && v16 >= -0.1 && v16 <= 1.1 && v17 >= -0.69999999 && v17 < 1.1 )
      a2[2] = *(float *)((*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 576))(v5) + 8);
  }
  else
  {
    v22 = 0;
  }
  *a2 = *a2 - *a3;
  a2[1] = a2[1] - a3[1];
  a2[2] = a2[2] - a3[2];
  if ( v22 )
    v6 = 16.0;
  else
    v6 = 32.0;
  v21 = v6;
  v7 = this[1057] * 0.0;
  v18 = this[1056] - v7;
  v19 = v7 - this[1055];
  v20 = this[1055] * 0.0 - 0.0 * this[1056];
  off_10689714();
  v14 = -v21;
  v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         LODWORD(v14),
         LODWORD(v21));
  v9 = v18 * v8;
  v18 = v9;
  v10 = v19 * v8;
  v19 = v10;
  v11 = v10;
  v12 = v8 * v20;
  v20 = v12;
  *a2 = v9 + *a2;
  a2[1] = v11 + a2[1];
  a2[2] = v12 + a2[2];
  off_10689714();
  sub_1038DA90((int)this);
  result = a2;
  this[1052] = this[1055] + this[1052];
  this[1053] = this[1053] + this[1056];
  this[1054] = this[1054] + this[1057];
  return result;
}
