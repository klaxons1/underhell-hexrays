char sub_1039AC80()
{
  _DWORD *v0; // edi
  const char *v1; // esi
  int v2; // eax
  const char *v3; // esi
  int v4; // eax
  _DWORD *v5; // eax
  const char *v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  const char *v9; // esi
  int v10; // eax
  _DWORD *v11; // eax
  const char *v12; // esi
  int v13; // eax
  _DWORD *v14; // eax
  const char *v15; // esi
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // esi
  int v19; // eax
  _DWORD *v20; // eax
  char result; // al
  int v22; // edi
  int v23; // edi
  char v24; // al
  int v25[5]; // [esp+Ch] [ebp-80h] BYREF
  int v26[5]; // [esp+20h] [ebp-6Ch] BYREF
  int v27[2]; // [esp+34h] [ebp-58h] BYREF
  int v28; // [esp+3Ch] [ebp-50h]
  int v29; // [esp+40h] [ebp-4Ch]
  int v30; // [esp+44h] [ebp-48h]
  int v31[2]; // [esp+48h] [ebp-44h] BYREF
  int v32; // [esp+50h] [ebp-3Ch]
  int v33; // [esp+54h] [ebp-38h]
  int v34; // [esp+58h] [ebp-34h]
  int v35[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v36; // [esp+64h] [ebp-28h]
  int v37; // [esp+68h] [ebp-24h]
  int v38; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v40; // [esp+74h] [ebp-18h]
  int v41; // [esp+78h] [ebp-14h]
  const char *v42; // [esp+7Ch] [ebp-10h]
  void *v43; // [esp+80h] [ebp-Ch]
  const char *v44; // [esp+84h] [ebp-8h] BYREF
  int v45; // [esp+88h] [ebp-4h]

  Src = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  memset(v25, 0, sizeof(v25));
  v35[0] = 0;
  v35[1] = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v27[0] = 0;
  v27[1] = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31[0] = 0;
  v31[1] = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  memset(v26, 0, sizeof(v26));
  dword_106C1B60 = sub_100C7680();
  dword_106C1B64 = sub_100C7680();
  v44 = "COND_PC_HURTBYFIRE";
  v45 = 76;
  sub_10229160(v31, 0, &v44);
  v44 = "COND_PC_SAFE_FROM_MORTAR";
  v45 = 77;
  sub_10229160(v31, v33, &v44);
  v44 = "COND_PC_BECOMING_PASSENGER";
  v45 = 78;
  sub_10229160(v31, v33, &v44);
  v44 = "TASK_PC_WAITOUT_MORTAR";
  v45 = 151;
  sub_10229160(v27, 0, &v44);
  v44 = "TASK_PC_GET_PATH_OFF_COMPANION";
  v45 = 152;
  sub_10229160(v27, v29, &v44);
  dword_106EA258 = sub_1013BF10((int)"AE_COMPANION_PRODUCE_FLARE");
  sub_1006AFD0((int)"AE_COMPANION_PRODUCE_FLARE", dword_106EA258);
  dword_106EA254 = sub_1013BF10((int)"AE_COMPANION_LIGHT_FLARE");
  sub_1006AFD0((int)"AE_COMPANION_LIGHT_FLARE", dword_106EA254);
  dword_106EA250 = sub_1013BF10((int)"AE_COMPANION_RELEASE_FLARE");
  sub_1006AFD0((int)"AE_COMPANION_RELEASE_FLARE", dword_106EA250);
  v44 = "SCHED_PC_MOVE_TOWARDS_COVER_FROM_BEST_SOUND";
  v45 = 92;
  sub_10229160(v35, 0, &v44);
  sub_102ABFC0(&Src, 1);
  v0 = Src;
  v1 = v42 + 1;
  v2 = (int)v42++;
  v43 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v2);
  if ( v0 )
    *v0 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PC_MOVE_TOWARDS_COVER_FROM_BEST_SOUND\tTasks\t\t TASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_FLEE_F"
          "ROM_BEST_SOUND\t\t TASK_STOP_MOVING\t\t\t\t\t0\t\t TASK_SET_TOLERANCE_DISTANCE\t\t24\t\t TASK_STORE_BESTSOUND_"
          "REACTORIGIN_IN_SAVEPOSITION\t0\t\t TASK_FIND_COVER_FROM_BEST_SOUND\t0\t\t TASK_RUN_PATH_TIMED\t\t\t\t1.0\t\t T"
          "ASK_STOP_MOVING\t\t\t\t\t0\t\t TASK_FACE_SAVEPOSITION\t\t\t\t0\t\t TASK_SET_ACTIVITY\t\t\t\t\tACTIVITY:ACT_IDL"
          "E\tInterrupts\t\tCOND_PC_SAFE_FROM_MORTAR\n";
  v44 = "SCHED_PC_TAKE_COVER_FROM_BEST_SOUND";
  v45 = 93;
  sub_10229160(v35, v37, &v44);
  v45 = (int)v1;
  if ( (int)(v1 + 1) > v40 )
  {
    sub_102ABFC0(&Src, (int)&v1[-v40 + 1]);
    v1 = v42;
    v0 = Src;
  }
  v3 = v1 + 1;
  v42 = v3;
  v4 = (int)&v3[-v45 - 1];
  v43 = v0;
  if ( v4 > 0 )
    memcpy(&v0[v45 + 1], &v0[v45], 4 * v4);
  v5 = &v0[v45];
  if ( v5 )
    *v5 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PC_TAKE_COVER_FROM_BEST_SOUND\tTasks\t\t TASK_SET_FAIL_SCHEDULE\t\t\t\t\t\t\t\tSCHEDULE:SCHED_FLEE_F"
          "ROM_BEST_SOUND\t\t TASK_STOP_MOVING\t\t\t\t\t\t\t\t\t0\t\t TASK_SET_TOLERANCE_DISTANCE\t\t\t\t\t\t24\t\t TASK_"
          "STORE_BESTSOUND_REACTORIGIN_IN_SAVEPOSITION\t0\t\t TASK_FIND_COVER_FROM_BEST_SOUND\t\t\t\t\t0\t\t TASK_RUN_PAT"
          "H\t\t\t\t\t\t\t\t\t\t0\t\t TASK_WAIT_FOR_MOVEMENT\t\t\t\t\t\t\t\t0\t\t TASK_STOP_MOVING\t\t\t\t\t\t\t\t\t0\t\t"
          " TASK_FACE_SAVEPOSITION\t\t\t\t\t\t\t\t0\t\t TASK_SET_ACTIVITY\t\t\t\t\t\t\t\t\tACTIVITY:ACT_IDLE\tInterrupts\t"
          "\tCOND_NEW_ENEMY\t\tCOND_PC_SAFE_FROM_MORTAR\n";
  v44 = "SCHED_PC_COWER";
  v45 = 91;
  sub_10229160(v35, v37, &v44);
  v45 = (int)v3;
  if ( (int)(v3 + 1) > v40 )
  {
    sub_102ABFC0(&Src, (int)&v3[-v40 + 1]);
    v3 = v42;
    v0 = Src;
  }
  v6 = v3 + 1;
  v42 = v6;
  v7 = (int)&v6[-v45 - 1];
  v43 = v0;
  if ( v7 > 0 )
    memcpy(&v0[v45 + 1], &v0[v45], 4 * v7);
  v8 = &v0[v45];
  if ( v8 )
    *v8 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_PC_COWER\tTasks\t\tTASK_WAIT_RANDOM\t\t\t0.1\t\tTASK_SET_ACTIVITY\t\t\tACTIVITY:ACT_COWER\t\tTASK_PC"
          "_WAITOUT_MORTAR\t\t0\t\tTASK_WAIT\t\t\t\t\t0.1\t\tTASK_WAIT_RANDOM\t\t\t0.5\tInterrupts\t\t\n";
  v44 = "SCHED_PC_FLEE_FROM_BEST_SOUND";
  v45 = 94;
  sub_10229160(v35, v37, &v44);
  v45 = (int)v6;
  if ( (int)(v6 + 1) > v40 )
  {
    sub_102ABFC0(&Src, (int)&v6[-v40 + 1]);
    v6 = v42;
    v0 = Src;
  }
  v9 = v6 + 1;
  v42 = v9;
  v10 = (int)&v9[-v45 - 1];
  v43 = v0;
  if ( v10 > 0 )
    memcpy(&v0[v45 + 1], &v0[v45], 4 * v10);
  v11 = &v0[v45];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PC_FLEE_FROM_BEST_SOUND\tTasks\t\t TASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_COWER\t\t TASK_GET_"
           "PATH_AWAY_FROM_BEST_SOUND\t600\t\t TASK_RUN_PATH_TIMED\t\t\t\t1.5\t\t TASK_STOP_MOVING\t\t\t\t\t0\t\t TASK_TU"
           "RN_LEFT\t\t\t\t\t\t179\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_PC_SAFE_FROM_MORTAR\n";
  v44 = "SCHED_PC_FAIL_TAKE_COVER_TURRET";
  v45 = 95;
  sub_10229160(v35, v37, &v44);
  v45 = (int)v9;
  if ( (int)(v9 + 1) > v40 )
  {
    sub_102ABFC0(&Src, (int)&v9[-v40 + 1]);
    v9 = v42;
    v0 = Src;
  }
  v12 = v9 + 1;
  v42 = v12;
  v13 = (int)&v12[-v45 - 1];
  v43 = v0;
  if ( v13 > 0 )
    memcpy(&v0[v45 + 1], &v0[v45], 4 * v13);
  v14 = &v0[v45];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PC_FAIL_TAKE_COVER_TURRET\tTasks\t\t TASK_SET_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_COWER\t\t TASK_ST"
           "OP_MOVING\t\t\t\t\t0\t\t TASK_MOVE_AWAY_PATH\t\t\t\t600\t\t TASK_RUN_PATH_FLEE\t\t\t\t\t100\t\t TASK_STOP_MOV"
           "ING\t\t\t\t\t0\t\t TASK_TURN_LEFT\t\t\t\t\t\t179\tInterrupts\t\tCOND_NEW_ENEMY\n";
  v44 = "SCHED_PC_FAKEOUT_MORTAR";
  v45 = 96;
  sub_10229160(v35, v37, &v44);
  v45 = (int)v12;
  if ( (int)(v12 + 1) > v40 )
  {
    sub_102ABFC0(&Src, (int)&v12[-v40 + 1]);
    v12 = v42;
    v0 = Src;
  }
  v15 = v12 + 1;
  v42 = v15;
  v16 = (int)&v15[-v45 - 1];
  v43 = v0;
  if ( v16 > 0 )
    memcpy(&v0[v45 + 1], &v0[v45], 4 * v16);
  v17 = &v0[v45];
  if ( v17 )
    *v17 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PC_FAKEOUT_MORTAR\tTasks\t\tTASK_MOVE_AWAY_PATH\t\t\t\t\t\t300\t\tTASK_RUN_PATH\t\t\t\t\t\t\t0\t\tT"
           "ASK_WAIT_FOR_MOVEMENT\t\t\t\t\t0\tInterrupts\t\tCOND_HEAR_DANGER\n";
  v44 = "SCHED_PC_GET_OFF_COMPANION";
  v45 = 97;
  sub_10229160(v35, v37, &v44);
  v45 = (int)v15;
  if ( (int)(v15 + 1) > v40 )
  {
    sub_102ABFC0(&Src, (int)&v15[-v40 + 1]);
    v15 = v42;
    v0 = Src;
  }
  v18 = (int)(v15 + 1);
  v42 = (const char *)v18;
  v19 = v18 - v45 - 1;
  v43 = v0;
  if ( v19 > 0 )
    memcpy(&v0[v45 + 1], &v0[v45], 4 * v19);
  v20 = &v0[v45];
  if ( v20 )
    *v20 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_PC_GET_OFF_COMPANION\tTasks\t\tTASK_PC_GET_PATH_OFF_COMPANION\t\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t\t"
           "\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t0\tInterrupts\n";
  sub_1004BBC0(&dword_106EA398, (int)"CNPC_PlayerCompanion", (int)dword_10690E5C, (int)&dword_10693928);
  sub_1007DAB0(dword_106EA3E4, (int)dword_1069528C, (int)dword_10693974);
  sub_1004C500((int)v35, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v27, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v31, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v26, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v45 = 0;
  if ( v37 <= 0 )
  {
LABEL_44:
    v45 = 0;
    if ( v29 <= 0 )
    {
LABEL_47:
      v22 = 0;
      if ( v33 <= 0 )
      {
LABEL_65:
        v23 = 0;
        if ( v18 > 0 )
        {
          v24 = byte_106775C8;
          do
          {
            if ( !v24 )
              break;
            v24 = sub_100A7A40(&dword_10694898, "CNPC_PlayerCompanion", *((_DWORD *)Src + v23++), (int)&dword_106EA398);
            byte_106775C8 = v24;
          }
          while ( v23 < v18 );
        }
        sub_102375F0(v26);
        sub_102375F0(v31);
        sub_102375F0(v27);
        sub_102375F0(v35);
        sub_102375F0(v25);
        return sub_102375F0((int *)&Src);
      }
      while ( 1 )
      {
        v45 = *(_DWORD *)(v31[0] + 8 * v22);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          result = sub_1007DB90(
                     dword_106EA3CC,
                     *(_DWORD *)(v31[0] + 8 * v22),
                     *(_DWORD *)(v31[0] + 8 * v22 + 4),
                     "condition",
                     off_106775D0);
          if ( !result )
          {
            if ( v32 >= 0 )
            {
              result = v31[0];
              if ( v31[0] )
                result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
            }
            if ( v28 >= 0 )
            {
              result = v27[0];
              if ( v27[0] )
                result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v27[0]);
            }
            if ( v36 >= 0 )
            {
              result = v35[0];
              if ( v35[0] )
                result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v35[0]);
            }
            if ( v41 >= 0 )
            {
              result = (char)Src;
              if ( Src )
                return (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
            }
            return result;
          }
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v45);
        }
        if ( ++v22 >= v33 )
          goto LABEL_65;
      }
    }
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EA3B4,
                 *(_DWORD *)(v27[0] + 8 * v45),
                 *(_DWORD *)(v27[0] + 8 * v45 + 4),
                 "task",
                 off_106775D0);
      if ( !result )
        break;
      if ( ++v45 >= v29 )
        goto LABEL_47;
    }
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106EA39C,
                 *(_DWORD *)(v35[0] + 8 * v45),
                 *(_DWORD *)(v35[0] + 8 * v45 + 4),
                 "schedule",
                 off_106775D0);
      if ( !result )
        break;
      if ( ++v45 >= v37 )
        goto LABEL_44;
    }
  }
  if ( v32 >= 0 )
  {
    result = v31[0];
    if ( v31[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
  }
  if ( v28 >= 0 )
  {
    result = v27[0];
    if ( v27[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v27[0]);
  }
  if ( v36 >= 0 )
  {
    result = v35[0];
    if ( v35[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v35[0]);
  }
  if ( v41 >= 0 && v0 )
    return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  return result;
}
