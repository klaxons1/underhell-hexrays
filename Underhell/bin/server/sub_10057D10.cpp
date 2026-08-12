void __userpurge sub_10057D10(int a1@<ecx>, double a2@<st0>, int a3)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  double v7; // st7
  int v8; // eax
  float *v9; // esi
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // eax
  int v14; // eax
  _DWORD *v15; // eax
  double v16; // st7
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  float *v20; // eax
  _DWORD *v21; // ecx
  float *v22; // eax
  double v23; // st6
  float *v24; // edi
  _DWORD *v25; // eax
  float *v26; // eax
  float *v27; // eax
  _DWORD *v28; // eax
  int v29; // eax
  float *v30; // edi
  _DWORD *v31; // eax
  float *v32; // eax
  double v33; // st4
  double v34; // st6
  double v35; // st4
  double v36; // st5
  double v37; // st6
  int v38; // eax
  float v39; // [esp+Ch] [ebp-78h]
  float v40; // [esp+10h] [ebp-74h]
  float v41; // [esp+10h] [ebp-74h]
  float v42; // [esp+10h] [ebp-74h]
  float v43; // [esp+10h] [ebp-74h]
  float v44; // [esp+10h] [ebp-74h]
  float v45[12]; // [esp+20h] [ebp-64h] BYREF
  float v46; // [esp+50h] [ebp-34h] BYREF
  float v47; // [esp+54h] [ebp-30h]
  float v48; // [esp+58h] [ebp-2Ch]
  int v49; // [esp+5Ch] [ebp-28h] BYREF
  float v50; // [esp+60h] [ebp-24h]
  float v51; // [esp+64h] [ebp-20h]
  float v52; // [esp+68h] [ebp-1Ch] BYREF
  float v53; // [esp+6Ch] [ebp-18h]
  int v54; // [esp+70h] [ebp-14h]
  int v55; // [esp+74h] [ebp-10h] BYREF
  float v56; // [esp+78h] [ebp-Ch]
  float v57; // [esp+7Ch] [ebp-8h]
  int v58; // [esp+80h] [ebp-4h]
  bool v59; // [esp+8Fh] [ebp+Bh]

  v3 = a3;
  v4 = *(_DWORD *)a3;
  v5 = a1;
  if ( *(int *)a3 > 100000 )
  {
    switch ( v4 )
    {
      case 100001:
      case 100005:
        if ( !sub_1001ED60((float *)(a1 + 192)) )
          sub_10050BE0((float *)(v5 + 204));
        *(float *)&v55 = flt_10689730;
        v56 = flt_10689734;
        v57 = flt_10689738;
        v10 = sub_1026A890(v5 + 20);
        v11 = __RTDynamicCast(
                v10,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CPointEntity `RTTI Type Descriptor',
                0);
        v12 = *(_DWORD **)(v5 + 4);
        v59 = v11 != 0;
        if ( v12[581] == 3 )
        {
          v3 = dword_106B31C8;
          sub_10021820(v12);
          if ( *(float *)(v3 + 12) - a2 < 5.0 )
          {
            v13 = (_DWORD *)sub_100217F0(*(void **)(v5 + 4));
LABEL_31:
            v55 = *v13;
            v56 = *((float *)v13 + 1);
            v16 = *((float *)v13 + 2);
LABEL_32:
            v57 = v16;
            goto LABEL_33;
          }
          if ( v59 )
            goto LABEL_33;
LABEL_25:
          sub_10052AE0((_DWORD *)v5, (float *)&v55);
          goto LABEL_33;
        }
        if ( sub_1026A890(v5 + 20) && !v59 )
        {
          if ( *(_BYTE *)(v5 + 84) )
          {
            v14 = sub_1026A890(v5 + 20);
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 320))(v14) )
              goto LABEL_30;
          }
          if ( !sub_1001ED60((float *)(v5 + 204)) )
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 12))(v5, 0);
            return;
          }
          sub_10050BE0((float *)(v5 + 204));
          if ( *(_DWORD *)(dword_10698344 + 48) )
          {
            if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 4) + 220))(*(_DWORD *)(v5 + 4)) == 3 )
              goto LABEL_30;
          }
          v17 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 4);
          if ( v17 == 1 )
            goto LABEL_25;
          if ( v17 == 2 )
          {
LABEL_30:
            v15 = (_DWORD *)sub_1026A890(v5 + 20);
            v13 = sub_10019640(v15);
            goto LABEL_31;
          }
          v18 = sub_10055090(dword_106921E0, *(_DWORD *)(v5 + 4));
          if ( v18 )
          {
            v3 = *(_DWORD *)(v18 + 32);
            if ( v3 > 0 )
            {
              v58 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v3);
              v19 = (_DWORD *)sub_1026A890(v5 + 20);
              v20 = (float *)sub_1001F410(v19);
              ++v3;
              v52 = *v20;
              v53 = v20[1];
              v54 = *((_DWORD *)v20 + 2);
              v41 = 360.0 / (double)v3 * (double)v58 + v53;
              v53 = sub_100195E0(v41);
              sub_10422220(&v52, &v46);
              v21 = *(_DWORD **)(v5 + 4);
              *(float *)&v49 = v46 * 128.0;
              v50 = v47 * 128.0;
              v51 = 128.0 * v48;
              v22 = (float *)sub_10019640(v21);
              v23 = v22[1] + v50;
              v16 = v22[2] + v51;
              *(float *)&v55 = *(float *)&v49 + *v22;
              v56 = v23;
              goto LABEL_32;
            }
          }
        }
LABEL_33:
        *(_BYTE *)(v5 + 84) = 0;
        if ( sub_100544E0(v5, v3, (float *)&v55) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v5 + 4) + 880))(
                 *(_DWORD *)(v5 + 4),
                 &v55) )
          {
            goto LABEL_14;
          }
          sub_10078690((int)&v55, 30.0, 0.0);
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 4) + 2076))(*(_DWORD *)(v5 + 4));
        }
        else
        {
          sub_1004BD30(v5, 63, 0.0);
        }
        return;
      case 100002:
        if ( (unsigned __int8)sub_1012B040(0) )
          goto LABEL_47;
        v24 = (float *)sub_1004BF30((_DWORD *)v5);
        v25 = (_DWORD *)sub_1026A890(v5 + 20);
        v26 = (float *)sub_10019640(v25);
        v46 = *v26 - *v24;
        v47 = v26[1] - v24[1];
        v48 = v26[2] - v24[2];
        if ( sub_100D7A40(&v46) < 1.0 )
          goto LABEL_14;
        if ( (unsigned __int8)sub_1007E040(*(_DWORD *)(*(_DWORD *)(v5 + 4) + 2588)) )
        {
          v27 = (float *)sub_1004BF30((_DWORD *)v5);
          *(float *)(v5 + 120) = *v27;
          *(float *)(v5 + 124) = v27[1];
          *(float *)(v5 + 128) = v27[2];
          *(_DWORD *)(v5 + 164) = -1;
          *(float *)(v5 + 160) = -1.0;
        }
        else
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 8))(v5, 11);
        }
        return;
      case 100003:
        if ( !sub_10053910(a1) )
          goto LABEL_47;
        v40 = *(float *)(v5 + 56);
        v8 = sub_1026A890(v5 + 20);
        sub_10043F70((float *)(v5 + 92), v8, v40);
        *(_BYTE *)(v5 + 132) = 0;
        v9 = *(float **)(v5 + 4);
        v9[719] = flt_10689730;
        v9[720] = flt_10689734;
        v9[721] = flt_10689738;
        return;
      case 100004:
        if ( (unsigned __int8)sub_1012B040(0) )
        {
LABEL_47:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 8))(v5, 1);
        }
        else
        {
          v28 = *(_DWORD **)(v5 + 4);
          if ( v28 && *(_DWORD *)(dword_10692124 + 48) )
            sub_10029660(v28, (int)"Follow: TASK_SET_FOLLOW_TARGET_MARK\n");
          v42 = *(float *)(v5 + 56);
          v29 = sub_1026A890(v5 + 20);
          sub_10043F70((float *)(v5 + 92), v29, v42);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 12))(v5, 0);
        }
        return;
      case 100006:
        sub_1001EDC0((float *)(a1 + 144), *(float *)(a3 + 4), 0.0);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 12))(v5, 0);
        return;
      case 100007:
        v43 = (float)(unsigned __int8)sub_100524D0((_DWORD *)a1);
        sub_1004BD30(v5, 31, v43);
        return;
      case 100008:
        goto LABEL_69;
      case 100009:
        if ( !sub_100519F0((_DWORD *)a1) || sub_100524D0((_DWORD *)v5) )
        {
          sub_100457E0(*(_DWORD **)(v5 + 4), 100005);
        }
        else
        {
          v30 = (float *)sub_1004BF30((_DWORD *)v5);
          v31 = (_DWORD *)sub_100519F0((_DWORD *)v5);
          v32 = (float *)sub_10019640(v31);
          v33 = v32[1] - v30[1];
          v34 = v33 * v33;
          v35 = *v32 - *v30;
          v36 = v34;
          v37 = v32[2] - v30[2];
          if ( v35 * v35 + v36 + v37 * v37 >= 256.0 )
          {
            sub_100519F0((_DWORD *)v5);
            sub_10070510(0.0);
            sub_100448D0(*(_DWORD **)(v5 + 4), 0);
            sub_10050BE0((float *)(v5 + 168));
            (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(v5 + 4) + 1312))(
              *(_DWORD *)(v5 + 4),
              "Couldn't get to wait node.");
          }
          else
          {
            sub_100457E0(*(_DWORD **)(v5 + 4), 100008);
          }
        }
        return;
      case 100010:
        if ( !sub_1004FBA0((float *)(a1 + 92)) && sub_10052360(v5) )
        {
          v44 = *(float *)(v5 + 56);
          v38 = sub_1026A890(v5 + 20);
          sub_10043F70((float *)(v5 + 92), v38, v44);
        }
        a1 = v5;
LABEL_69:
        if ( !sub_100519F0((_DWORD *)a1) || sub_100524D0((_DWORD *)v5) )
          goto LABEL_14;
        sub_1004BD30(v5, 67, 0.0);
        return;
      default:
        goto LABEL_12;
    }
  }
  if ( *(_DWORD *)a3 != 100000 )
  {
    if ( v4 == 106 )
    {
      if ( sub_10050FC0((_DWORD *)a1) )
      {
        v50 = flt_10689734;
        v6 = *(_DWORD *)(v5 + 4);
        v51 = flt_10689738;
        *(float *)&v49 = flt_10689730;
        v7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 1948))(v6);
        if ( v7 >= *(float *)(v5 + 68) )
          v7 = *(float *)(v5 + 68);
        else
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 4) + 1948))(*(_DWORD *)(v5 + 4));
        v39 = v7;
        if ( (unsigned __int8)sub_10051350((_DWORD **)v5, v39, (int)&v49) )
        {
          sub_1001EE90(v45, 7, (float *)&v49, 11, -2.0, 0, dword_10603BB4);
          (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(*(_DWORD *)(v5 + 4) + 2588) + 20))(
            *(_DWORD *)(*(_DWORD *)(v5 + 4) + 2588),
            v45,
            0);
          *(float *)(*(_DWORD *)(v5 + 4) + 2560) = *(float *)(dword_106B31C8 + 12) + *(float *)(a3 + 4);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 12))(v5, 0);
        }
        else
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 8))(v5, 8);
        }
        return;
      }
      a1 = v5;
    }
LABEL_12:
    sub_1004B450((_BYTE *)a1, a3);
    return;
  }
  sub_100577F0(a1, 0, 1);
LABEL_14:
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 12))(v5, 0);
}
