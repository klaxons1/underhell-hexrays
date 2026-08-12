void __userpurge sub_1037A490(_DWORD *a1@<ecx>, float *a2@<edi>, int a3)
{
  int v3; // esi
  char v4; // al
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float *v10; // eax
  int (__thiscall *v11)(int); // edx
  _DWORD *v12; // eax
  float *v13; // eax
  int v14; // edi
  int (__thiscall *v15)(int, int *, _DWORD, _DWORD, _DWORD); // edx
  int v16; // eax
  float *v17; // eax
  float *v18; // eax
  int *v19; // eax
  void (__thiscall *v20)(_DWORD *, double *); // edx
  int v21; // ebx
  _DWORD *v22; // eax
  float *v23; // eax
  float *v24; // eax
  double v25; // st7
  _DWORD *v26; // eax
  _DWORD *v27; // eax
  int v28; // eax
  int v29; // edi
  float *v30; // eax
  double v31; // st7
  double v32; // st7
  int v33; // ecx
  int v34; // edi
  int v35; // edx
  int v36; // eax
  float *v37; // edi
  int (__thiscall *v38)(int, int *, _DWORD, _DWORD, _DWORD); // edx
  int v39; // eax
  void (__thiscall *v40)(int, double *); // edx
  float v41; // [esp+24h] [ebp-88h]
  float v42; // [esp+28h] [ebp-84h]
  int v43[14]; // [esp+38h] [ebp-74h] BYREF
  char v44[12]; // [esp+70h] [ebp-3Ch] BYREF
  char v45[12]; // [esp+7Ch] [ebp-30h] BYREF
  char v46[12]; // [esp+88h] [ebp-24h] BYREF
  int v47; // [esp+94h] [ebp-18h] BYREF
  float v48; // [esp+98h] [ebp-14h]
  float v49; // [esp+9Ch] [ebp-10h]
  float v50; // [esp+A0h] [ebp-Ch]
  double v51; // [esp+A4h] [ebp-8h] BYREF
  int savedregs; // [esp+ACh] [ebp+0h] BYREF
  float v53; // [esp+B4h] [ebp+8h]
  float v54; // [esp+B4h] [ebp+8h]
  float v55; // [esp+B4h] [ebp+8h]

  v3 = (int)a1;
  switch ( *(_DWORD *)a3 )
  {
    case 0x18:
      v20 = *(void (__thiscall **)(_DWORD *, double *))(*a1 + 1264);
      *((float *)&v51 + 1) = *(float *)(a3 + 4);
      LODWORD(v51) = 21;
      v20(a1, &v51);
      return;
    case 0x4B:
      if ( !*(_DWORD *)(dword_106E9264 + 48) )
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1) )
        {
          v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
          if ( sub_10370900(v5) )
          {
            v6 = *(_DWORD *)v3;
            v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
            if ( !(*(unsigned __int8 (__thiscall **)(int, int))(v6 + 1484))(v3, v7) )
              (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 1312))(
                v3,
                "No longer hate this StriderBuster");
          }
        }
      }
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
      if ( !sub_10370900(v8) )
        goto LABEL_14;
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
      v10 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v9 + 536))(v9, v46);
      v50 = *v10 * 0.30000001;
      *(float *)&v51 = v10[1] * 0.30000001;
      v11 = *(int (__thiscall **)(int))(*(_DWORD *)v3 + 368);
      *((float *)&v51 + 1) = 0.30000001 * v10[2];
      v12 = (_DWORD *)v11(v3);
      v13 = (float *)sub_10019640(v12);
      v14 = *(_DWORD *)v3;
      v15 = *(int (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 368);
      *(float *)&v47 = v50 + *v13;
      v48 = v13[1] + *(float *)&v51;
      v49 = v13[2] + *((float *)&v51 + 1);
      v16 = v15(v3, &v47, 1.0, 0.80000001, 0.0);
      (*(void (__thiscall **)(int, int))(v14 + 1704))(v3, v16);
      v17 = (float *)sub_10019640((_DWORD *)v3);
      *(float *)&v51 = *(float *)&v47 - *v17;
      *((float *)&v51 + 1) = v48 - v17[1];
      sub_100196B0((float *)&v51);
      v18 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v3 + 904))(v3, v45);
      if ( *v18 * *(float *)&v51 + v18[1] * *((float *)&v51 + 1) < 0.4 )
      {
        sub_10078690(*(_DWORD *)(v3 + 2604), (int)&v47, 0.0, 0.0);
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v3 + 2604) + 76))(*(_DWORD *)(v3 + 2604), -1);
      }
      else
      {
LABEL_14:
        if ( *(float *)(v3 + 4552) <= (double)*(float *)(dword_106B31C8 + 12) )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3)
            && *(int *)(v3 + 4540) > 0
            && ((v19 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3), !sub_10378020(v3, v19, 0))
              ? (*(_DWORD *)(v3 + 4544) = 0)
              : ++*(_DWORD *)(v3 + 4544),
                (--*(_DWORD *)(v3 + 4540), *(int *)(v3 + 4544) < 3) && *(_DWORD *)(v3 + 4540)) )
          {
            *(float *)(v3 + 4552) = *(float *)(dword_106E888C + 44) + *(float *)(dword_106B31C8 + 12);
          }
          else
          {
            sub_10377F20((float *)v3, *(float *)(dword_106E89F4 + 44), *(float *)(dword_106E8A3C + 44), 1);
            sub_10027CD0((_DWORD *)v3, 0);
          }
        }
      }
      return;
    case 0x98:
      sub_10043050(a1, 0, 0);
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 732))(v3);
      goto LABEL_3;
    case 0x99:
    case 0x9D:
      v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 732))(a1);
LABEL_3:
      if ( !v4 )
        return;
      a1 = (_DWORD *)v3;
LABEL_5:
      sub_10027CD0(a1, 0);
      return;
    case 0x9E:
      goto LABEL_5;
    case 0xA0:
      v21 = a1[593];
      if ( v21 == dword_106E84C8 || v21 == dword_106E84C4 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 732))(a1) )
        {
          v54 = *(float *)(dword_106E8EBC + 44);
          v55 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  0.0,
                  2.5)
              + *(float *)(dword_106B31C8 + 12)
              + v54;
          *(float *)(v3 + 4204) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                    dword_106B31E4,
                                    0.0,
                                    2.5)
                                + v55;
          if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 1) )
            v31 = 1.5;
          else
            v31 = 1.0;
          v51 = v31;
          v32 = (((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                   dword_106B31E4,
                   0.0,
                   2.0)
               + 2.0)
              * v31
              + *(float *)(dword_106B31C8 + 12);
          v33 = 0;
          if ( dword_106E95A4 > 0 )
          {
            v34 = dword_106E9598;
            do
            {
              if ( *(_DWORD *)(v34 + 4 * v33) != v3 )
              {
                v35 = *(_DWORD *)(v34 + 4 * v33);
                if ( v32 > *(float *)(v35 + 4204) )
                {
                  *(float *)(v35 + 4204) = v32;
                  v34 = dword_106E9598;
                }
              }
              ++v33;
            }
            while ( v33 < dword_106E95A4 );
          }
          sub_10027CD0((_DWORD *)v3, 0);
        }
        else
        {
          sub_10043050((void *)v3, 0, 0);
        }
      }
      else
      {
        if ( v21 == dword_106E84D0 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 732))(a1) )
          sub_10039F40((int *)v3, dword_106E84CC);
        if ( v21 == dword_106E84CC || v21 == dword_106E84D0 )
        {
          if ( sub_10023D10((_DWORD *)v3, 26) || sub_10023D10((_DWORD *)v3, 11) || sub_10023D10((_DWORD *)v3, 30) )
          {
            sub_10039F40((int *)v3, dword_106E84C8);
            return;
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3) )
          {
            a2 = (float *)sub_10019640((_DWORD *)v3);
            v22 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
            v23 = (float *)sub_10019640(v22);
            *(float *)&v47 = *v23 - *a2;
            v48 = v23[1] - a2[1];
            v49 = v23[2] - a2[2];
            off_10689714();
            v24 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v3 + 904))(v3, v44);
            if ( v24[1] * v48 + *v24 * *(float *)&v47 + v24[2] * v49 < 0.25 )
              sub_10039F40((int *)v3, dword_106E84C8);
          }
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3) )
        {
          a2 = *(float **)v3;
          v26 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
          v27 = sub_10019640(v26);
          v25 = ((double (__thiscall *)(int, _DWORD *))*((_DWORD *)a2 + 424))(v3, v27);
        }
        else
        {
          v25 = *(float *)(*(_DWORD *)(v3 + 2604) + 20);
        }
        v53 = v25;
        sub_10376780(v3, (int)&savedregs, (int)a2, v3);
        v41 = v25 + v53;
        sub_10078210(*(float **)(v3 + 2604), v41, -1.0);
        memset(v43, 0, sizeof(v43));
        v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
        if ( !sub_10043050((void *)v3, v28, (int)v43) )
        {
          if ( sub_10379AB0(v3, v43[1], v43[2], v43[3], v43[7]) )
          {
            if ( v21 == dword_106E84D0 )
            {
              (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 1312))(
                v3,
                "Unable to make initial movement of charge\n");
              return;
            }
            v29 = dword_106E84C8;
            if ( v21 != dword_106E84C8 )
            {
              if ( v43[0] == -2 )
              {
                if ( sub_10018CD0((float *)&v43[4], &flt_106F1CA8) )
                {
                  sub_10039F40((int *)v3, v29);
                  return;
                }
              }
              else if ( v43[0] == -3 )
              {
LABEL_52:
                sub_10039F40((int *)v3, dword_106E84C4);
                return;
              }
              sub_1023C380((_DWORD *)v3, (int)"NPC_Hunter.ChargeHitWorld", 0.0, 0);
              v30 = (float *)sub_10019640((_DWORD *)v3);
              sub_10261B70(v30, 16.0, 4.0, 1.0, 400.0, 0, 0);
              goto LABEL_52;
            }
          }
          else
          {
            if ( !v43[7] )
              return;
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v43[7] + 220))(v43[7]) == 25 )
              goto LABEL_58;
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v43[7] + 220))(v43[7]) != 4 )
              return;
            if ( *(char **)(v43[7] + 92) == "npc_antlionguard" || sub_100D6240((_DWORD *)v43[7], "npc_antlionguard") )
            {
LABEL_58:
              if ( v21 != dword_106E84C8 )
                sub_10039F40((int *)v3, dword_106E84C8);
            }
            else
            {
              v42 = (float)*(int *)(v43[7] + 220);
              sub_10370AF0(v3, (int *)v43[7], v42);
            }
          }
        }
      }
      return;
    case 0xA3:
      if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1) )
      {
        v36 = sub_100217F0((void *)v3);
        v37 = *(float **)v3;
        v47 = *(int *)v36;
        v48 = *(float *)(v36 + 4);
        v38 = (int (__thiscall *)(int, int *, _DWORD, _DWORD, _DWORD))*((_DWORD *)v37 + 92);
        v49 = *(float *)(v36 + 8);
        v39 = v38(v3, &v47, 1.0, 0.80000001, 0.0);
        (*((void (__thiscall **)(int, int))v37 + 426))(v3, v39);
      }
      v40 = *(void (__thiscall **)(int, double *))(*(_DWORD *)v3 + 1264);
      *((float *)&v51 + 1) = *(float *)(a3 + 4);
      LODWORD(v51) = 129;
      v40(v3, &v51);
      return;
    default:
      sub_1001E820(a1, (_DWORD *)a3);
      return;
  }
}
