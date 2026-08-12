void __usercall sub_10191670(int a1@<ecx>, int a2@<esi>)
{
  int v3; // ebx
  float *v4; // eax
  double X; // st7
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  int v9; // eax
  float *v10; // eax
  double v11; // st6
  double v12; // st7
  float *v13; // eax
  float *v14; // eax
  double v15; // st7
  double v16; // st7
  int v17; // ecx
  float *v18; // eax
  double v19; // st7
  float v20; // [esp+14h] [ebp-40h]
  float v21; // [esp+18h] [ebp-3Ch]
  float v22; // [esp+1Ch] [ebp-38h]
  float v23; // [esp+20h] [ebp-34h]
  float v24; // [esp+24h] [ebp-30h]
  float v25; // [esp+28h] [ebp-2Ch]
  float v26; // [esp+2Ch] [ebp-28h]
  float v27; // [esp+30h] [ebp-24h]
  float v28; // [esp+34h] [ebp-20h]
  float v29; // [esp+38h] [ebp-1Ch] BYREF
  float v30; // [esp+3Ch] [ebp-18h]
  float v31; // [esp+40h] [ebp-14h]
  float v32; // [esp+44h] [ebp-10h]
  float v33; // [esp+48h] [ebp-Ch]
  int v34; // [esp+4Ch] [ebp-8h]
  float v35; // [esp+50h] [ebp-4h]

  if ( *(_BYTE *)(a1 + 1184) )
  {
    if ( 0.0 != *(float *)(a1 + 1188) )
    {
      v3 = sub_100F29B0(*(_DWORD *)(a1 + 1180), a1, a2, "effects/spark_noz");
      v4 = sub_101356D0();
      X = *(float *)(a1 + 1192) + *(float *)(a1 + 1188);
      v6 = *v4;
      v7 = v4[1];
      v8 = v4[2];
      v35 = X;
      v23 = v6;
      v24 = v7;
      v25 = v8;
      v9 = (int)floor(X);
      v34 = v9;
      *(float *)(a1 + 1192) = v35 - (double)v9;
      if ( v9 > 0 )
      {
        v34 = v9;
        do
        {
          v35 = *(float *)(dword_10446D1C + 44);
          v33 = *(float *)(dword_10446D64 + 44);
          v10 = (float *)sub_101356F0();
          v11 = v33 * v10[2];
          v12 = v10[1] * v33;
          v29 = *v10 * v33 + v23;
          v30 = v12 + v24;
          v31 = v11 + v25;
          v32 = -v35;
          v33 = RandomFloat(LODWORD(v32), LODWORD(v35));
          v13 = (float *)sub_10135710();
          v20 = v33 * *v13;
          v21 = v13[1] * v33;
          v22 = v33 * v13[2];
          v32 = RandomFloat(LODWORD(v32), LODWORD(v35));
          v14 = (float *)sub_10135700();
          v26 = *v14 * v32 + v23 + v20 - v29;
          v27 = v14[1] * v32 + v24 + v21 - v30;
          v28 = v32 * v14[2] + v25 + v22 - v31;
          v35 = off_103EDFEC();
          v15 = RandomFloat(0.1, 0.30000001);
          v16 = v15 * v35;
          v17 = *(_DWORD *)(a1 + 1180);
          v29 = v26 * v16 + v29;
          v30 = v27 * v16 + v30;
          v31 = v16 * v28 + v31;
          v18 = sub_100F2B60(v17, a2, 56, v3, &v29);
          a2 = (int)v18;
          if ( v18 )
          {
            v19 = v35 * 0.5;
            v18[6] = v26 * v19;
            v18[7] = v27 * v19;
            v18[8] = v19 * v28;
            v18[10] = 2.0;
            v18[11] = 0.0;
            v18[13] = RandomFloat(1.0, 3.0);
            *(float *)(a2 + 48) = RandomFloat(0.050000001, 0.40000001);
            *(_DWORD *)(a2 + 36) = -1;
          }
          --v34;
        }
        while ( v34 );
      }
    }
  }
}
