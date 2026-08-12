void __fastcall sub_10137160(int a1)
{
  float *v2; // ebx
  float *v3; // edi
  float *v4; // eax
  float *v5; // eax
  float *v6; // eax
  double v7; // st7
  double v8; // st7
  int v9; // eax
  double v10; // st7
  double v11; // st7
  double v12; // st7
  float *v13; // eax
  float v14; // ecx
  float v15; // edx
  float *v16; // esi
  float v17; // eax
  double v18; // st7
  double v19; // st6
  double v20; // st3
  double v21; // st2
  double v22; // rt1
  double v23; // st2
  double v24; // st4
  double v25; // st1
  double v26; // rt2
  double v27; // st1
  double v28; // st5
  double v29; // st0
  double v30; // rtt
  double v31; // st1
  double v32; // st5
  double v33; // rt0
  double v34; // st2
  double v35; // st4
  double v36; // rt1
  double v37; // st3
  double v38; // st4
  double v39; // rt2
  double v40; // st3
  double v41; // st5
  float v42; // [esp+0h] [ebp-3Ch]
  float v43[3]; // [esp+10h] [ebp-2Ch] BYREF
  float v44[3]; // [esp+1Ch] [ebp-20h] BYREF
  float v45; // [esp+28h] [ebp-14h] BYREF
  float v46; // [esp+2Ch] [ebp-10h]
  float v47; // [esp+30h] [ebp-Ch]
  int v48; // [esp+34h] [ebp-8h]
  int i; // [esp+38h] [ebp-4h]

  switch ( *(_DWORD *)(a1 + 48) )
  {
    case 2:
    case 3:
      i = (int)*(float *)(a1 + 188);
      v48 = -i;
      v10 = (double)-i;
      goto LABEL_8;
    case 5:
    case 7:
      v42 = *(float *)(a1 + 184) * *(float *)(a1 + 184)
          + *(float *)(a1 + 180) * *(float *)(a1 + 180)
          + *(float *)(a1 + 188) * *(float *)(a1 + 188);
      i = (int)(off_103EDFE0(v42) * 0.5);
      v48 = -i;
      v10 = (double)-i;
LABEL_8:
      *(float *)(a1 + 12) = v10;
      v2 = (float *)(a1 + 12);
      *(float *)(a1 + 16) = v10;
      v3 = (float *)(a1 + 24);
      *(float *)(a1 + 20) = v10;
      v11 = (double)i;
      *(float *)(a1 + 24) = v11;
      *(float *)(a1 + 28) = v11;
      *(float *)(a1 + 32) = v11;
      break;
    case 6:
      v2 = (float *)(a1 + 12);
      *(float *)(a1 + 12) = 0.0;
      v3 = (float *)(a1 + 24);
      *(float *)(a1 + 16) = 0.0;
      *(float *)(a1 + 20) = 0.0;
      v48 = 1;
      *(float *)(a1 + 24) = 0.0;
      *(float *)(a1 + 28) = 0.0;
      *(float *)(a1 + 32) = 0.0;
      if ( *(int *)(a1 + 56) > 1 )
      {
        v4 = (float *)(a1 + 80);
        for ( i = a1 + 80; ; v4 = (float *)i )
        {
          v45 = *(v4 - 2) - *(float *)(a1 + 60);
          v46 = *(v4 - 1) - *(float *)(a1 + 64);
          v47 = *v4 - *(float *)(a1 + 68);
          v5 = sub_100157F0((float *)(a1 + 12), v44, &v45);
          *v2 = *v5;
          *(float *)(a1 + 16) = v5[1];
          *(float *)(a1 + 20) = v5[2];
          v6 = sub_10015850((float *)(a1 + 24), v43, &v45);
          v7 = *v6;
          i += 12;
          *v3 = v7;
          *(float *)(a1 + 28) = v6[1];
          v8 = v6[2];
          v9 = v48 + 1;
          *(float *)(a1 + 32) = v8;
          v48 = v9;
          if ( v9 >= *(_DWORD *)(a1 + 56) )
            break;
        }
      }
      break;
    default:
      v12 = 0.0;
      v2 = (float *)(a1 + 12);
      v3 = (float *)(a1 + 24);
      if ( *(float *)(a1 + 180) <= 0.0 )
      {
        *v2 = *(float *)(a1 + 180);
        *v3 = 0.0;
      }
      else
      {
        *v2 = 0.0;
        *v3 = *(float *)(a1 + 180);
      }
      if ( *(float *)(a1 + 184) <= 0.0 )
      {
        *(float *)(a1 + 16) = *(float *)(a1 + 184);
        *(float *)(a1 + 28) = 0.0;
      }
      else
      {
        *(float *)(a1 + 16) = 0.0;
        *(float *)(a1 + 28) = *(float *)(a1 + 184);
      }
      if ( *(float *)(a1 + 188) <= 0.0 )
      {
        *(float *)(a1 + 20) = *(float *)(a1 + 188);
      }
      else
      {
        *(float *)(a1 + 20) = 0.0;
        v12 = *(float *)(a1 + 188);
      }
      *(float *)(a1 + 32) = v12;
      break;
  }
  v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 4) + 4))(a1 + 4);
  v14 = *v13;
  v15 = v13[1];
  v16 = *(float **)(a1 + 868);
  v17 = v13[2];
  v45 = v14;
  v46 = v15;
  v47 = v17;
  if ( v16 )
  {
    v18 = v47;
    v19 = v46;
    do
    {
      v20 = v16[4] - v18;
      if ( v20 <= v2[2] )
        v21 = v20;
      else
        v21 = v2[2];
      v22 = v21;
      v23 = v16[3] - v19;
      v24 = v22;
      if ( v23 <= v2[1] )
        v25 = v23;
      else
        v25 = v2[1];
      v26 = v25;
      v27 = v16[2] - v45;
      v28 = v26;
      if ( v27 <= *v2 )
        v29 = v27;
      else
        v29 = *v2;
      *v2 = v29;
      v30 = v27;
      v31 = v28;
      v32 = v30;
      v2[1] = v31;
      v33 = v23;
      v34 = v24;
      v35 = v33;
      v2[2] = v34;
      if ( v20 < v3[2] )
        v20 = v3[2];
      v36 = v20;
      v37 = v35;
      v38 = v36;
      if ( v37 < v3[1] )
        v37 = v3[1];
      v39 = v37;
      v40 = v32;
      v41 = v39;
      if ( v40 < *v3 )
        v40 = *v3;
      v16 = *(float **)v16;
      *v3 = v40;
      v3[1] = v41;
      v3[2] = v38;
    }
    while ( v16 );
  }
}
