void __userpurge sub_10301020(int *a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // ecx
  _DWORD *v5; // ebx
  int v6; // eax
  float v7; // edx
  float *v8; // edi
  float *v9; // eax
  float *v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // edi
  float *v15; // eax
  void (__thiscall *v16)(int *, int); // edx
  char v17; // al
  float *v18; // eax
  double v19; // st7
  bool v20; // cc
  int v21; // edi
  int v22; // eax
  _BYTE *v23; // edi
  void (__thiscall *v24)(_BYTE *, int); // eax
  float v25; // [esp+10h] [ebp-13Ch]
  float v26; // [esp+10h] [ebp-13Ch]
  float v27; // [esp+14h] [ebp-138h]
  float v28; // [esp+18h] [ebp-134h]
  int v29; // [esp+18h] [ebp-134h]
  _BYTE v30[80]; // [esp+28h] [ebp-124h] BYREF
  _BYTE v31[80]; // [esp+78h] [ebp-D4h] BYREF
  float v32[24]; // [esp+C8h] [ebp-84h] BYREF
  _BYTE v33[4]; // [esp+128h] [ebp-24h] BYREF
  float v34; // [esp+12Ch] [ebp-20h]
  float v35[3]; // [esp+134h] [ebp-18h] BYREF
  int v36[2]; // [esp+140h] [ebp-Ch] BYREF
  float v37; // [esp+148h] [ebp-4h]
  int savedregs; // [esp+14Ch] [ebp+0h] BYREF

  v4 = a1[64] & 1;
  if ( v4 )
    *((_BYTE *)a1 + 4127) = 0;
  v5 = (_DWORD *)a3;
  switch ( *(_DWORD *)a3 )
  {
    case 0x9C:
      if ( *(float *)(dword_106B31C8 + 12) > (double)*((float *)a1 + 916) )
        goto LABEL_31;
      return;
    case 0x9D:
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*((float *)a1 + 916) )
      {
        v18 = (float *)sub_10019640(a1);
        if ( sub_102FBCF0(a1, (int)&savedregs, a2, (int)a1, v18) )
        {
          *(float *)&a3 = NAN;
          sub_100332F0(a1 + 62, &a3);
          sub_10023400((unsigned __int16 *)a1, 4);
          sub_10027CD0(a1, 0);
        }
        else
        {
          v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  0.5,
                  1.0)
              + *(float *)(dword_106B31C8 + 12);
          v20 = ++a1[920] < 10;
          *((float *)a1 + 916) = v19;
          if ( !v20 )
          {
            *((_BYTE *)a1 + 4124) = 1;
            a3 = 2;
            sub_100317D0((_BYTE *)a1 + 225, (char *)&a3);
            v21 = *a1;
            a3 = a1[55] + 1;
            v26 = (float)a3;
            v22 = sub_10248110((int)v31, (int)a1, (int)a1, v26, 0, 0);
            (*(void (__thiscall **)(int *, int))(v21 + 256))(a1, v22);
          }
        }
      }
      return;
    case 0x9E:
      v17 = sub_10300C10((int)a1);
      goto LABEL_16;
    case 0x9F:
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*((float *)a1 + 915) && !a1[65] )
        goto LABEL_31;
      return;
    case 0xA2:
      if ( !*((_BYTE *)a1 + 4092) )
      {
        (*(void (__thiscall **)(int *, const char *))(*a1 + 1312))(a1, "No remembered bug bait sound to run to!");
        return;
      }
      sub_10078720(a1[651], (int)(a1 + 1020), -1.0);
      v17 = sub_10021530(a1);
      goto LABEL_16;
    case 0xA3:
      if ( !v4 )
        return;
      v13 = sub_101C5260(a1);
      v14 = (_DWORD *)v13;
      if ( v13 && (sub_100D7680(v13) || (sub_100CFD40(v14) & 0x10) != 0) )
      {
        (*(void (__thiscall **)(_DWORD *, _BYTE *, _DWORD, _DWORD))(*v14 + 528))(v14, v33, 0, 0);
        sub_101C73D0((unsigned int *)a1, 0);
        v15 = (float *)sub_10019640(a1);
        v35[0] = *v15;
        v35[1] = v15[1];
        v35[2] = v15[2] + 1.0;
        sub_1025F370(a1, v35, 0);
        sub_1001F010((float *)v36, -250.0, 250.0);
        v37 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                100.0,
                200.0);
        sub_100DD660((int)a1, (float *)v36);
        v16 = *(void (__thiscall **)(int *, int))(*a1 + 1416);
        a1[593] = 0;
        v16(a1, dword_106E2970);
      }
      else
      {
        v17 = (*(int (__thiscall **)(int *))(*a1 + 732))(a1);
LABEL_16:
        if ( v17 )
LABEL_31:
          sub_10027CD0(a1, 0);
      }
      return;
    case 0xA4:
      return;
    case 0xA6:
      v6 = a1[1010];
      v7 = *((float *)a1 + 1012);
      v36[1] = a1[1011];
      v36[0] = v6;
      v37 = v7;
      off_10689714();
      sub_10422540(v36, v33);
      sub_10078210((float *)a1[651], v34, -2.0);
      (*(void (__thiscall **)(int *))(*a1 + 2076))(a1);
      if ( sub_10078F10(a1[651]) < 2.0 )
        sub_10027CD0(a1, 0);
      return;
    case 0xA7:
      if ( *((float *)a1 + 1030) < (double)*(float *)(dword_106B31C8 + 12) )
      {
        v8 = (float *)(sub_10073730(a1[419]) + 8);
        v28 = *((float *)sub_10019640(a1) + 2) + *v8;
        v27 = *((float *)sub_10019640(a1) + 2);
        v9 = (float *)sub_10019640(a1);
        *(float *)&a3 = sub_10261EE0((int)&savedregs, v9, v27, v28);
        sub_1001F130(v32);
        v32[12] = 0.0;
        v10 = (float *)sub_10019640(a1);
        v32[0] = *v10;
        v32[1] = v10[1];
        v32[2] = *(float *)&a3;
        v32[6] = 0.0;
        v32[7] = 0.0;
        v32[8] = 1.0;
        v32[14] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    12.0,
                    16.0);
        sub_1028E890((int)"watersplash", (int)v32);
        *((float *)a1 + 1030) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                  dword_106B31E4,
                                  0.5,
                                  2.5)
                              + *(float *)(dword_106B31C8 + 12);
      }
      if ( *((float *)a1 + 1029) < (double)*(float *)(dword_106B31C8 + 12) )
      {
        v11 = *a1;
        a3 = a1[55] + 1;
        v25 = (float)a3;
        *((_BYTE *)a1 + 4124) = 1;
        v12 = sub_10248110((int)v30, (int)a1, (int)a1, v25, 0x4000, 0);
        (*(void (__thiscall **)(int *, int))(v11 + 256))(a1, v12);
        sub_10027CD0(a1, 0);
      }
      return;
    default:
      v23 = (_BYTE *)a1[906];
      if ( !v23
        || (v24 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v23 + 112),
            v29 = a3,
            v23[8] = 1,
            v24(v23, v29),
            !v23[8]) )
      {
        sub_100497D0(a1, v5);
      }
      return;
  }
}
