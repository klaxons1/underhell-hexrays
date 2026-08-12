float *__thiscall sub_100436E0(char *this, float *a2, float a3)
{
  int v4; // eax
  int v5; // ecx
  double v6; // st7
  float *result; // eax
  double v8; // st5
  double v9; // st6
  double v10; // st7
  int v11; // ecx
  int v12; // edx
  double v13; // st7
  float v14; // ecx
  float v15; // edx
  float v16; // [esp+0h] [ebp-84h]
  _BYTE v17[24]; // [esp+Ch] [ebp-78h] BYREF
  float v18; // [esp+24h] [ebp-60h]
  float v19; // [esp+28h] [ebp-5Ch]
  float v20; // [esp+2Ch] [ebp-58h]
  float v21; // [esp+38h] [ebp-4Ch]
  float v22; // [esp+68h] [ebp-1Ch]
  float v23[3]; // [esp+6Ch] [ebp-18h] BYREF
  float v24; // [esp+78h] [ebp-Ch] BYREF
  float v25; // [esp+7Ch] [ebp-8h]
  float v26; // [esp+80h] [ebp-4h]
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  v4 = *((_DWORD *)this + 63) >> 11;
  v24 = a3 * *((float *)this + 906);
  v25 = *((float *)this + 907) * a3;
  v26 = a3 * *((float *)this + 908);
  if ( (v4 & 1) != 0 )
    sub_100DAE60(this);
  v5 = *((_DWORD *)this + 63) >> 11;
  v23[0] = *((float *)this + 145) + v24;
  v23[1] = *((float *)this + 146) + v25;
  v23[2] = *((float *)this + 147) + v26;
  if ( (v5 & 1) != 0 )
    sub_100DAE60(this);
  sub_102659D0(this, this + 580, v23, 33701931, v17);
  if ( 1.0 == v21 )
  {
    v10 = ((double (__thiscall *)(char *))*(_DWORD *)(*(_DWORD *)this + 2208))(this);
    v11 = *((_DWORD *)this + 63);
    v22 = -v10;
    if ( (v11 & 0x800) != 0 )
      sub_100DAE60(this);
    v12 = *((_DWORD *)this + 63);
    v24 = *((float *)this + 145);
    v25 = *((float *)this + 146);
    v26 = *((float *)this + 147) + v22;
    if ( (v12 & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1002A5F0((int)&savedregs, (int)this, (float *)this + 145, &v24, 147499, (int)this, 0, (int)v17);
    v13 = v21;
    if ( v21 >= 1.0 )
    {
      result = a2;
      v14 = flt_106F1CAC;
      *a2 = flt_106F1CA8;
      v15 = flt_106F1CB0;
      a2[1] = v14;
      a2[2] = v15;
    }
    else
    {
      if ( v13 < 0.1 )
        v13 = 0.1;
      result = a2;
      *a2 = 0.0;
      a2[1] = 0.0;
      a2[2] = 50.0 / v13;
    }
  }
  else
  {
    v16 = *((float *)this + 908) * *((float *)this + 908)
        + *((float *)this + 906) * *((float *)this + 906)
        + *((float *)this + 907) * *((float *)this + 907);
    v6 = off_10689708(v16);
    result = a2;
    v24 = v18 * 0.5 * v6;
    v8 = v19 * 0.5;
    v9 = 0.5 * v20;
    *a2 = v24;
    v25 = v8 * v6;
    a2[1] = v25;
    v26 = v6 * v9;
    a2[2] = v26;
  }
  return result;
}
