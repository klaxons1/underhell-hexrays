void __usercall sub_100DFDE0(float *a1@<esi>, int a2)
{
  int v2; // edi
  void (__thiscall *v3)(int, float *, _BYTE *); // eax
  float v4; // edx
  float v5; // eax
  int v6; // eax
  double v7; // st6
  int v8; // eax
  double v9; // st5
  double v10; // st7
  double v11; // st4
  double v12; // st5
  double v13; // st6
  bool v14; // c0
  long double v15; // st7
  double v16; // st5
  double v17; // st5
  float v18; // edx
  float v19; // eax
  double v20; // st7
  long double v21; // st5
  long double v22; // rt0
  double v23; // st6
  double v24; // st5
  int v25; // eax
  long double v26; // st7
  double v27; // st7
  _DWORD *v28; // eax
  long double v29; // st6
  long double v30; // st6
  char v31[12]; // [esp+24h] [ebp-A4h] BYREF
  char v32[12]; // [esp+30h] [ebp-98h] BYREF
  _BYTE v33[48]; // [esp+3Ch] [ebp-8Ch] BYREF
  _BYTE v34[12]; // [esp+6Ch] [ebp-5Ch] BYREF
  _BYTE v35[12]; // [esp+78h] [ebp-50h] BYREF
  float v36[3]; // [esp+84h] [ebp-44h] BYREF
  float v37; // [esp+90h] [ebp-38h] BYREF
  float v38; // [esp+94h] [ebp-34h]
  float v39; // [esp+98h] [ebp-30h]
  float v40; // [esp+9Ch] [ebp-2Ch] BYREF
  float v41; // [esp+A0h] [ebp-28h] BYREF
  float v42; // [esp+A4h] [ebp-24h]
  float v43; // [esp+A8h] [ebp-20h]
  float v44; // [esp+ACh] [ebp-1Ch] BYREF
  float v45; // [esp+B0h] [ebp-18h]
  float v46; // [esp+B4h] [ebp-14h]
  float v47; // [esp+B8h] [ebp-10h] BYREF
  float v48; // [esp+BCh] [ebp-Ch] BYREF
  float v49; // [esp+C0h] [ebp-8h]
  char v50; // [esp+C7h] [ebp-1h]

  v2 = *((_DWORD *)a1 + 106);
  if ( v2
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 40))(*((_DWORD *)a1 + 106))
    && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 280))(v2) )
  {
    v3 = *(void (__thiscall **)(int, float *, _BYTE *))(*(_DWORD *)v2 + 276);
    v50 = 1;
    v3(v2, v36, v35);
    v49 = -1.0;
    if ( a1 == *(float **)(a2 + 4) )
    {
      if ( sub_10018CD0(a1 + 122, &flt_106F1CB4) )
        v50 = 0;
      if ( sub_10018CD0(a1 + 148, &flt_106F1CA8) )
        goto LABEL_26;
    }
    if ( ((_DWORD)a1[63] & 0x1000) != 0 )
      sub_100DAFD0((int)a1);
    v4 = a1[119];
    v5 = a1[120];
    v43 = a1[121];
    v41 = v4;
    v42 = v5;
    v40 = off_10689714();
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 280))(v2);
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v6 + 48))(v6, &v37, 0);
    v7 = v42;
    v8 = *((_DWORD *)a1 + 63) >> 11;
    v9 = v41;
    v10 = v43;
    v11 = v39 * v43 + v38 * v42 + v37 * v41;
    v48 = v11;
    v47 = v36[1] * v42 + v36[0] * v41 + v36[2] * v43;
    if ( (v8 & 1) != 0 )
    {
      sub_100DAE60((int)a1);
      v10 = v43;
      v7 = v42;
      v9 = v41;
      v11 = v48;
    }
    v12 = v7 * a1[146] + v9 * a1[145];
    v13 = v11;
    v14 = v11 - (v10 * a1[147] + v12) > 1.0;
    v15 = 1.0;
    if ( v14 )
    {
      (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 620))(a1, 0.0);
      v15 = v49;
      goto LABEL_27;
    }
    v16 = v11 - v47;
    v47 = v16;
    if ( v16 <= 1.0 )
    {
LABEL_26:
      v15 = v49;
      goto LABEL_27;
    }
    v17 = v11 - *(float *)(a2 + 16) * v40;
    if ( a1 == *(float **)(a2 + 4) )
    {
      if ( !*(_DWORD *)a2 )
        goto LABEL_20;
      v18 = a1[149];
      v19 = a1[150];
      v44 = a1[148];
      v45 = v18;
      v46 = v19;
      off_10689714();
      v13 = v48;
      v20 = *(float *)(*(_DWORD *)a2 + 12) * v46
          + *(float *)(*(_DWORD *)a2 + 4) * v44
          + *(float *)(*(_DWORD *)a2 + 8) * v45
          + v48
          - (v46 * a1[181]
           + v44 * a1[179]
           + v45 * a1[180]);
      v21 = 1.0;
    }
    else
    {
      sub_100DFC30(a2, (int)v33, (int)a1);
      sub_10421CE0(v33, 3, &v44);
      v20 = v45 * v42 + v44 * v41 + v46 * v43;
      v21 = 1.0;
      v13 = v48;
    }
    v22 = v21;
    v17 = v20;
    v15 = v22;
LABEL_20:
    v23 = v13 - v17;
    if ( v23 > 0.0 )
    {
      v24 = v47 / v23;
      v49 = v24;
      if ( v24 <= v15 )
      {
        v15 = v24;
        if ( v24 < 0.0 )
        {
          v15 = 0.0;
          v49 = 0.0;
        }
      }
      else
      {
        v49 = v15;
      }
    }
    else
    {
      v49 = v15;
    }
LABEL_27:
    if ( v50 )
    {
      if ( ((_DWORD)a1[63] & 0x800) != 0 )
        sub_100DAE60((int)a1);
      sub_10424CE0(v35, a1 + 176, &v44, &v48);
      if ( fabs(v48) > 0.5 )
      {
        v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 280))(v2);
        (*(void (__thiscall **)(int, _DWORD, float *))(*(_DWORD *)v25 + 48))(v25, 0, &v41);
        sub_10424CE0(v35, &v41, v32, &v40);
        v26 = fabs(v40);
        if ( v26 > 0.0099999998 )
        {
          if ( a1 == *(float **)(a2 + 4) )
          {
            sub_100D7A40(a1 + 122);
            v27 = v26 * *(float *)(a2 + 16);
          }
          else
          {
            sub_100DFC30(a2, (int)v33, (int)a1);
            sub_10421A90(v33, v34);
            sub_10421CE0(v33, 3, v31);
            v28 = sub_1001F410(a1);
            sub_10424CE0(v34, v28, &v37, &v47);
            v27 = (v38 * v45 + v44 * v37 + v39 * v46) * v47;
          }
          if ( 0.0 == v27 )
          {
            v15 = 1.0;
          }
          else
          {
            v29 = v48 / v27;
            v15 = 0.0;
            v30 = fabs(v29);
            if ( v30 > 1.0 )
            {
              v30 = 1.0;
LABEL_38:
              v15 = v30;
              goto LABEL_39;
            }
            if ( v30 >= 0.0 )
              goto LABEL_38;
          }
LABEL_39:
          if ( v49 > v15 )
            v15 = v49;
          goto LABEL_47;
        }
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 620))(a1, 0.0);
      }
      v15 = v49;
    }
LABEL_47:
    if ( v15 >= *(float *)(a2 + 12) )
    {
      *(float *)(a2 + 12) = v15;
      *(_DWORD *)(a2 + 8) = a1;
    }
  }
}
