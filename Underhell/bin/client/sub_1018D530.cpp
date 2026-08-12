void __thiscall sub_1018D530(char *this, int *a2, float *a3, float *a4, float a5, int a6)
{
  float *v6; // edi
  int v7; // esi
  int v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // eax
  int v12; // ebx
  float *v13; // eax
  float *v14; // edi
  double v15; // st7
  double v16; // st6
  double v17; // st5
  double v18; // st6
  double v19; // st7
  double v20; // st5
  double v21; // st0
  float v22[3]; // [esp+14h] [ebp-4Ch] BYREF
  float v23; // [esp+20h] [ebp-40h] BYREF
  float v24; // [esp+24h] [ebp-3Ch]
  float v25; // [esp+28h] [ebp-38h]
  float v26; // [esp+2Ch] [ebp-34h]
  float v27; // [esp+30h] [ebp-30h]
  float v28; // [esp+34h] [ebp-2Ch]
  float v29; // [esp+38h] [ebp-28h] BYREF
  float v30; // [esp+3Ch] [ebp-24h]
  float v31; // [esp+40h] [ebp-20h]
  float v32; // [esp+44h] [ebp-1Ch] BYREF
  float v33; // [esp+48h] [ebp-18h]
  float v34; // [esp+4Ch] [ebp-14h]
  float v35; // [esp+50h] [ebp-10h] BYREF
  __int64 v36; // [esp+54h] [ebp-Ch]
  char *v37; // [esp+5Ch] [ebp-4h]
  int v38; // [esp+78h] [ebp+18h]

  v6 = a3;
  v7 = (int)this;
  v37 = this;
  sub_1003E7C0((int)this, a2, a3, a4, a5, a6);
  if ( a2 )
  {
    v38 = sub_1001E140((int)a2, "Barnacle.tongue1");
    sub_100392A0((char *)v7, 0, &v23, 0);
    v8 = 3 * sub_1001E140((int)a2, "Barnacle.base");
    v9 = a3[v8];
    v10 = a3[v8 + 1];
    v11 = a3[v8 + 2];
    v26 = v9;
    v27 = v10;
    v28 = v11;
    v35 = flt_10459240;
    v36 = qword_10459244;
    v12 = 0;
    while ( 1 )
    {
      v13 = (float *)(v12 == 7
                    ? *(_DWORD *)(v7 + 3528) + 36 * *(_DWORD *)(v7 + 3532) - 36
                    : *(_DWORD *)(v7 + 3528) + 36 * v12);
      v35 = *v13;
      *(float *)&v36 = v13[1];
      *((float *)&v36 + 1) = v13[2];
      sub_10037F50(v7);
      v14 = &v6[3 * v12 + 3 * v38];
      sub_101ED8C0(&v35, v37 + 660, v14);
      v15 = *v14;
      v35 = *v14;
      v16 = v14[1];
      *(float *)&v36 = v14[1];
      v17 = v14[2];
      *((float *)&v36 + 1) = v14[2];
      if ( v12 == 7 || (v32 = v15 - v26, v33 = v16 - v27, v34 = v17 - v28, off_103EDFEC() >= 0.001) )
      {
        v18 = v33;
        v20 = v34;
        v19 = v32;
      }
      else
      {
        v18 = 0.0;
        v32 = 0.0;
        v19 = 0.0;
        v33 = 0.0;
        v20 = 1.0;
        v34 = 1.0;
      }
      v21 = -(v24 * v18 + v23 * v19 + v25 * v20);
      v29 = v23 + v19 * v21;
      v30 = v24 + v18 * v21;
      v31 = v21 * v20 + v25;
      off_103EDFEC();
      v22[0] = v31 * v33 - v30 * v34;
      v22[1] = v34 * v29 - v31 * v32;
      v22[2] = v32 * v30 - v29 * v33;
      sub_101F0FA0(&v32, &v29, v22, &a4[4 * v12++ + 4 * v38]);
      v26 = v35;
      v27 = *(float *)&v36;
      v28 = *((float *)&v36 + 1);
      v23 = v29;
      v24 = v30;
      v25 = v31;
      if ( v12 > 7 )
        break;
      v6 = a3;
      v7 = (int)v37;
    }
  }
}
