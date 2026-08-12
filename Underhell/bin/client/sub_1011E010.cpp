int *sub_1011E010()
{
  int v0; // esi
  char *v1; // eax
  double v2; // st7
  double v3; // st5
  float v4; // eax
  float v5; // edx
  float *v6; // eax
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  int *result; // eax
  int *v12; // esi
  float v13; // eax
  float v14; // edx
  float v15; // [esp+0h] [ebp-98h]
  float v16; // [esp+8h] [ebp-90h]
  _DWORD v17[16]; // [esp+10h] [ebp-88h] BYREF
  char v18; // [esp+52h] [ebp-46h]
  float v19; // [esp+64h] [ebp-34h]
  float v20; // [esp+68h] [ebp-30h] BYREF
  float v21; // [esp+6Ch] [ebp-2Ch]
  float v22; // [esp+70h] [ebp-28h]
  float v23; // [esp+74h] [ebp-24h]
  float v24; // [esp+78h] [ebp-20h]
  float v25; // [esp+7Ch] [ebp-1Ch]
  int v26; // [esp+80h] [ebp-18h] BYREF
  int v27; // [esp+84h] [ebp-14h]
  int v28; // [esp+88h] [ebp-10h]
  float v29; // [esp+8Ch] [ebp-Ch]
  float v30; // [esp+90h] [ebp-8h]
  float v31; // [esp+94h] [ebp-4h]
  int savedregs; // [esp+98h] [ebp+0h] BYREF

  *(float *)&dword_1043770C = 0.0;
  *(float *)&dword_10437710 = 0.0;
  *(float *)&dword_10437714 = 0.0;
  *(float *)&dword_10437718 = 0.0;
  *(float *)&dword_1043771C = 0.0;
  *(float *)&dword_10437720 = 0.0;
  *(float *)&dword_10437724 = 0.0;
  *(float *)&dword_10437728 = 0.0;
  *(float *)&dword_1043772C = 0.0;
  *(float *)&dword_10437730 = 0.0;
  *(float *)&dword_10437734 = 0.0;
  *(float *)&dword_10437738 = 0.0;
  *(float *)&dword_1043773C = 0.0;
  *(float *)&dword_10437740 = 0.0;
  v19 = 0.0;
  v0 = sub_1007A7F0(off_103DCD78);
  if ( !v0 )
    goto LABEL_4;
  while ( 1 )
  {
    v1 = sub_10034D90((void *)v0);
    if ( !_stricmp(v1, "class C_Sun") )
      break;
    v0 = sub_1007A820(off_103DCD78, v0);
    if ( !v0 )
      goto LABEL_4;
  }
  v4 = *(float *)(v0 + 1540);
  v5 = *(float *)(v0 + 1548);
  v24 = *(float *)(v0 + 1544);
  v23 = v4;
  v25 = v5;
  off_103EDFEC();
  v29 = v23 * 512.0;
  v30 = v24 * 512.0;
  v31 = 512.0 * v25;
  v6 = (float *)sub_101356D0();
  v20 = v29 + *v6;
  v21 = v6[1] + v30;
  v22 = v6[2] + v31;
  if ( sub_1013B9F0(&v20, &v26) )
  {
    v29 = v23 * 512.0;
    v30 = v24 * 512.0;
    v31 = 512.0 * v25;
    v7 = (float *)sub_101356D0();
    v20 = *v7 - v29;
    v21 = v7[1] - v30;
    v22 = v7[2] - v31;
    sub_1013B9F0(&v20, &v26);
  }
  *(float *)&v26 = *(float *)&v26 * 0.5 + 0.5;
  dword_1043770C = v26;
  *(float *)&v27 = *(float *)&v27 * -0.5 + 0.5;
  dword_10437710 = v27;
  *(float *)&v28 = *(float *)&v28 * 0.0;
  v8 = (float *)sub_101356F0();
  *(float *)&dword_10437714 = v8[2] * v25 + v8[1] * v24 + v23 * *v8;
  *(float *)&dword_1043771C = v23;
  *(float *)&dword_10437720 = v24;
  *(float *)&dword_10437724 = v25;
  v29 = v23 * 56755.84;
  v30 = v24 * 56755.84;
  v31 = v25 * 56755.84;
  v9 = (float *)sub_101356D0();
  v20 = *v9 + v29;
  v21 = v9[1] + v30;
  v22 = v9[2] + v31;
  v10 = (float *)sub_101356D0();
  sub_1000FCE0((int)&savedregs, v0, v10, &v20, 33570827, 0, 1, (int)v17);
  if ( !sub_100AF2F0(v17) )
    goto LABEL_4;
  if ( (v18 & 4) != 0 )
    v2 = 1.0;
  else
LABEL_4:
    v2 = v19;
  if ( v2 == flt_10437744 )
  {
    v2 = flt_10437744;
  }
  else
  {
    if ( 0.0 == v2 )
      v3 = 0.75;
    else
      v3 = 4.0;
    v16 = v3 * *((float *)off_103DC81C + 4);
    v15 = v2;
    sub_101F0510(v15, flt_10437744, v16);
    flt_10437744 = v2;
  }
  *(float *)&dword_10437718 = v2;
  result = (int *)sub_100422D0();
  v12 = result;
  if ( result )
  {
    v13 = *((float *)result + 58);
    v14 = *((float *)v12 + 60);
    v27 = v12[59];
    *(float *)&v26 = v13;
    *(float *)&v28 = v14;
    *(float *)&dword_10437734 = off_103EDFEC();
    dword_1043772C = v27;
    dword_10437728 = v26;
    dword_10437730 = v28;
    result = (int *)sub_10034A00((char *)v12);
    dword_10437738 = *result;
    dword_1043773C = result[1];
    dword_10437740 = result[2];
  }
  return result;
}
