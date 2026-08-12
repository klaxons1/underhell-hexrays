double __thiscall sub_100146B0(void *this)
{
  float *v1; // esi
  double result; // st7
  double v3; // st7
  double v4; // st6
  double v5; // st4
  double v6; // st5
  double v7; // st3
  double v8; // st5
  long double v9; // st3
  double v10; // st3
  long double v11; // st3
  double v12; // st7
  long double v13; // st3
  long double v14; // rt1
  double v15; // st3
  long double v16; // st6
  double v17; // st3
  long double v18; // st5
  long double v19; // rtt
  long double v20; // st6
  long double v21; // st7
  float v22; // [esp+0h] [ebp-10h]
  float v23; // [esp+8h] [ebp-8h]

  v1 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 764))(this);
  if ( !v1 || !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v1 + 504))(v1) )
    v1 = 0;
  result = 0.0;
  if ( 0.0 != *((float *)off_103DC81C + 4) && v1 )
  {
    v22 = v1[59] * v1[59] + v1[58] * v1[58];
    v3 = off_103EDFE0(v22);
    if ( v3 <= 320.0 )
    {
      if ( v3 < -320.0 )
        v3 = -320.0;
    }
    else
    {
      v3 = 320.0;
    }
    v4 = 0.003125 * v3 * (*((float *)off_103DC81C + 3) - flt_104026E4) + flt_104026E0;
    flt_104026E0 = v4;
    flt_104026E4 = *((float *)off_103DC81C + 3);
    v5 = v4 * 2.2222223;
    v6 = 2.2222223 * (v4 - (double)(int)v5 * 0.44999999);
    if ( v6 >= 0.5 )
    {
      v10 = (v6 - 0.5) * 3.141592653589793;
      v8 = 3.141592653589793;
      v9 = v10 + v10 + 3.141592653589793;
    }
    else
    {
      v7 = v6 * 3.141592653589793;
      v8 = 3.141592653589793;
      v9 = v7 + v7;
    }
    v11 = sin(v9) * (v3 * 0.0049999999 * 0.7) + v3 * 0.0049999999 * 0.3;
    v12 = v3 * 0.0049999999;
    flt_104458B0 = v11;
    if ( v11 <= 4.0 )
    {
      if ( v11 >= -7.0 )
      {
        v13 = 4.0;
      }
      else
      {
        v13 = 4.0;
        flt_104458B0 = -7.0;
      }
    }
    else
    {
      v13 = 4.0;
      flt_104458B0 = 4.0;
    }
    v14 = v13;
    v23 = v5;
    v15 = v4 - 2.0 * ((double)(int)(v23 * 2.0) * 0.44999999);
    v16 = v14;
    v17 = v15 * 1.1111112;
    if ( v17 >= 0.5 )
      v18 = v8 + (v17 - 0.5) * v8 + (v17 - 0.5) * v8;
    else
      v18 = v8 * v17 + v8 * v17;
    v19 = v16;
    v20 = sin(v18) * (v12 * 0.7) + v12 * 0.3;
    v21 = v19;
    flt_104458B4 = v20;
    if ( v20 > v19 || (v21 = -7.0, v20 < -7.0) )
    {
      flt_104458B4 = v21;
      return 0.0;
    }
    else
    {
      return 0.0;
    }
  }
  return result;
}
