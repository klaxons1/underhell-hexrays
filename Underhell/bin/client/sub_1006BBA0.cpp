void __cdecl sub_1006BBA0(int a1, float *a2, int a3, float *a4, float *a5, float *a6)
{
  int v6; // eax
  double v7; // st7
  float *v8; // esi
  float *v9; // edi
  int v10; // esi
  float *v11; // edi
  double v12; // st7
  double v13; // st7
  float *v14; // edi
  int v15; // esi
  float *v16; // edi
  double v17; // st7
  float v18; // [esp+Ch] [ebp-18h]
  float v19; // [esp+10h] [ebp-14h]
  float v20; // [esp+14h] [ebp-10h]
  float v21; // [esp+18h] [ebp-Ch]
  float v22; // [esp+18h] [ebp-Ch]
  float v23; // [esp+18h] [ebp-Ch]
  float v24; // [esp+2Ch] [ebp+8h]
  float v25; // [esp+34h] [ebp+10h]

  v6 = a1;
  if ( 0.0 != *(float *)(a3 + 8) && a1 == 2 )
    v6 = 4;
  switch ( v6 )
  {
    case 0:
      v13 = *(float *)(sub_101422E0() + 8);
      if ( v13 <= 0.99984801 && v13 >= -0.99984801 )
      {
        *a6 = 0.0;
        a6[1] = 0.0;
        a6[2] = 1.0;
        v8 = a5;
        *a5 = *(float *)(sub_101422E0() + 4);
        a5[1] = -*(float *)sub_101422E0();
        v7 = 0.0;
        goto LABEL_8;
      }
      break;
    case 1:
      v18 = -*a2;
      v19 = -a2[1];
      v20 = -a2[2];
      off_103EDFEC();
      if ( v20 <= 0.99984801 && v20 >= -0.99984801 )
      {
        v7 = 0.0;
        v8 = a5;
        *a6 = 0.0;
        a6[1] = 0.0;
        a6[2] = 1.0;
        *a5 = v19;
        a5[1] = -v18;
LABEL_8:
        v8[2] = v7;
        off_103EDFEC();
        *a4 = -v8[1];
        a4[1] = *v8;
        a4[2] = 0.0;
      }
      break;
    case 2:
      v9 = a5;
      v10 = 0;
      while ( 1 )
      {
        v11 = &v9[v10];
        *(float *)((char *)v11 + (char *)a6 - (char *)a5) = *(float *)(v10 * 4 + sub_10142300());
        *v11 = *(float *)(v10 * 4 + sub_101422F0());
        v12 = *(float *)(v10 * 4 + sub_101422E0());
        ++v10;
        *(float *)((char *)v11 + (char *)a4 - (char *)a5) = v12;
        if ( v10 >= 3 )
          break;
        v9 = a5;
      }
      break;
    case 3:
      sub_101EE040(a3, a4, a5, a6);
      break;
    case 4:
      v21 = *(float *)(a3 + 8) * 0.0174532925199433;
      v25 = cos(v21);
      v24 = sin(v21);
      v14 = a5;
      v15 = 0;
      while ( 1 )
      {
        v16 = &v14[v15 / 4u];
        *(float *)((char *)v16 + (char *)a4 - (char *)a5) = *(float *)(v15 + sub_101422E0());
        v22 = *(float *)(v15 + sub_101422F0());
        *v16 = *(float *)(v15 + sub_10142300()) * v24 + v22 * v25;
        v23 = *(float *)(v15 + sub_101422F0());
        v17 = *(float *)(v15 + sub_10142300()) * v25;
        v15 += 4;
        *(float *)((char *)v16 + (char *)a6 - (char *)a5) = v17 - v23 * v24;
        if ( v15 >= 12 )
          break;
        v14 = a5;
      }
      break;
    default:
      Warning("GetSpriteAxes: Bad sprite type %d\n", v6);
      break;
  }
}
