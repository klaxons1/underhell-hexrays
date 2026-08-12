void __userpurge sub_10302E90(_BYTE *a1@<ecx>, int a2@<ebx>, float a3)
{
  float v3; // edi
  int v4; // eax
  _BYTE *v5; // esi
  int v6; // eax
  float *v7; // edi
  int *v8; // eax
  int v9; // eax
  int v10; // edi
  double v11; // st7
  int v12; // eax
  int v13; // eax
  double v14; // st7
  int v15; // eax
  double v16; // st7
  double v17; // st7
  int i; // ebx
  char *v19; // edi
  float v20; // eax
  double v21; // st7
  int v22; // edi
  double v23; // st7
  float *v24; // eax
  int v25; // eax
  float *v26; // eax
  float *v27; // eax
  int v28; // [esp+50h] [ebp-D8h]
  _BYTE *v29; // [esp+58h] [ebp-D0h]
  float v30; // [esp+5Ch] [ebp-CCh]
  float v31; // [esp+60h] [ebp-C8h]
  float v32; // [esp+60h] [ebp-C8h]
  _BYTE v33[80]; // [esp+70h] [ebp-B8h] BYREF
  float v34; // [esp+C0h] [ebp-68h]
  float v35; // [esp+C4h] [ebp-64h]
  float v36; // [esp+C8h] [ebp-60h]
  float v37; // [esp+CCh] [ebp-5Ch]
  int v38; // [esp+D0h] [ebp-58h]
  float v39; // [esp+D4h] [ebp-54h]
  float v40; // [esp+D8h] [ebp-50h]
  float v41; // [esp+DCh] [ebp-4Ch] BYREF
  float v42; // [esp+E0h] [ebp-48h]
  float v43; // [esp+E4h] [ebp-44h]
  int v44; // [esp+E8h] [ebp-40h] BYREF
  float v45; // [esp+ECh] [ebp-3Ch]
  float v46; // [esp+F0h] [ebp-38h]
  int v47; // [esp+F4h] [ebp-34h] BYREF
  float v48; // [esp+F8h] [ebp-30h]
  float v49; // [esp+FCh] [ebp-2Ch]
  float v50; // [esp+100h] [ebp-28h] BYREF
  float v51; // [esp+104h] [ebp-24h]
  float v52; // [esp+108h] [ebp-20h]
  int v53; // [esp+10Ch] [ebp-1Ch] BYREF
  float v54; // [esp+110h] [ebp-18h]
  float v55; // [esp+114h] [ebp-14h]
  int v56; // [esp+118h] [ebp-10h] BYREF
  float v57; // [esp+11Ch] [ebp-Ch]
  float v58; // [esp+120h] [ebp-8h]
  float v59; // [esp+124h] [ebp-4h]
  int savedregs; // [esp+128h] [ebp+0h] BYREF

  v3 = a3;
  v4 = *(_DWORD *)LODWORD(a3);
  v5 = a1;
  if ( *(_DWORD *)LODWORD(a3) == dword_106E2994 )
  {
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1) )
    {
      sub_100BF1B0(v5, "mouth", (int)&v44, 0, 0, 0);
      if ( !sub_10023D10(v5, 28) )
        goto LABEL_12;
      v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 368))(v5);
      v7 = (float *)v6;
      if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
        sub_100DAE60(v6);
      if ( (*((_DWORD *)v5 + 63) & 0x800) != 0 )
        sub_100DAE60((int)v5);
      if ( fabs(*((float *)v5 + 146) - v7[146])
         + fabs(*((float *)v5 + 145) - v7[145])
         + fabs(*((float *)v5 + 147) - v7[147]) > 480.0 )
      {
        v8 = (int *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 368))(v5);
        sub_10260A10(a2, (int)v7, v8, 0.5, (float *)&v47);
        v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 368))(v5);
        v10 = v9;
        if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
          sub_100DAE60(v9);
        v11 = *(float *)(v10 + 588);
      }
      else
      {
LABEL_12:
        v12 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 368))(v5);
        v13 = (*(int (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v12 + 520))(v12, &v56, &v44, 1);
        v47 = *(int *)v13;
        v48 = *(float *)(v13 + 4);
        v11 = *(float *)(v13 + 8);
      }
      v49 = v11;
      v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.0,
              32.0);
      v15 = *(_DWORD *)v5;
      v49 = v14 + v49;
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *, int *, int *, float *))(v15 + 2232))(v5, &v44, &v47, &v50)
        && !(*(unsigned __int8 (__thiscall **)(_BYTE *, int *, _BYTE *, float *))(*(_DWORD *)v5 + 2232))(
              v5,
              &v44,
              v5 + 2864,
              &v50) )
      {
        v50 = *((float *)v5 + 922);
        v51 = *((float *)v5 + 923);
        v52 = *((float *)v5 + 924);
      }
      v35 = *(float *)&v47 - *(float *)&v44;
      v36 = v48 - v45;
      v37 = v49 - v46;
      off_10689714();
      a3 = off_10689714();
      v59 = v36 * v51 + v35 * v50 + v37 * v52;
      v31 = (*(float *)&v44 - *(float *)&v47) * (*(float *)&v44 - *(float *)&v47) + (v45 - v48) * (v45 - v48);
      v16 = off_10689708(v31);
      v59 = v16 / (v59 * a3);
      sub_1023D4B0(8, (float *)&v47, 180, v59, (int)v5, 0, 0);
      v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.5,
              2.0);
      v32 = v17 + *(float *)(dword_106B31C8 + 12) + v59;
      sub_10031BA0((int)v5, v32);
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 3) )
        sub_102FAFE0((_DWORD **)v5, v59);
      for ( i = 0; i < 6; ++i )
      {
        v19 = (char *)sub_101811E0("grenade_spit", -1);
        sub_100E0D20((int)v19, (float *)&v44);
        sub_100E0EA0((int)v19, &flt_106F1CB4);
        sub_10260750(v19);
        sub_100F4E50((unsigned int *)v19, (int)v5);
        (*(void (__thiscall **)(char *, _BYTE *))(*(_DWORD *)v19 + 76))(v19, v5);
        if ( i )
        {
          v59 = COERCE_FLOAT(sub_10219A30());
          *(float *)&v38 = (double)SLODWORD(v59) * 0.000030518509 * 0.07 - 0.035;
          v59 = COERCE_FLOAT(sub_10219A30());
          v39 = (double)SLODWORD(v59) * 0.000030518509 * 0.07 - 0.035;
          v59 = COERCE_FLOAT(sub_10219A30());
          *(float *)&v53 = (*(float *)&v38 + v50) * a3;
          v54 = (v39 + v51) * a3;
          v55 = ((double)SLODWORD(v59) * 0.000030518509 * 0.07 - 0.035 + v52) * a3;
          sub_100DD660((int)v19, (float *)&v53);
          v20 = COERCE_FLOAT((*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1));
          sub_102D6AE0((float *)v19, v20);
        }
        else
        {
          sub_102D6AE0((float *)v19, COERCE_FLOAT(2));
          v41 = v50 * a3;
          v42 = v51 * a3;
          v43 = a3 * v52;
          sub_100DD660((int)v19, &v41);
        }
        v59 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -250.0,
                -500.0);
        v34 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -250.0,
                -500.0);
        v21 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -250.0,
                -500.0);
        *(float *)&v56 = v59;
        v57 = v34;
        v58 = v21;
        sub_100D7260((float *)v19, (float *)&v56);
      }
      v22 = 8;
      do
      {
        a3 = COERCE_FLOAT(sub_10219A30());
        *(float *)&v56 = (double)SLODWORD(a3) * 0.000030518509 * 360.0;
        a3 = COERCE_FLOAT(sub_10219A30());
        v57 = (double)SLODWORD(a3) * 0.000030518509 * 360.0;
        a3 = COERCE_FLOAT(sub_10219A30());
        v38 = v56;
        v39 = v57;
        v40 = (double)SLODWORD(a3) * 0.000030518509 * 360.0;
        a3 = COERCE_FLOAT(sub_10219A30());
        *(float *)&v53 = (double)SLODWORD(a3) * 0.000030518509 * 24.0 - 12.0;
        a3 = COERCE_FLOAT(sub_10219A30());
        v54 = (double)SLODWORD(a3) * 0.000030518509 * 24.0 - 12.0;
        a3 = COERCE_FLOAT(sub_10219A30());
        v41 = *(float *)&v53 + *(float *)&v44;
        v42 = v54 + v45;
        v43 = (double)SLODWORD(a3) * 0.000030518509 * 24.0 - 12.0 + v46;
        sub_101AB000("blood_impact_yellow_01", v41, v42, v43, *(float *)&v38, v39, v40, 0);
        --v22;
      }
      while ( v22 );
      sub_1023C380(v5, (int)"NPC_Antlion.PoisonShoot", 0.0, 0);
    }
    return;
  }
  if ( v4 == dword_106E2990 )
  {
    a1[4124] = 1;
    return;
  }
  if ( v4 == dword_106E29D8 )
  {
    (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)a1 + 1652))(a1, 240.0, 0.5);
    sub_1023C480(v5, (int)"NPC_Antlion.Footstep", (int)(v5 + 4156), *(float *)(LODWORD(v3) + 12), 0);
    return;
  }
  if ( v4 == dword_106E29D4 )
  {
    *(float *)&v56 = -250.0;
    v57 = 1.0;
    v58 = 1.0;
    *(float *)&v53 = 20.0;
    v54 = 0.0;
    v23 = -12.0;
LABEL_32:
    v55 = v23;
    sub_102FD170((float *)a1, 100.0, *(float *)(dword_106E2A94 + 44), (float *)&v53, (float *)&v56);
    return;
  }
  if ( v4 == dword_106E29D0 )
  {
    *(float *)&v56 = -350.0;
    v57 = 1.0;
    v58 = 1.0;
    *(float *)&v53 = 20.0;
    v23 = 0.0;
    v54 = 0.0;
    goto LABEL_32;
  }
  if ( v4 == dword_106E29CC )
  {
    *(float *)&v56 = -250.0;
    v57 = 1.0;
    v58 = 1.0;
    *(float *)&v53 = 4.0;
    v54 = 0.0;
    v55 = 0.0;
    sub_102FD170((float *)a1, 64.0, *(float *)(dword_106E2A94 + 44), (float *)&v53, (float *)&v56);
    return;
  }
  if ( v4 == dword_106E29B0 )
  {
    sub_102FBE20((int)a1, SLODWORD(a3), 1);
    return;
  }
  if ( v4 == dword_106E29AC )
  {
    if ( !a1[4094] )
      return;
    goto LABEL_41;
  }
  if ( v4 == dword_106E29B4 )
  {
    sub_10023430((unsigned __int16 *)a1, 4);
    a3 = 0.0;
    sub_100317D0(v5 + 225, (char *)&a3);
    sub_100EAB80(v5, 32);
    if ( !v5[4094] )
      return;
    a1 = v5;
LABEL_41:
    v5[4094] = 0;
    sub_1023B860(a1, (int)"NPC_Antlion.WingsOpen");
    sub_100C1600((int)v5, 1, 0);
    return;
  }
  if ( v4 == dword_106E29BC )
  {
    sub_1023C380(a1, (int)"NPC_Antlion.BurrowIn", 0.0, 0);
    v24 = (float *)sub_10019640(v5);
    sub_10261B70(v24, 0.5, 80.0, 1.0, 256.0, 0, 0);
    sub_102FE8B0((int)v5, (int)&savedregs, (int)v5, 1);
    if ( sub_1002A5B0(v5) )
    {
      v25 = sub_1002A5B0(v5);
      sub_10070510(v25, 2.0);
    }
  }
  else if ( v4 == dword_106E29B8 )
  {
    sub_1023C380(a1, (int)"NPC_Antlion.BurrowOut", 0.0, 0);
    v26 = (float *)sub_10019640(v5);
    sub_10261B70(v26, 0.5, 80.0, 1.0, 256.0, 0, 0);
    sub_102FE8B0((int)v5, (int)&savedregs, (int)v5, 1);
    sub_10035360((int *)v5, 32);
    sub_100EA9A0((int *)v5, 0x8000);
  }
  else if ( v4 == dword_106E29C8 )
  {
    sub_1023C380(a1, (int)"NPC_Antlion.FootstepSoft", *(float *)(LODWORD(a3) + 12), 0);
  }
  else if ( v4 == dword_106E29C4 )
  {
    sub_1023C380(a1, (int)"NPC_Antlion.FootstepHeavy", *(float *)(LODWORD(a3) + 12), 0);
  }
  else if ( v4 == dword_106E29A8 )
  {
    sub_1023C380(a1, (int)"NPC_Antlion.MeleeAttackSingle", 0.0, 0);
  }
  else if ( v4 == dword_106E29A4 )
  {
    sub_1023C380(a1, (int)"NPC_Antlion.MeleeAttackDouble", 0.0, 0);
  }
  else if ( v4 == dword_106E29C0 )
  {
    sub_102FE510((int)a1);
  }
  else if ( v4 == dword_106E29A0 )
  {
    v30 = 0.0;
    if ( a1[447] >= 2u )
      sub_1023C380(a1, (int)"NPC_Antlion.PoisonBurstScreamSubmerged", v30, 0);
    else
      sub_1023C380(a1, (int)"NPC_Antlion.PoisonBurstScream", v30, 0);
  }
  else if ( v4 == dword_106E299C )
  {
    v29 = a1;
    v28 = (int)*(float *)(dword_106E2C44 + 44);
    v27 = (float *)sub_10019640(a1);
    sub_1023D4B0(1024, v27, v28, 0.5, (int)v29, 0, 0);
  }
  else if ( v4 == dword_106E2998 )
  {
    sub_10248110((int)v33, (int)a1, (int)a1, *(float *)(dword_106E2B6C + 44), 134348800, 0);
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v5 + 1048))(v5, v33);
  }
  else
  {
    sub_103329F0(LODWORD(a3));
  }
}
