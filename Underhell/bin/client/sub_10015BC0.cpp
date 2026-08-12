int __thiscall sub_10015BC0(int *this)
{
  float *v2; // eax
  float v3; // ecx
  float v4; // edx
  float v5; // eax
  float *v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  double v10; // st7
  double v11; // st5
  double v12; // st3
  double v13; // st7
  int v14; // edx
  float *v15; // eax
  int v16; // edx
  double v17; // st7
  int (__thiscall *v18)(int *); // eax
  float *v19; // eax
  float v21[3]; // [esp+4h] [ebp-30h] BYREF
  float v22; // [esp+10h] [ebp-24h] BYREF
  float v23; // [esp+14h] [ebp-20h]
  float v24; // [esp+18h] [ebp-1Ch]
  float v25; // [esp+1Ch] [ebp-18h]
  float v26; // [esp+20h] [ebp-14h]
  float v27; // [esp+24h] [ebp-10h]
  float v28; // [esp+28h] [ebp-Ch]
  float v29; // [esp+2Ch] [ebp-8h]
  float v30; // [esp+30h] [ebp-4h]

  v2 = (float *)sub_100159D0(this);
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v22 = v3;
  v23 = v4;
  v24 = v5;
  v6 = (float *)sub_10015AE0(this);
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v28 = v7;
  v10 = v7;
  v30 = v9;
  v29 = v8;
  if ( v22 >= (double)v7 )
    v25 = v7;
  else
    v25 = v22;
  v11 = v29;
  if ( v23 >= (double)v29 )
    v26 = v29;
  else
    v26 = v23;
  if ( v24 >= (double)v30 )
    v27 = v30;
  else
    v27 = v24;
  if ( v22 > v10 )
    v10 = v22;
  v12 = v10;
  v13 = v30;
  v28 = v12;
  if ( v23 > v11 )
    v11 = v23;
  v29 = v11;
  if ( v24 > v13 )
    v13 = v24;
  v14 = *this;
  v30 = v13;
  v15 = (float *)(*(int (__thiscall **)(int *))(v14 + 36))(this);
  v16 = *this;
  v22 = v28 - *v15;
  v23 = v29 - v15[1];
  v17 = v30 - v15[2];
  v18 = *(int (__thiscall **)(int *))(v16 + 36);
  v24 = v17;
  v19 = (float *)v18(this);
  v21[0] = v25 - *v19;
  v21[1] = v26 - v19[1];
  v21[2] = v27 - v19[2];
  return sub_1008FC00(v21, &v22);
}
