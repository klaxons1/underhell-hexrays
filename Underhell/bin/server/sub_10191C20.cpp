void __cdecl sub_10191C20(float *a1, float *a2, int a3)
{
  double v4; // st7
  double v5; // st6
  int v6; // edi
  int v7; // ecx
  int v8; // ebx
  int v9; // edx
  double v10; // st4
  double v11; // st2
  double v12; // rt1
  int v13[3]; // [esp+10h] [ebp-78h] BYREF
  int v14[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  int v15[3]; // [esp+28h] [ebp-60h] BYREF
  int v16[4]; // [esp+34h] [ebp-54h] BYREF
  float v17; // [esp+44h] [ebp-44h]
  float v18; // [esp+48h] [ebp-40h]
  float v19; // [esp+4Ch] [ebp-3Ch]
  int v20; // [esp+50h] [ebp-38h]
  float v21; // [esp+54h] [ebp-34h]
  float v22; // [esp+58h] [ebp-30h]
  float v23; // [esp+5Ch] [ebp-2Ch]
  float v24; // [esp+60h] [ebp-28h]
  float v25; // [esp+64h] [ebp-24h]
  float v26; // [esp+68h] [ebp-20h]
  int v27; // [esp+6Ch] [ebp-1Ch]
  int v28; // [esp+70h] [ebp-18h]
  int v29; // [esp+74h] [ebp-14h]
  int v30; // [esp+78h] [ebp-10h]
  float v31; // [esp+7Ch] [ebp-Ch]
  int v32; // [esp+80h] [ebp-8h]
  int v33; // [esp+84h] [ebp-4h]
  float v34; // [esp+90h] [ebp+8h]
  int v35; // [esp+94h] [ebp+Ch]
  int v36; // [esp+98h] [ebp+10h]
  int v37; // [esp+98h] [ebp+10h]

  v36 = dword_106326A0[a3];
  v22 = *a2 - *a1;
  v23 = a2[1] - a1[1];
  v24 = a2[2] - a1[2];
  v4 = off_10689714();
  v26 = v4;
  v5 = 0.0;
  if ( v4 > 0.0 )
  {
    v6 = BYTE2(v36);
    v28 = BYTE1(v36);
    v7 = BYTE1(v36) >> 1;
    v8 = BYTE2(v36) >> 1;
    v27 = (unsigned __int8)v36;
    v9 = (unsigned __int8)v36 >> 1;
    v35 = v7;
    v37 = v9;
    while ( 1 )
    {
      v17 = v23 * v5;
      v18 = v24 * v5;
      v19 = v22 * v5 + *a1;
      *(float *)&v20 = a1[1] + v17;
      v21 = a1[2] + v18;
      if ( v5 + 7.0 < v4 )
        v4 = v5 + 7.0;
      v10 = v22 * v4 + *a1;
      v11 = a1[2];
      v12 = v23 * v4 + a1[1];
      v25 = v5 + 10.0;
      v34 = v10;
      *(float *)v16 = v10;
      *(float *)&v33 = v12;
      v16[1] = v33;
      *(float *)&v32 = v4 * v24 + v11 + 1.0;
      v16[2] = v32;
      v31 = v19;
      *(float *)v15 = v19;
      v30 = v20;
      v15[1] = v20;
      *(float *)&v29 = v21 + 1.0;
      v15[2] = v29;
      sub_1011BC50((float *)v15, (float *)v16, v9, v7, v8, 1, 0.1);
      *(float *)v14 = v34;
      v14[1] = v33;
      v14[2] = v32;
      *(float *)v13 = v31;
      v13[1] = v30;
      v13[2] = v29;
      sub_1011BC50((float *)v13, (float *)v14, v27, v28, v6, 0, 0.15000001);
      v4 = v26;
      v5 = v25;
      if ( v25 >= (double)v26 )
        break;
      v9 = v37;
      v7 = v35;
    }
  }
}
