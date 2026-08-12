// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_103EF200@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  float *v6; // eax
  int (__thiscall *v7)(_DWORD *); // edx
  float *v8; // eax
  double v9; // st7
  float *v10; // esi
  float *v11; // ecx
  double v12; // st4
  double v13; // st6
  double v14; // st4
  double v15; // st5
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st7
  double v24; // st6
  double v25; // st7
  unsigned __int8 (__thiscall *v26)(float *, float *); // edx
  int (__thiscall *v27)(_DWORD *, float *); // eax
  float v30[20]; // [esp+2Ch] [ebp-11Ch] BYREF
  _BYTE v31[12]; // [esp+7Ch] [ebp-CCh] BYREF
  float v32[10]; // [esp+88h] [ebp-C0h] BYREF
  char v33; // [esp+B2h] [ebp-96h]
  char v34; // [esp+B3h] [ebp-95h]
  _DWORD v35[3]; // [esp+D4h] [ebp-74h] BYREF
  float v36[3]; // [esp+E0h] [ebp-68h] BYREF
  float v37[3]; // [esp+ECh] [ebp-5Ch] BYREF
  float v38; // [esp+F8h] [ebp-50h] BYREF
  float v39; // [esp+FCh] [ebp-4Ch]
  float v40; // [esp+100h] [ebp-48h]
  float v41; // [esp+104h] [ebp-44h] BYREF
  float v42; // [esp+108h] [ebp-40h]
  float v43; // [esp+10Ch] [ebp-3Ch]
  float v44; // [esp+110h] [ebp-38h] BYREF
  float v45; // [esp+114h] [ebp-34h]
  float v46; // [esp+118h] [ebp-30h]
  float v47; // [esp+11Ch] [ebp-2Ch] BYREF
  float v48; // [esp+120h] [ebp-28h]
  float v49; // [esp+124h] [ebp-24h]
  float v50[2]; // [esp+128h] [ebp-20h] BYREF
  float v51; // [esp+130h] [ebp-18h]
  float *v52; // [esp+134h] [ebp-14h]
  char v53; // [esp+13Bh] [ebp-Dh]
  int v54; // [esp+13Ch] [ebp-Ch]
  void *v55; // [esp+140h] [ebp-8h]
  void *retaddr; // [esp+148h] [ebp+0h]

  v54 = a2;
  v55 = retaddr;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v52 = (float *)sub_10261B20();
  else
    v52 = 0;
  (*(void (__thiscall **)(_DWORD *, float *, float *, int, int))(a1[80] + 60))(a1 + 80, &v44, &v41, a3, a4);
  v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*a1 + 576))(a1);
  v44 = v44 - *v6;
  v45 = v45 - v6[1];
  v7 = *(int (__thiscall **)(_DWORD *))(*a1 + 576);
  v46 = v46 - v6[2];
  v8 = (float *)v7(a1);
  v52 = (float *)"info_target_vehicle_transition";
  v9 = v41 - *v8;
  v51 = 0.0;
  v53 = 0;
  v41 = v9;
  v42 = v42 - v8[1];
  v43 = v43 - v8[2];
  v10 = (float *)sub_1012BC90(&dword_1069E3E0, 0, "info_target_vehicle_transition");
  if ( !v10 )
    return Warning("No valid vehicle teleport points!\n");
  while ( 1 )
  {
    if ( !*((_BYTE *)v10 + 800) )
    {
      v11 = v52;
      if ( ((_DWORD)v52[63] & 0x800) != 0 )
      {
        sub_100DAE60((int)v52);
        v11 = v52;
      }
      if ( ((_DWORD)v10[63] & 0x800) != 0 )
      {
        sub_100DAE60((int)v10);
        v11 = v52;
      }
      v12 = v10[146] - v11[146];
      v13 = v12 * v12;
      v14 = v10[145] - v11[145];
      v15 = v13;
      v16 = v10[147] - v11[147];
      if ( v14 * v14 + v15 + v16 * v16 <= 1440000.0 )
      {
        if ( ((_DWORD)v10[63] & 0x800) != 0 )
          sub_100DAE60((int)v10);
        v50[0] = v10[145];
        v50[1] = v10[146];
        v51 = v10[147];
        if ( ((_DWORD)v10[63] & 0x800) != 0 )
          sub_100DAE60((int)v10);
        v17 = v10[176];
        v18 = v10[177];
        v52 = &v38;
        v19 = v17;
        v20 = v10[178];
        v37[0] = v19;
        v37[1] = v18 - 90.0;
        v37[2] = v20;
        sub_10424E70(&v44, v37, &v38);
        sub_10424E70(&v41, v37, &v47);
        v21 = v38;
        if ( v47 < (double)v38 )
        {
          v38 = v47;
          v47 = v21;
        }
        v22 = v39;
        if ( v48 < (double)v39 )
        {
          v39 = v48;
          v48 = v22;
        }
        v23 = v40;
        v24 = v49;
        if ( v49 < (double)v40 )
        {
          v40 = v49;
          v24 = v23;
          v23 = v49;
          v49 = v24;
        }
        v25 = v24 - v23 + v51;
        v51 = v25;
        v36[0] = v50[0];
        v36[1] = COERCE_FLOAT(v36);
        v36[2] = v25 - 128.0;
        sub_1001F200(v30, v50, v36, (float *)LODWORD(v51), &v47);
        sub_10265570(v35, (int)a1, 0);
        (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v30,
          33570827,
          v35,
          v31);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v31, (int)v32, 255, 255, 0, 1, -1.0);
        if ( !v34 && !v33 && v32[8] < 1.0 )
        {
          v26 = *(unsigned __int8 (__thiscall **)(float *, float *))(*(_DWORD *)v52 + 872);
          v53 = 1;
          if ( !v26(v52, v32) )
            break;
        }
      }
    }
    v10 = (float *)sub_1012BC90(&dword_1069E3E0, (int)v10, "info_target_vehicle_transition");
    if ( !v10 )
    {
      if ( !v53 )
        return Warning("No valid vehicle teleport points!\n");
      break;
    }
  }
  v27 = *(int (__thiscall **)(_DWORD *, float *))(*a1 + 416);
  v52 = 0;
  v51 = COERCE_FLOAT(v37);
  return v27(a1, v50);
}
