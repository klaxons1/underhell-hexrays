char __thiscall sub_100F1980(_DWORD *this, int a2, int a3, int a4)
{
  unsigned int v4; // eax
  int v5; // ebx
  int *v8; // esi
  int *v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // eax
  double v13; // st7
  float *v14; // edi
  float *v15; // eax
  double v16; // st7
  double v17; // st7
  double v18; // st7
  int v19; // edi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // edi
  float *v24; // eax
  int *v25; // eax
  char *v26; // eax
  int v27; // edi
  float *v28; // ebx
  float *v29; // eax
  double v30; // st7
  int v31; // eax
  _DWORD *v32; // ecx
  int v33; // ebx
  int v34; // edi
  float *v35; // eax
  char *v36; // eax
  char *v37; // [esp+18h] [ebp-90h]
  char *v38; // [esp+18h] [ebp-90h]
  float v39; // [esp+24h] [ebp-84h]
  float v40; // [esp+2Ch] [ebp-7Ch]
  int v41[12]; // [esp+3Ch] [ebp-6Ch] BYREF
  int v42[3]; // [esp+6Ch] [ebp-3Ch] BYREF
  int v43; // [esp+78h] [ebp-30h] BYREF
  float v44; // [esp+7Ch] [ebp-2Ch]
  float v45; // [esp+80h] [ebp-28h]
  int v46; // [esp+84h] [ebp-24h] BYREF
  float v47; // [esp+88h] [ebp-20h]
  float v48; // [esp+8Ch] [ebp-1Ch]
  int v49; // [esp+90h] [ebp-18h] BYREF
  double v50; // [esp+94h] [ebp-14h]
  int v51; // [esp+9Ch] [ebp-Ch]
  float v52; // [esp+A0h] [ebp-8h]
  _DWORD *v53; // [esp+A4h] [ebp-4h]
  int savedregs; // [esp+A8h] [ebp+0h] BYREF
  int v55; // [esp+B0h] [ebp+8h]
  float v56; // [esp+B4h] [ebp+Ch]
  float v57; // [esp+B4h] [ebp+Ch]

  v4 = *(_DWORD *)(a2 + 36);
  v5 = a2 + 36;
  v53 = this;
  if ( v4 == -1 || off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 || !off_1061BE18[4 * (v4 & 0xFFF) + 1] )
    return 0;
  v8 = (int *)sub_100D7680((int)this);
  if ( !v8 || !sub_100EFD10(this, a3, a4, 1) )
    return 0;
  if ( !(unsigned __int8)sub_1012B040(this) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v8 + 1088))(v8) )
    {
      (*(void (__thiscall **)(int *))(*v8 + 1100))(v8);
      return 0;
    }
    v9 = (int *)sub_10043EC0(v8);
    if ( *(_BYTE *)(a2 + 40) || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v53 + 296))(v53) && *v9 != 124 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v53 + 296))(v53) )
      {
        *(_BYTE *)(a2 + 40) = 0;
        goto LABEL_41;
      }
      v27 = sub_1026A890(v5);
      v28 = (float *)sub_10019640(v53);
      v29 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v27 + 504))(v27, v42);
      *(float *)&v43 = *v29 - *v28;
      v44 = v29[1] - v28[1];
      v30 = v29[2] - v28[2];
      v45 = v30;
      sub_10018D40((float *)&v43);
      v57 = v30;
      if ( sub_10418680(a4) < v57 )
      {
LABEL_41:
        if ( *(int *)(dword_106CE684 + 48) > 0
          && *(_DWORD *)(dword_10698AA4 + 48)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v53 + 296))(v53) )
        {
          v31 = sub_1007DD50((_DWORD *)v8[647]);
          v43 = *(int *)v31;
          v32 = (_DWORD *)v8[650];
          v44 = *(float *)(v31 + 4);
          v45 = *(float *)(v31 + 8);
          sub_1007A2B0(v32, (float *)&v43, 33701899, 0.0, -64.0, (float *)&v49);
          v33 = 0;
          v34 = 0;
          v55 = 0;
          if ( sub_1007EA60(v8[647], (int)&savedregs, 0, (int)v8, (float *)&v49, 33701899, 0, 1) )
          {
            if ( sub_1007A470(v8[650], (float *)&v49, 33701899) )
            {
              if ( !(unsigned __int8)sub_10418660(a4) )
                v33 = 255;
              v34 = 255;
            }
            else
            {
              v34 = 255;
              v55 = 255;
            }
          }
          else
          {
            v33 = 255;
          }
          v46 = v49;
          v47 = *(float *)&v50;
          v48 = *((float *)&v50 + 1) + 1.0;
          v35 = (float *)sub_10019640(v53);
          v42[0] = *(int *)v35;
          v42[1] = *((int *)v35 + 1);
          *(float *)&v42[2] = v35[2] + 1.0;
          sub_1011C3A0((int)v42, (int)&v46, 4.0, v33, v34, v55, 0, 0, 0.12);
          v38 = sub_10073730(v8[419]);
          v36 = sub_10073710(v8[419]);
          sub_1011BB20((int)&v49, (int)v36, (int)v38, v33, v34, v55, 0, 0.12);
        }
        return 1;
      }
      sub_10082A70((float *)v8[647], 0);
    }
    else
    {
      if ( !v9 )
        goto LABEL_41;
      v10 = *v9;
      if ( v10 != 121 && v10 != 129 && v10 != 124 )
        goto LABEL_41;
      v11 = sub_100ECC30((int)v8);
      v51 = v11;
      v12 = sub_1026A890(v5);
      sub_100218B0(v8, v12);
      v13 = sub_100737B0(v8[419]) * 0.5;
      v56 = v13;
      if ( (*(_BYTE *)(a4 + 377) & 8) != 0 )
      {
        v13 = 0.1;
        v56 = 0.1;
      }
      v39 = v13;
      sub_10042370(v41, 1, v11, v39, 2, dword_106116C0);
      v52 = COERCE_FLOAT(sub_1026A890(v5));
      v14 = (float *)sub_10019640(v53);
      v15 = (float *)(*(int (__thiscall **)(float, int *))(*(_DWORD *)LODWORD(v52) + 504))(
                       COERCE_FLOAT(LODWORD(v52)),
                       v42);
      *(float *)&v49 = *v15 - *v14;
      *(float *)&v50 = v15[1] - v14[1];
      v16 = v15[2] - v14[2];
      *((float *)&v50 + 1) = v16;
      sub_10018D40((float *)&v49);
      v52 = v16;
      if ( v56 <= 0.1 )
        v50 = 0.1;
      else
        v50 = v56;
      v17 = sub_10418680(a4);
      if ( v17 >= v50 )
      {
        v18 = sub_10418680(a4);
      }
      else
      {
        v18 = v56;
        if ( v56 <= 0.1 )
          v18 = 0.1;
      }
      if ( v52 > v18 )
      {
        v19 = *v8;
        v20 = sub_1026A890(v5);
        if ( (*(unsigned __int8 (__thiscall **)(int *, int))(v19 + 1768))(v8, v20) )
        {
LABEL_32:
          if ( *(int *)(dword_106CE684 + 48) > 0 && *(_DWORD *)(dword_10698AA4 + 48) )
          {
            v22 = sub_1026A890(v5);
            v23 = (_DWORD *)v8[650];
            v24 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v22 + 504))(v22, v42);
            sub_1007A2B0(v23, v24, 33701899, 0.0, -64.0, (float *)&v49);
            v46 = v49;
            v47 = *(float *)&v50;
            v48 = *((float *)&v50 + 1) + 1.0;
            v25 = sub_10019640(v53);
            v43 = *v25;
            v44 = *((float *)v25 + 1);
            v45 = *((float *)v25 + 2) + 1.0;
            sub_1011C3A0((int)&v43, (int)&v46, 4.0, 255, 0, 255, 0, 0, 0.12);
            v37 = sub_10073730(v8[419]);
            v26 = sub_10073710(v8[419]);
            sub_1011BB20((int)&v49, (int)v26, (int)v37, 255, 0, 255, 0, 0.12);
          }
          goto LABEL_41;
        }
        if ( !(*(unsigned __int8 (__thiscall **)(int, int *, int))(*(_DWORD *)v8[647] + 20))(v8[647], v41, 2) )
        {
          v21 = sub_1026A890(v5);
          sub_1003ABB0(v8, v21, 1.5);
          goto LABEL_32;
        }
        sub_1007DD70(v51);
        v40 = sub_10418680(a4);
        sub_1007DFB0(v40);
        *(_BYTE *)(a2 + 40) = 1;
        goto LABEL_41;
      }
    }
    *(_BYTE *)(a2 + 41) = 1;
    goto LABEL_41;
  }
  return 1;
}
