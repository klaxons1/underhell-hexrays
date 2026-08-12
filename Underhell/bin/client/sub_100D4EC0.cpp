double __usercall sub_100D4EC0@<st0>(int a1@<esi>, float a2, float a3, float a4)
{
  double v4; // st7
  long double v5; // st6
  bool v6; // cl
  char v7; // bl
  int v8; // edx
  int v9; // ecx
  double v10; // st7
  double v11; // st3
  double v12; // st4
  double v13; // st7
  long double v14; // st5
  double v15; // st6
  int v16; // eax
  double v17; // rtt
  double v18; // st6
  double v19; // st7
  double v20; // st6
  bool v21; // c0
  bool v22; // c3
  double result; // st7
  float v25; // [esp+28h] [ebp+8h]
  float v26; // [esp+28h] [ebp+8h]

  v4 = a2;
  v5 = a2;
  v6 = *(float *)(dword_104324D4 + 44) <= (double)a3;
  v7 = 0;
  if ( a2 < 0.0 )
  {
    v7 = 1;
    v4 = v4 * -1.0;
  }
  if ( a1 == 1 && *(_DWORD *)(dword_1043251C + 48) )
  {
    if ( v4 < 0.94999999 )
    {
      if ( byte_10431971 != 1 )
        goto LABEL_11;
    }
    else
    {
      byte_10431971 = 1;
      byte_10431973 = v7;
    }
    if ( v6 && v7 == byte_10431973 )
      v4 = 1.0;
    else
      byte_10431971 = 0;
  }
LABEL_11:
  v8 = dword_10431EEC;
  v9 = dword_10431F34;
  if ( *(float *)(dword_10431EEC + 44) >= v4 )
  {
    flt_10431968[a1] = 0.0;
    v25 = v4 / *(float *)(v8 + 44) * *(float *)(v9 + 44);
    v13 = 1.0;
  }
  else
  {
    v10 = (v4 - *(float *)(dword_10431EEC + 44))
        / (1.0 - *(float *)(dword_10431EEC + 44))
        * (1.0 - *(float *)(dword_10431F34 + 44))
        + *(float *)(dword_10431F34 + 44);
    if ( flt_10431968[a1] < 1.0 )
    {
      v11 = *(float *)(dword_10431F7C + 44) * a4 + flt_10431968[a1];
      flt_10431968[a1] = v11;
      if ( v11 > 1.0 )
        flt_10431968[a1] = 1.0;
    }
    v12 = v10;
    v13 = 1.0;
    v25 = (v12 - *(float *)(v9 + 44)) * flt_10431968[a1] + *(float *)(v9 + 44);
  }
  if ( *(float *)(dword_10432054 + 44) <= 0.0 )
  {
    v15 = 0.0;
  }
  else
  {
    v14 = v5;
    v15 = 0.0;
    if ( fabs(v14) < *(float *)(dword_1043200C + 44) )
    {
      v16 = sub_100422D0();
      if ( v16 && *(_BYTE *)(v16 + 5210) )
      {
        v13 = *(float *)(dword_10432054 + 44);
        v15 = 0.0;
      }
      else
      {
        v15 = 0.0;
        v13 = 1.0;
      }
    }
  }
  v17 = v15;
  v18 = v13;
  v19 = v17;
  v20 = v18 * v25;
  if ( a1 == 1 )
  {
    v21 = v20 < v19;
    v22 = v20 == v19;
    result = v20;
    if ( !v21 && !v22 && *(_DWORD *)(dword_10432174 + 48) )
    {
      Msg("In:%f Out:%f Frametime:%f\n", a2, v20, a4);
      v26 = v20;
      result = v26;
    }
  }
  else
  {
    result = v20;
  }
  if ( v7 )
    return result * -1.0;
  return result;
}
