void __userpurge sub_1004E060(int a1@<ecx>, float *a2@<edi>, int a3)
{
  unsigned int v4; // eax
  int v5; // edi
  float v6; // ecx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // edi
  float v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // edi
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  float *v22; // eax
  int v23; // eax
  int v24; // edx
  _DWORD *v25; // eax
  float *v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // eax
  bool v30; // al
  char *v31; // eax
  int v32; // eax
  int v33; // [esp+8h] [ebp-78h]
  int v34; // [esp+Ch] [ebp-74h]
  int v35; // [esp+10h] [ebp-70h]
  int v36; // [esp+10h] [ebp-70h]
  _DWORD *v37; // [esp+10h] [ebp-70h]
  float v38[11]; // [esp+20h] [ebp-60h] BYREF
  int v39; // [esp+4Ch] [ebp-34h]
  float v40[11]; // [esp+50h] [ebp-30h] BYREF
  int v41; // [esp+7Ch] [ebp-4h]
  int savedregs; // [esp+80h] [ebp+0h] BYREF

  if ( *(int *)a3 > 100000 )
  {
    switch ( *(_DWORD *)a3 )
    {
      case 0x186A1:
        sub_1004D370(a1);
        v19 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 2604);
        v20 = (_DWORD *)sub_1026A890(a1 + 24);
        goto LABEL_45;
      case 0x186A2:
        v35 = dword_10601DDC;
        v21 = (_DWORD *)sub_1026A890(a1 + 20);
        v22 = (float *)sub_10019640(v21);
        sub_10042450(v38, v22, -1, -1.0, 0, v35);
        v23 = sub_1026A890(a1 + 20);
        v24 = *(_DWORD *)(a1 + 4);
        v39 = v23;
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(v24 + 2588) + 20))(
                *(_DWORD *)(v24 + 2588),
                v38,
                0) )
        {
          v36 = dword_10601DDC;
          v25 = (_DWORD *)sub_1026A890(a1 + 20);
          v26 = (float *)sub_10019640(v25);
          sub_1001EE90(v40, 5, v26, -1, 256.0, 0, v36);
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(*(_DWORD *)(a1 + 4) + 2588) + 20))(
                 *(_DWORD *)(*(_DWORD *)(a1 + 4) + 2588),
                 v40,
                 1) )
          {
            sub_1004C260((char **)a1, 35);
            v27 = (_DWORD *)sub_1026A890(a1 + 20);
            v37 = sub_1001F410(v27);
            sub_1007DF50(v37);
            goto LABEL_24;
          }
        }
        v28 = (_DWORD *)sub_1026A890(a1 + 20);
        v29 = sub_1001F410(v28);
        sub_1007DF50(v29);
        break;
      case 0x186A3:
        sub_1004D370(a1);
        if ( sub_1004C220((_DWORD **)a1, 21) )
          goto LABEL_53;
        v19 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 2604);
        v20 = (_DWORD *)sub_1026A890(a1 + 20);
LABEL_45:
        *(float *)(v19 + 20) = *((float *)sub_1001F410(v20) + 1);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 2076))(*(_DWORD *)(a1 + 4));
        return;
      case 0x186A4:
        sub_1004C7C0(a1);
        goto LABEL_53;
      case 0x186A5:
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 1644))(*(_DWORD *)(a1 + 4), 1000);
        *(_BYTE *)(a1 + 36) = 1;
        v34 = sub_1026A890(a1 + 24);
        v33 = *(_DWORD *)(a1 + 4);
        sub_1026A890(a1 + 24);
        sub_1010DD80(v33, v34, 0.0);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 12))(a1, 0);
        return;
      case 0x186A6:
        v30 = sub_1004C4B0(a1);
        v14 = a1;
        if ( v30 )
          goto LABEL_25;
        if ( !sub_1004CA30(a1) )
        {
          if ( *(_DWORD *)(sub_1026A890(a1 + 24) + 804) )
          {
            v31 = *(char **)(sub_1026A890(a1 + 24) + 804);
            if ( !v31 )
              v31 = (char *)String;
            v32 = sub_100BDF40(v31);
            if ( v32 != -1 )
            {
              sub_100C3330(v32);
              sub_10039F40(*(int **)(a1 + 4), 171);
            }
          }
          else if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4)) )
          {
            sub_1004BD30(a1, 66, 0.0);
          }
        }
        return;
      case 0x186A7:
        v18 = sub_1026A890(a1 + 20);
        sub_10022750(*(float **)(a1 + 4), *(float *)(v18 + 832), 0.0);
        return;
      case 0x186A8:
        if ( sub_1026A890(a1 + 20)
          && (*(_BYTE *)(sub_1026A890(a1 + 20) + 248) & 1) == 0
          && *(_BYTE *)(sub_1026A890(a1 + 20) + 844)
          && !*(_DWORD *)(sub_1026A890(a1 + 20) + 804) )
        {
          goto LABEL_53;
        }
        sub_1004DD00(a1, (int)&savedregs, a2);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 12))(a1, 0);
        return;
      case 0x186A9:
        if ( !sub_1026A890(a1 + 24) )
          goto LABEL_53;
        v17 = sub_1026A890(a1 + 24);
        sub_10022750(*(float **)(a1 + 4), *(float *)(v17 + 808), 0.0);
        return;
      case 0x186AA:
        return;
      case 0x186AB:
        *(float *)(a1 + 44) = *(float *)(dword_106B31C8 + 12) + *(float *)(a3 + 4);
LABEL_53:
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 12))(a1, 0);
        return;
      default:
        goto LABEL_64;
    }
  }
  else if ( *(_DWORD *)a3 == 100000 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 24) & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (*(_DWORD *)(a1 + 24) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    LODWORD(v40[0]) = 4;
    v40[1] = *(float *)(v5 + 580);
    v40[2] = *(float *)(v5 + 584);
    v6 = *(float *)(v5 + 588);
    v40[8] = -1.0;
    v40[9] = -1.0;
    v41 = dword_10601DDC;
    v7 = *(_DWORD *)(a1 + 24);
    v40[3] = v6;
    memset(&v40[4], 255, 16);
    v40[10] = 0.0;
    if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (v7 & 0xFFF) + 1];
    v41 = v8;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 4) + 2588) + 20))(
           *(_DWORD *)(*(_DWORD *)(a1 + 4) + 2588),
           v40,
           0) )
    {
      goto LABEL_26;
    }
    v9 = *(_DWORD *)(a1 + 24);
    if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 24) & 0xFFF) + 2] != v9 >> 12 )
      v10 = 0;
    else
      v10 = off_1061BE18[4 * (*(_DWORD *)(a1 + 24) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
      sub_100DAE60(v10);
    LODWORD(v38[0]) = 5;
    v38[1] = *(float *)(v10 + 580);
    v38[2] = *(float *)(v10 + 584);
    v11 = *(float *)(v10 + 588);
    v38[8] = 256.0;
    v12 = *(_DWORD *)(a1 + 4);
    memset(&v38[4], 255, 16);
    v38[9] = -1.0;
    v39 = dword_10601DDC;
    v38[3] = v11;
    v38[10] = 0.0;
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v12 + 2588) + 20))(
            *(_DWORD *)(v12 + 2588),
            v38,
            1) )
    {
LABEL_26:
      v15 = *(_DWORD *)(a1 + 24);
      if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 24) & 0xFFF) + 2] != v15 >> 12 )
        v16 = 0;
      else
        v16 = off_1061BE18[4 * (*(_DWORD *)(a1 + 24) & 0xFFF) + 1];
      if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
        sub_100DAE60(v16);
      sub_1007DF50(v16 + 704);
    }
    else
    {
      sub_1004C260((char **)a1, 35);
      v13 = sub_1026A890(a1 + 24);
      if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
        sub_100DAE60(v13);
      sub_1007DF50(v13 + 704);
LABEL_24:
      v14 = a1;
LABEL_25:
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 12))(v14, 0);
    }
  }
  else
  {
LABEL_64:
    sub_1004B450((_BYTE *)a1, a3);
  }
}
