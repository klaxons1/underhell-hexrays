double __thiscall sub_10020850(float *this, int a2, int a3, int a4, float *a5)
{
  double v6; // st7
  double v7; // st4
  double v8; // st5
  double v9; // st7
  int (__thiscall *v10)(float *, char *); // edx
  float *v11; // eax
  double v12; // st7
  double v13; // st6
  double v14; // st5
  float v16; // [esp+0h] [ebp-1Ch]
  float v17; // [esp+4h] [ebp-18h]
  char v18[12]; // [esp+Ch] [ebp-10h] BYREF
  float v19; // [esp+18h] [ebp-4h]
  float v20; // [esp+30h] [ebp+14h]
  float v21; // [esp+30h] [ebp+14h]

  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = this[145] - *a5;
  v7 = this[146] - a5[1];
  v8 = this[147] - a5[2];
  v17 = v8 * v8 + v7 * v7 + v6 * v6;
  v20 = off_10689708(v17);
  v9 = sub_1007DFD0(*((_DWORD *)this + 647));
  v10 = *(int (__thiscall **)(float *, char *))(*(_DWORD *)this + 536);
  v19 = v20 - v9;
  v11 = (float *)v10(this, v18);
  v16 = v11[1] * v11[1] + *v11 * *v11 + v11[2] * v11[2];
  v12 = off_10689708(v16);
  v13 = 120.0;
  v21 = 120.0;
  if ( v12 > 0.0 )
  {
    v14 = v19 / v12 * 120.0;
    if ( v14 > 120.0 || (v13 = v14, v14 >= 0.0) )
      v21 = v13;
    else
      v21 = 0.0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    return v21;
  else
    return v21 * 1.2;
}
