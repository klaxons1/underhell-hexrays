char sub_10386960()
{
  int v0; // edi
  _DWORD *v1; // ebx
  const char *v2; // esi
  int v3; // eax
  const char *v4; // ecx
  const char *v5; // esi
  int v6; // eax
  _DWORD *v7; // eax
  const char *v8; // ecx
  const char *v9; // esi
  int v10; // eax
  _DWORD *v11; // eax
  const char *v12; // ecx
  const char *v13; // esi
  int v14; // eax
  _DWORD *v15; // eax
  const char *v16; // ecx
  const char *v17; // esi
  int v18; // eax
  _DWORD *v19; // eax
  const char *v20; // ecx
  int v21; // esi
  int v22; // eax
  _DWORD *v23; // eax
  char result; // al
  int v25; // edi
  int v26; // edi
  int v27; // ebx
  int v28; // edi
  char v29; // al
  int v30[5]; // [esp+Ch] [ebp-80h] BYREF
  int v31[5]; // [esp+20h] [ebp-6Ch] BYREF
  int v32[2]; // [esp+34h] [ebp-58h] BYREF
  int v33; // [esp+3Ch] [ebp-50h]
  int v34; // [esp+40h] [ebp-4Ch]
  int v35; // [esp+44h] [ebp-48h]
  int v36[2]; // [esp+48h] [ebp-44h] BYREF
  int v37; // [esp+50h] [ebp-3Ch]
  int v38; // [esp+54h] [ebp-38h]
  int v39; // [esp+58h] [ebp-34h]
  int v40[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v41; // [esp+64h] [ebp-28h]
  int v42; // [esp+68h] [ebp-24h]
  int v43; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v45; // [esp+74h] [ebp-18h]
  int v46; // [esp+78h] [ebp-14h]
  const char *v47; // [esp+7Ch] [ebp-10h]
  void *v48; // [esp+80h] [ebp-Ch]
  const char *v49; // [esp+84h] [ebp-8h] BYREF
  int v50; // [esp+88h] [ebp-4h]

  v0 = 0;
  Src = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  memset(v30, 0, sizeof(v30));
  v40[0] = 0;
  v40[1] = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v36[0] = 0;
  v36[1] = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v32[0] = 0;
  v32[1] = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  memset(v31, 0, sizeof(v31));
  v49 = "TASK_MANHACK_HOVER";
  v50 = 150;
  sub_10229160(v36, 0, &v49);
  v49 = "TASK_MANHACK_UNPACK";
  v50 = 151;
  sub_10229160(v36, v38, &v49);
  v49 = "TASK_MANHACK_FIND_SQUAD_CENTER";
  v50 = 152;
  sub_10229160(v36, v38, &v49);
  v49 = "TASK_MANHACK_FIND_SQUAD_MEMBER";
  v50 = 153;
  sub_10229160(v36, v38, &v49);
  v49 = "TASK_MANHACK_MOVEAT_SAVEPOSITION";
  v50 = 154;
  sub_10229160(v36, v38, &v49);
  v49 = "COND_MANHACK_START_ATTACK";
  v50 = 73;
  sub_10229160(v32, 0, &v49);
  dword_106E99F0 = sub_100032E0((int)"ACT_MANHACK_UNPACK");
  sub_10008F60((int)"ACT_MANHACK_UNPACK", dword_106E99F0);
  v49 = "SCHED_MANHACK_ATTACK_HOVER";
  v50 = 88;
  sub_10229160(v40, 0, &v49);
  sub_102ABFC0(&Src, 1);
  v1 = Src;
  v2 = v47 + 1;
  v3 = (int)v47++;
  v48 = Src;
  if ( v3 > 0 )
    memcpy((char *)Src + 4, Src, 4 * v3);
  if ( v1 )
    *v1 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_MANHACK_ATTACK_HOVER\tTasks\t\tTASK_SET_ACTIVITY\t\tACTIVITY:ACT_FLY\t\tTASK_MANHACK_HOVER\t\t0\t\tI"
          "nterrupts\t\tCOND_TOO_FAR_TO_ATTACK\t\tCOND_TOO_CLOSE_TO_ATTACK\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_L"
          "IGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_ENEMY_OCCLUDED\n";
  v49 = "SCHED_MANHACK_DEPLOY";
  v50 = 89;
  sub_10229160(v40, v42, &v49);
  v4 = v2;
  v50 = (int)v2;
  if ( (int)(v2 + 1) > v45 )
  {
    sub_102ABFC0(&Src, (int)&v2[-v45 + 1]);
    v2 = v47;
    v1 = Src;
    v4 = (const char *)v50;
  }
  v5 = v2 + 1;
  v6 = v5 - v4 - 1;
  v47 = v5;
  v48 = v1;
  if ( v6 > 0 )
  {
    memcpy(&v1[(_DWORD)v4 + 1], &v1[(_DWORD)v4], 4 * v6);
    v4 = (const char *)v50;
  }
  v7 = &v1[(_DWORD)v4];
  if ( v7 )
    *v7 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_MANHACK_DEPLOY\tTasks\t\tTASK_PLAY_SEQUENCE\t\t\tACTIVITY:ACT_MANHACK_UNPACK\t\tTASK_SET_ACTIVITY\t\t"
          "\tACTIVITY:ACT_FLY\t\n";
  v49 = "SCHED_MANHACK_REGROUP";
  v50 = 90;
  sub_10229160(v40, v42, &v49);
  v8 = v5;
  v50 = (int)v5;
  if ( (int)(v5 + 1) > v45 )
  {
    sub_102ABFC0(&Src, (int)&v5[-v45 + 1]);
    v5 = v47;
    v1 = Src;
    v8 = (const char *)v50;
  }
  v9 = v5 + 1;
  v10 = v9 - v8 - 1;
  v47 = v9;
  v48 = v1;
  if ( v10 > 0 )
  {
    memcpy(&v1[(_DWORD)v8 + 1], &v1[(_DWORD)v8], 4 * v10);
    v8 = (const char *)v50;
  }
  v11 = &v1[(_DWORD)v8];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_MANHACK_REGROUP\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t0\t\tTASK_SET_TOLERANCE_DISTANCE\t\t\t\t\t2"
           "4\t\tTASK_STORE_ENEMY_POSITION_IN_SAVEPOSITION\t0\t\tTASK_FIND_BACKAWAY_FROM_SAVEPOSITION\t\t0\t\tTASK_RUN_PA"
           "TH\t\t\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t\t0\t\tInterrupts\t\tCOND_MANHACK_START_ATTACK\t\tCOND"
           "_NEW_ENEMY\t\tCOND_CAN_MELEE_ATTACK1\n";
  v49 = "SCHED_MANHACK_SWARM_IDLE";
  v50 = 91;
  sub_10229160(v40, v42, &v49);
  v12 = v9;
  v50 = (int)v9;
  if ( (int)(v9 + 1) > v45 )
  {
    sub_102ABFC0(&Src, (int)&v9[-v45 + 1]);
    v9 = v47;
    v1 = Src;
    v12 = (const char *)v50;
  }
  v13 = v9 + 1;
  v14 = v13 - v12 - 1;
  v47 = v13;
  v48 = v1;
  if ( v14 > 0 )
  {
    memcpy(&v1[(_DWORD)v12 + 1], &v1[(_DWORD)v12], 4 * v14);
    v12 = (const char *)v50;
  }
  v15 = &v1[(_DWORD)v12];
  if ( v15 )
    *v15 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_MANHACK_SWARM_IDLE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t0\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\t\tS"
           "CHEDULE:SCHED_MANHACK_SWARM_FAILURE\t\tTASK_MANHACK_FIND_SQUAD_CENTER\t\t\t\t0\t\tTASK_MANHACK_MOVEAT_SAVEPOS"
           "ITION\t\t\t5\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_SEE_ENEMY\t\tCOND_SEE_FEAR\t\tCOND_LIGHT_DAMAGE\t\tCOND_"
           "HEAVY_DAMAGE\t\tCOND_SMELL\t\tCOND_PROVOKED\t\tCOND_GIVE_WAY\t\tCOND_HEAR_PLAYER\t\tCOND_HEAR_DANGER\t\tCOND_"
           "HEAR_COMBAT\t\tCOND_HEAR_BULLET_IMPACT\n";
  v49 = "SCHED_MANHACK_SWARM";
  v50 = 92;
  sub_10229160(v40, v42, &v49);
  v16 = v13;
  v50 = (int)v13;
  if ( (int)(v13 + 1) > v45 )
  {
    sub_102ABFC0(&Src, (int)&v13[-v45 + 1]);
    v13 = v47;
    v1 = Src;
    v16 = (const char *)v50;
  }
  v17 = v13 + 1;
  v18 = v17 - v16 - 1;
  v47 = v17;
  v48 = v1;
  if ( v18 > 0 )
  {
    memcpy(&v1[(_DWORD)v16 + 1], &v1[(_DWORD)v16], 4 * v18);
    v16 = (const char *)v50;
  }
  v19 = &v1[(_DWORD)v16];
  if ( v19 )
    *v19 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_MANHACK_SWARM\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t0\t\tTASK_SET_FAIL_SCHEDULE\t\t\t\t\t\tSCHEDU"
           "LE:SCHED_MANHACK_SWARM_FAILURE\t\tTASK_MANHACK_FIND_SQUAD_CENTER\t\t\t\t0\t\tTASK_MANHACK_MOVEAT_SAVEPOSITION"
           "\t\t\t1\t\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_CAN_MELEE_ATTACK1\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\n";
  v49 = "SCHED_MANHACK_SWARM_FAILURE";
  v50 = 93;
  sub_10229160(v40, v42, &v49);
  v20 = v17;
  v50 = (int)v17;
  if ( (int)(v17 + 1) > v45 )
  {
    sub_102ABFC0(&Src, (int)&v17[-v45 + 1]);
    v17 = v47;
    v1 = Src;
    v20 = (const char *)v50;
  }
  v21 = (int)(v17 + 1);
  v22 = v21 - (_DWORD)v20 - 1;
  v47 = (const char *)v21;
  v48 = v1;
  if ( v22 > 0 )
  {
    memcpy(&v1[(_DWORD)v20 + 1], &v1[(_DWORD)v20], 4 * v22);
    v20 = (const char *)v50;
  }
  v23 = &v1[(_DWORD)v20];
  if ( v23 )
    *v23 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_MANHACK_SWARM_FAILURE\tTasks\t\tTASK_STOP_MOVING\t\t\t\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t\t\t\t2\t\t"
           "TASK_WAIT_RANDOM\t\t\t\t\t\t\t2\t\tTASK_MANHACK_FIND_SQUAD_MEMBER\t\t\t\t0\t\tTASK_GET_PATH_TO_SAVEPOSITION\t"
           "\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t\t\t0\t\tInterrupts\t\tCOND_SEE_ENEMY\t\tCOND_NEW_ENEMY\n";
  sub_1004BBC0(&dword_106E9B00, (int)"CNPC_Manhack", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E9B4C, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v40, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v36, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v32, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v31, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  if ( v42 <= 0 )
  {
LABEL_38:
    v25 = 0;
    if ( v38 <= 0 )
    {
LABEL_41:
      v26 = 0;
      if ( v34 <= 0 )
      {
LABEL_72:
        v28 = 0;
        if ( v21 > 0 )
        {
          v29 = byte_10675C3C;
          do
          {
            if ( !v29 )
              break;
            v29 = sub_100A7A40(&dword_10694898, "CNPC_Manhack", v1[v28++], (int)&dword_106E9B00);
            byte_10675C3C = v29;
          }
          while ( v28 < v21 );
        }
        sub_102375F0(v31);
        sub_102375F0(v32);
        sub_102375F0(v36);
        sub_102375F0(v40);
        sub_102375F0(v30);
        return sub_102375F0((int *)&Src);
      }
      v27 = v32[0];
      while ( 1 )
      {
        v50 = *(_DWORD *)(v27 + 8 * v26);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          result = sub_1007DB90(
                     dword_106E9B34,
                     *(_DWORD *)(v27 + 8 * v26),
                     *(_DWORD *)(v27 + 8 * v26 + 4),
                     "condition",
                     off_10675C44);
          if ( !result )
          {
            if ( v33 >= 0 && v27 )
              result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v27);
            if ( v37 >= 0 )
            {
              result = v36[0];
              if ( v36[0] )
                result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v36[0]);
            }
            if ( v41 >= 0 )
            {
              result = v40[0];
              if ( v40[0] )
                result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
            }
            if ( v46 >= 0 )
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
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v50);
        }
        if ( ++v26 >= v34 )
        {
          v1 = Src;
          goto LABEL_72;
        }
      }
    }
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E9B1C,
                 *(_DWORD *)(v36[0] + 8 * v25),
                 *(_DWORD *)(v36[0] + 8 * v25 + 4),
                 "task",
                 off_10675C44);
      if ( !result )
        break;
      if ( ++v25 >= v38 )
        goto LABEL_41;
    }
    if ( v33 >= 0 )
    {
      result = v32[0];
      if ( v32[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v32[0]);
    }
    if ( v37 >= 0 )
    {
      result = v36[0];
      if ( v36[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v36[0]);
    }
    if ( v41 >= 0 )
    {
      result = v40[0];
      if ( v40[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
    }
    if ( v46 >= 0 && v1 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E9B04,
                 *(_DWORD *)(v40[0] + 8 * v0),
                 *(_DWORD *)(v40[0] + 8 * v0 + 4),
                 "schedule",
                 off_10675C44);
      if ( !result )
        break;
      if ( ++v0 >= v42 )
        goto LABEL_38;
    }
    if ( v33 >= 0 )
    {
      result = v32[0];
      if ( v32[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v32[0]);
    }
    if ( v37 >= 0 )
    {
      result = v36[0];
      if ( v36[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v36[0]);
    }
    if ( v41 >= 0 )
    {
      result = v40[0];
      if ( v40[0] )
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
    }
    if ( v46 >= 0 && v1 )
      return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
  }
  return result;
}
