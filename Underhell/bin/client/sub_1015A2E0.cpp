int __thiscall sub_1015A2E0(float *this, int a2)
{
  int v4; // ecx
  int result; // eax
  int v6; // edi
  double v7; // st7
  float *v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st1
  double v13; // st4
  double v14; // st3
  double v15; // st6
  double v16; // rt2
  double v17; // rtt
  double v18; // st6
  double v19; // st7
  double v20; // st6
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  double v25; // st4
  double v26; // st6
  double v27; // st7
  float *v28; // eax
  double v29; // st7
  double v30; // st7
  double v31; // st7
  float v32; // [esp+0h] [ebp-4Ch]
  float v33; // [esp+8h] [ebp-44h]
  float v34; // [esp+8h] [ebp-44h]
  int v35[3]; // [esp+18h] [ebp-34h] BYREF
  int v36[3]; // [esp+24h] [ebp-28h] BYREF
  float v37; // [esp+30h] [ebp-1Ch]
  float v38; // [esp+34h] [ebp-18h]
  float v39; // [esp+38h] [ebp-14h]
  float v40; // [esp+3Ch] [ebp-10h] BYREF
  float v41; // [esp+40h] [ebp-Ch]
  float v42; // [esp+44h] [ebp-8h]
  float v43; // [esp+48h] [ebp-4h]
  int v44; // [esp+54h] [ebp+8h]
  float v45; // [esp+54h] [ebp+8h]

  v4 = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a2 + 16424) = 1;
  result = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(a2 + 16420) = result;
  if ( result != v4 + 4 )
  {
    **(_DWORD **)(a2 + 8) = *(_DWORD *)(result + 8);
    v6 = *(_DWORD *)(a2 + 16420);
    if ( v6 )
    {
      do
      {
        v37 = this[60] + *(float *)(v6 + 12);
        v38 = this[61] + *(float *)(v6 + 16);
        v39 = *(float *)(v6 + 20) + this[62];
        v33 = *(float *)(v6 + 20) * *(float *)(v6 + 20)
            + *(float *)(v6 + 12) * *(float *)(v6 + 12)
            + *(float *)(v6 + 16) * *(float *)(v6 + 16);
        v7 = off_103EDFE0(v33);
        if ( v7 <= this[1601] )
        {
          v10 = this[1601] * 0.5;
          if ( v10 >= v7 )
          {
            v40 = v37;
            v41 = v38;
            v42 = v39;
            v15 = 1.0;
          }
          else
          {
            v11 = *(float *)(v6 + 12) * v10;
            v12 = 1.0 / v7;
            v13 = *(float *)(v6 + 16) * v10 * v12 + this[61];
            v14 = v10 * *(float *)(v6 + 20) * v12;
            v15 = 1.0;
            v16 = v14 + this[62];
            v40 = v11 * v12 + this[60];
            v41 = v13;
            v42 = v16;
          }
          v17 = v15;
          v18 = v7;
          v19 = v17;
          v20 = v17 - v18 / this[1601];
          if ( flt_103E9070 >= v20 )
            v19 = v20 / flt_103E9070;
          v21 = *(unsigned __int8 *)(v6 + 36);
          v22 = *(unsigned __int8 *)(v6 + 37);
          v23 = *(unsigned __int8 *)(v6 + 38);
          v43 = v19 * this[66] * *(float *)(v6 + 32);
          v44 = v21;
          v24 = *(unsigned __int8 *)(v6 + 39);
          v25 = (double)v44 * 0.0039200312;
          v26 = (this[1598] - this[1595]) * v25 + this[1595];
          v27 = (this[1599] - this[1596]) * v25 + this[1596];
          *(float *)v36 = ((this[1597] - this[1594]) * v25 + this[1594]) * ((double)v22 * 0.0039215689);
          *(float *)&v36[1] = v26 * ((double)v23 * 0.0039215689);
          *(float *)&v36[2] = v27 * (0.0039215689 * (double)v24);
          sub_10159A40(this - 298, &v40, (float *)v36);
          v28 = (float *)sub_100F0920();
          *(float *)v35 = v28[26] * v42 + v28[25] * v41 + v40 * v28[24] + v28[27];
          *(float *)&v35[1] = v28[29] * v41 + v28[28] * v40 + v28[30] * v42 + v28[31];
          v29 = v42 * v28[34] + v41 * v28[33] + v40 * v28[32] + v28[35];
          *(float *)&v35[2] = v29;
          v45 = v29;
          v30 = -v29;
          if ( v30 <= 200.0 )
          {
            if ( v30 <= 100.0 )
              v31 = 0.0;
            else
              v31 = (v30 - 100.0) * 0.0099999998;
          }
          else
          {
            v31 = 1.0;
          }
          v32 = v31 * v43;
          sub_10054ED0(*(float ***)(a2 + 8), (float *)v35, (float *)v36, v32, 55.0, *(float *)(v6 + 28));
          v9 = v45;
        }
        else
        {
          v8 = (float *)sub_100F0920();
          v9 = v8[33] * v38 + v8[32] * v37 + v8[34] * v39 + v8[35];
        }
        v34 = v9;
        result = sub_1004B070(a2, v34);
        v6 = result;
      }
      while ( result );
    }
  }
  return result;
}
