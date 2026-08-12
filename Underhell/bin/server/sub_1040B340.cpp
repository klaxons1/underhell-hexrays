void __thiscall sub_1040B340(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int v5; // ecx
  double v6; // st7
  double v7; // st7
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  int v11; // eax
  int v12; // ecx
  float *v13; // eax
  float *v14; // esi
  float *v15; // ebx
  float *v16; // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st7
  float *v21; // eax
  float *v22; // eax
  double v23; // st7
  double v24; // st7
  double v25; // st7
  int v26; // ecx
  int v27; // ecx
  long double v28; // st7
  int v29; // ecx
  double v30; // st7
  float *v31; // eax
  int v32; // ecx
  long double v33; // st7
  int v34; // ecx
  float v35; // [esp+1Ch] [ebp-B4h]
  int v36[16]; // [esp+28h] [ebp-A8h] BYREF
  float v37[3]; // [esp+68h] [ebp-68h] BYREF
  float v38[3]; // [esp+74h] [ebp-5Ch] BYREF
  float v39[3]; // [esp+80h] [ebp-50h] BYREF
  _DWORD v40[2]; // [esp+8Ch] [ebp-44h] BYREF
  float v41[3]; // [esp+94h] [ebp-3Ch] BYREF
  float *v42; // [esp+A0h] [ebp-30h]
  float v43; // [esp+A4h] [ebp-2Ch]
  int v44; // [esp+A8h] [ebp-28h] BYREF
  float v45; // [esp+ACh] [ebp-24h]
  float v46; // [esp+B0h] [ebp-20h]
  float v47; // [esp+B4h] [ebp-1Ch]
  float v48; // [esp+B8h] [ebp-18h]
  float v49; // [esp+BCh] [ebp-14h]
  float v50; // [esp+C0h] [ebp-10h]
  int v51; // [esp+C4h] [ebp-Ch] BYREF
  float v52; // [esp+C8h] [ebp-8h]
  float v53; // [esp+CCh] [ebp-4h]

  v2 = *(_DWORD *)(this + 412);
  if ( v2 == -1
    || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1], v3[1] != v2 >> 12)
    || (v4 = *v3) == 0
    || *(char **)(v4 + 92) != "npc_strider" && !sub_100D6240((_DWORD *)v4, "npc_strider") )
  {
    if ( *(_BYTE *)(this + 1690) )
    {
      v5 = *(_DWORD *)(this + 424);
      if ( v5 )
      {
        v6 = *(float *)(dword_106F0C74 + 44);
        *(float *)&v51 = 0.0;
        v52 = 0.0;
        v53 = v6;
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)v5 + 236))(v5, &v51);
      }
LABEL_29:
      v35 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
      sub_100EC4A0((int *)this, v35, 0);
      return;
    }
    v7 = *(float *)(dword_106F0BE4 + 44) * 38.0;
    v50 = v7;
    if ( v7 > 0.0 && *(_BYTE *)(this + 306) == 6 && *(_DWORD *)(this + 424) )
    {
      v8 = (float *)sub_10019640((_DWORD *)this);
      v9 = v8[1];
      v51 = *(int *)v8;
      v10 = v8[2];
      *(float *)&v44 = *(float *)&v51 - v50;
      v45 = v9 - v50;
      v46 = v10 - v50;
      *(float *)&v51 = *(float *)&v51 + v50;
      v52 = v9 + v50;
      v53 = v10 + v50;
      sub_1025F990(v40, (int)v36, 16, 0x2000);
      *(float *)&v11 = COERCE_FLOAT(sub_1025F9C0((int)&v44, (int)&v51, (int)v40));
      v12 = 0;
      v47 = *(float *)&v11;
      v48 = NAN;
      v42 = 0;
      v43 = 0.0;
      v49 = v50 * v50 + 1.0;
      if ( v11 > 0 )
      {
        do
        {
          v13 = (float *)__RTDynamicCast(
                           v36[v12],
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                           (int)&CNPC_Strider `RTTI Type Descriptor',
                           0);
          v14 = v13;
          if ( v13 )
          {
            if ( !sub_103B0F10(v13) )
            {
              v15 = (float *)sub_10019640((_DWORD *)this);
              v16 = sub_103AFA80(v14, v41);
              v17 = *v16 - *v15;
              *(float *)&v51 = v17;
              v18 = v16[1] - v15[1];
              v52 = v18;
              v19 = v16[2] - v15[2];
              v53 = v19;
              v20 = v17 * v17 + v18 * v18 + v19 * v19;
              if ( v49 > v20 )
              {
                v49 = v20;
                v48 = v43;
                v42 = v14;
              }
            }
          }
          v12 = LODWORD(v43) + 1;
          v43 = *(float *)&v12;
        }
        while ( v12 < SLODWORD(v47) );
        if ( v48 >= 0.0 )
        {
          if ( *(_DWORD *)(dword_106F0B9C + 48) )
          {
            v21 = (float *)sub_10019640((_DWORD *)this);
            *(float *)&v44 = *v21 + *(float *)&v51;
            v45 = v21[1] + v52;
            v46 = v21[2] + v53;
            sub_1011D420((float *)&v44, v50, 255, 255, 255, 255, 1, 0.1);
            v22 = (float *)sub_10019640((_DWORD *)this);
            *(float *)&v44 = *v22 + *(float *)&v51;
            v45 = v22[1] + v52;
            v46 = v22[2] + v53;
            sub_1011C120((int)&v44, v50, 255, 255, 255, 1, 0.1);
          }
          v47 = *(float *)(dword_106F0A7C + 44);
          v23 = sub_10206B90((_DWORD *)this);
          v24 = v23 * v47;
          v47 = *(float *)(dword_106F0B0C + 48);
          v48 = v24;
          switch ( LODWORD(v47) )
          {
            case 1:
              v25 = v24 / v49;
              v26 = *(_DWORD *)(this + 424);
              *(float *)&v44 = *(float *)&v51 * v25;
              v45 = v52 * v25;
              v46 = v25 * v53;
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)v26 + 236))(v26, &v44);
              break;
            case 2:
              v27 = *(_DWORD *)(this + 424);
              v28 = v24 / (v49 * sqrt(v49));
              v38[0] = *(float *)&v51 * v28;
              v38[1] = v52 * v28;
              v38[2] = v28 * v53;
              (*(void (__stdcall **)(float *))(*(_DWORD *)v27 + 236))(v38);
              break;
            case 3:
              v29 = *(_DWORD *)(this + 424);
              v30 = v24 / (v49 * v49);
              v39[0] = *(float *)&v51 * v30;
              v39[1] = v52 * v30;
              v39[2] = v30 * v53;
              (*(void (__thiscall **)(int, float *))(*(_DWORD *)v29 + 236))(v29, v39);
              break;
            case 4:
              sub_100BF1B0(v42, "buster_target", (int)&v51, 0, 0, 0);
              if ( *(_DWORD *)(dword_106F0B9C + 48) )
              {
                sub_1011C120((int)&v51, v50, 255, 0, 255, 1, 0.1);
                sub_1011C120((int)&v51, v50, 255, 0, 255, 1, 0.1);
              }
              v31 = (float *)sub_10019640((_DWORD *)this);
              *(float *)&v51 = *(float *)&v51 - *v31;
              v52 = v52 - v31[1];
              v53 = v53 - v31[2];
              off_10689714();
              v32 = *(_DWORD *)(this + 424);
              v37[0] = *(float *)&v51 * v48;
              v37[1] = v52 * v48;
              v37[2] = v48 * v53;
              (*(void (__stdcall **)(float *))(*(_DWORD *)v32 + 236))(v37);
              break;
            default:
              v33 = pow(v49, ((double)SLODWORD(v47) + 1.0) * 0.5) * v48;
              v34 = *(_DWORD *)(this + 424);
              v41[0] = *(float *)&v51 * v33;
              v41[1] = v52 * v33;
              v41[2] = v33 * v53;
              (*(void (__stdcall **)(float *))(*(_DWORD *)v34 + 236))(v41);
              break;
          }
        }
      }
      goto LABEL_29;
    }
  }
}
