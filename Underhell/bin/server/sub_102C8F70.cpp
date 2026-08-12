float *__thiscall sub_102C8F70(float *this, float *a2, int a3, float *a4)
{
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st2
  long double v11; // st7
  float *result; // eax
  long double v13; // rt2
  double v14; // st0
  long double v15; // st2
  long double v16; // st5
  double v17; // rt1
  long double v18; // st4
  float v19; // [esp+20h] [ebp-44h]
  float v20; // [esp+40h] [ebp-24h] BYREF
  float v21; // [esp+44h] [ebp-20h]
  float v22; // [esp+48h] [ebp-1Ch]
  float v23; // [esp+4Ch] [ebp-18h]
  float v24; // [esp+50h] [ebp-14h]
  float v25; // [esp+54h] [ebp-10h]
  float v26; // [esp+58h] [ebp-Ch] BYREF
  float v27; // [esp+5Ch] [ebp-8h]
  float v28; // [esp+60h] [ebp-4h]
  float v29; // [esp+6Ch] [ebp+8h]
  float v30; // [esp+70h] [ebp+Ch]
  float v31; // [esp+70h] [ebp+Ch]

  (*(void (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)a3 + 520))(a3, &v26, a2, 0);
  v6 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 740))(this);
  v29 = v6;
  if ( 0.0 == v6 )
    goto LABEL_5;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a3 + 536))(a3, &v20);
  v22 = 0.0;
  v30 = off_10689714();
  if ( *(float *)(dword_106B31C8 + 12) > (double)this[287] )
  {
    this[284] = this[286];
    this[285] = *(float *)(dword_106B31C8 + 12);
    this[286] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  0.80000001,
                  1.3);
    this[287] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  2.0,
                  4.0)
              + *(float *)(dword_106B31C8 + 12);
  }
  v19 = (*(float *)(dword_106B31C8 + 12) - this[285]) / (this[287] - this[285]);
  v31 = sub_102191B0(v19, 0.0, 1.0, this[284], this[286]) * v30;
  v23 = *a2 - v26;
  v24 = a2[1] - v27;
  v25 = a2[2] - v28;
  v7 = off_10689714();
  v8 = v31;
  v9 = v8 * v8 - v29 * v29;
  v10 = (v23 * v20 + v24 * v21 + v25 * v22) * (v7 * -2.0) * v31;
  v11 = v10 * v10 - v7 * v7 * (v9 * 4.0);
  if ( v11 < 0.0 )
  {
LABEL_5:
    result = a4;
    *a4 = v26;
    a4[1] = v27;
    a4[2] = v28;
  }
  else
  {
    v13 = sqrt(v11);
    v14 = v10;
    v15 = (v13 - v10) / (v9 + v9);
    v16 = (-v14 - v13) / (v9 + v9);
    if ( v15 >= v16 )
      v16 = v15;
    result = a4;
    if ( v16 > 0.0 )
    {
      v17 = v21;
      v18 = v8 * v16;
      *a4 = v20 * v18 + v26;
      a4[1] = v17 * v18 + v27;
      a4[2] = v18 * v22 + v28;
    }
    else
    {
      *a4 = v26;
      a4[1] = v27;
      a4[2] = v28;
    }
  }
  return result;
}
