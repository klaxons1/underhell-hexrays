double __usercall sub_100D50A0@<st0>(int a1@<esi>, float a2, float a3, float a4)
{
  double v4; // st7
  long double v5; // st6
  bool v6; // cl
  char v7; // bl
  double v8; // st5
  double v9; // st7
  double v10; // st4
  double v11; // st5
  double v12; // st4
  double v13; // st3
  double v14; // rt0
  double v15; // st4
  int v16; // edx
  double v17; // st5
  double v18; // rt2
  double v19; // st5
  double v20; // st7
  int v21; // eax
  double v22; // st4
  double v23; // rt0
  double v24; // st5
  double v25; // st7
  bool v26; // c3
  double result; // st7
  float v28; // [esp+1Ch] [ebp-4h]
  float v29; // [esp+28h] [ebp+8h]

  v4 = a2;
  v5 = a2;
  v28 = a2;
  v6 = sqrt(a2 * a2 + a3 * a3) >= *(float *)(dword_104324D4 + 44);
  v7 = 0;
  if ( a2 < 0.0 )
  {
    v7 = 1;
    a2 = v4 * -1.0;
    v4 = v4 * -1.0;
  }
  if ( v6 && *(float *)(dword_10432564 + 44) < v4 )
  {
    v8 = v4;
    v9 = 0.0;
    if ( v8 < *(float *)(dword_10431F34 + 44) )
    {
      v8 = *(float *)(dword_10431F34 + 44);
      a2 = *(float *)(dword_10431F34 + 44);
    }
    if ( *(float *)(dword_10431FC4 + 44) > (double)flt_10431968[a1] )
    {
      v10 = v8;
      v11 = *(float *)(dword_10431FC4 + 44);
      v12 = (v10 - *(float *)(dword_10431F34 + 44)) * flt_10431968[a1] + *(float *)(dword_10431F34 + 44);
      a2 = v12;
      v13 = *(float *)(dword_10431F7C + 44) * a4 + flt_10431968[a1];
      flt_10431968[a1] = v13;
      if ( v13 <= v11 )
      {
        v8 = v12;
      }
      else
      {
        v14 = v12;
        v15 = v11;
        v8 = v14;
        flt_10431968[a1] = v15;
      }
    }
  }
  else
  {
    v16 = dword_10431EEC;
    flt_10431968[a1] = 0.0;
    v17 = v4;
    v9 = 0.0;
    v8 = v17 / *(float *)(v16 + 44) * *(float *)(dword_10431F34 + 44);
    a2 = v8;
  }
  v18 = v8;
  v19 = v9;
  v20 = v18;
  if ( v19 < *(float *)(dword_10432054 + 44) && fabs(v5) < *(float *)(dword_1043200C + 44) )
  {
    v21 = sub_100422D0();
    if ( v21 && *(_BYTE *)(v21 + 5210) )
    {
      v20 = a2;
      v5 = v28;
      v22 = *(float *)(dword_10432054 + 44);
      v19 = 0.0;
      goto LABEL_18;
    }
    v20 = a2;
    v5 = v28;
    v19 = 0.0;
  }
  v22 = 1.0;
LABEL_18:
  v23 = v19;
  v24 = v20 * v22;
  v25 = v23;
  if ( a1 == 1 )
  {
    v26 = v5 == v25;
    result = v24;
    if ( !v26 && *(_DWORD *)(dword_10432174 + 48) )
    {
      Msg("In:%f Out:%f Frametime:%f\n", (double)v5, v24, a4);
      v29 = v24;
      result = v29;
    }
  }
  else
  {
    result = v24;
  }
  if ( v7 )
    return result * -1.0;
  return result;
}
