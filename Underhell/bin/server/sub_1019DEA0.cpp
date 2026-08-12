char __userpurge sub_1019DEA0@<al>(int a1@<ebp>, float *a2, float *a3, float *a4)
{
  int v4; // edi
  double v5; // st7
  double v6; // st7
  double v7; // st6
  double v8; // st6
  double v9; // st4
  double v10; // st2
  _DWORD *v11; // ecx
  bool v12; // zf
  float *v13; // eax
  int v15; // esi
  int v16; // ecx
  float *v17; // edx
  float *v18; // edx
  int v19; // ecx
  double v20; // st7
  float *v21; // ecx
  _DWORD *v22; // [esp+Ch] [ebp-204h]
  float v23; // [esp+10h] [ebp-200h]
  _BYTE v24[8]; // [esp+1Ch] [ebp-1F4h] BYREF
  int v25; // [esp+24h] [ebp-1ECh] BYREF
  int v26; // [esp+2Ch] [ebp-1E4h] BYREF
  _DWORD v27[3]; // [esp+11Ch] [ebp-F4h] BYREF
  int v28; // [esp+128h] [ebp-E8h] BYREF
  float v29; // [esp+130h] [ebp-E0h]
  float v30[7]; // [esp+134h] [ebp-DCh] BYREF
  char v31; // [esp+153h] [ebp-BDh]
  _DWORD *v32; // [esp+168h] [ebp-A8h]
  float v33[16]; // [esp+174h] [ebp-9Ch] BYREF
  char v34; // [esp+1B4h] [ebp-5Ch]
  bool v35; // [esp+1B5h] [ebp-5Bh]
  _DWORD v36[4]; // [esp+1D0h] [ebp-40h] BYREF
  float v37; // [esp+1E0h] [ebp-30h]
  float v38; // [esp+1E4h] [ebp-2Ch]
  float v39; // [esp+1E8h] [ebp-28h]
  float v40; // [esp+1ECh] [ebp-24h]
  float v41; // [esp+1F0h] [ebp-20h]
  float v42; // [esp+1F4h] [ebp-1Ch]
  float v43; // [esp+1F8h] [ebp-18h]
  _DWORD *v44; // [esp+1FCh] [ebp-14h]
  float *v45; // [esp+200h] [ebp-10h]
  int v46; // [esp+204h] [ebp-Ch]
  void *v47; // [esp+208h] [ebp-8h]
  void *retaddr; // [esp+210h] [ebp+0h]

  v46 = a1;
  v47 = retaddr;
  v37 = *a2;
  v4 = 0;
  v38 = a2[1];
  v44 = 0;
  v5 = a2[2];
  v45 = (float *)&v25;
  v39 = v5 - 9999.9004;
  v6 = 1.0;
  v43 = 1.0;
  while ( 1 )
  {
    v40 = *a2;
    v23 = 0.0;
    v7 = a2[1];
    v22 = v44;
    v41 = v7;
    v42 = v6 + a2[2];
    sub_10265570(v44, 0);
    v36[0] = &CTraceFilterWalkableEntities::`vftable';
    v36[3] = 7;
    v8 = v37 - v40;
    v33[4] = v8;
    v9 = v38 - v41;
    v33[5] = v9;
    v10 = v39 - v42;
    v33[6] = v10;
    v35 = 0.0 != v10 * v10 + v8 * v8 + v9 * v9;
    v33[14] = 0.0;
    v33[13] = 0.0;
    v33[12] = 0.0;
    v33[10] = 0.0;
    v33[9] = 0.0;
    v33[8] = 0.0;
    v34 = 1;
    v33[0] = v40;
    v33[1] = v41;
    v33[2] = v42;
    (*(void (__thiscall **)(int, float *, int, _DWORD *, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v33,
      81931,
      v36,
      v27);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v27, (int)&v28, 255, 0, 0, 1, -1.0);
    if ( !sub_10163160(v27) )
      break;
    v11 = v32;
    if ( !v32 )
      break;
    if ( (char *)v32[23] != "prop_door" )
    {
      if ( sub_100D6240(v32, "prop_door") )
        goto LABEL_12;
      v11 = v32;
      if ( (char *)v32[23] != "prop_door_rotating" )
      {
        if ( sub_100D6240(v32, "prop_door_rotating") )
          goto LABEL_12;
        v11 = v32;
        if ( (char *)v32[23] != "func_breakable" )
        {
          if ( !sub_100D6240(v32, "func_breakable") )
            break;
LABEL_12:
          v11 = v32;
        }
      }
    }
    v44 = v11;
LABEL_21:
    v6 = v43 + 10.0;
    v43 = v6;
    if ( v6 >= 100.0 )
      goto LABEL_22;
  }
  if ( v31 || v4 && v29 <= (double)*(v45 - 6) )
    goto LABEL_21;
  *(v45 - 2) = v29;
  v12 = !sub_1019D3A0(v30, 0.0099999998);
  v13 = v45;
  if ( v12 )
  {
    *(v45 - 1) = v30[0];
    *v13 = v30[1];
    v13[1] = v30[2];
    v13 = v45;
  }
  else
  {
    *(v45 - 1) = 0.0;
    *v13 = 0.0;
    v13[1] = 1.0;
  }
  ++v4;
  v45 = v13 + 4;
  if ( v4 != 16 )
    goto LABEL_21;
LABEL_22:
  if ( !v4 )
    return 0;
  v15 = v4 - 1;
  v16 = 0;
  if ( v4 - 1 < 4 )
  {
LABEL_31:
    if ( v16 < v15 )
    {
      v18 = (float *)&v24[16 * v16];
      do
      {
        if ( v18[4] - *v18 >= 36.0 )
          break;
        ++v16;
        v18 += 4;
      }
      while ( v16 < v15 );
    }
  }
  else
  {
    v17 = (float *)&v26;
    while ( *v17 - *(v17 - 4) < 36.0 )
    {
      if ( v17[4] - *v17 >= 36.0 )
      {
        ++v16;
        break;
      }
      if ( v17[8] - v17[4] >= 36.0 )
      {
        v16 += 2;
        break;
      }
      if ( v17[12] - v17[8] >= 36.0 )
      {
        v16 += 3;
        break;
      }
      v16 += 4;
      v17 += 16;
      if ( v16 >= v4 - 4 )
        goto LABEL_31;
    }
  }
  v19 = 2 * v16;
  *a3 = *(float *)&v24[8 * v19];
  if ( a4 )
  {
    v20 = *(float *)&v24[8 * v19 + 4];
    v21 = (float *)&v24[8 * v19 + 4];
    *a4 = v20;
    a4[1] = v21[1];
    a4[2] = v21[2];
  }
  return 1;
}
