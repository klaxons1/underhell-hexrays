char sub_103686C0()
{
  _DWORD *v0; // edi
  const char *v1; // esi
  int v2; // eax
  const char *v3; // ecx
  const char *v4; // esi
  int v5; // eax
  _DWORD *v6; // eax
  const char *v7; // ecx
  const char *v8; // esi
  int v9; // eax
  _DWORD *v10; // eax
  const char *v11; // ecx
  const char *v12; // esi
  int v13; // eax
  _DWORD *v14; // eax
  const char *v15; // ecx
  int v16; // esi
  int v17; // eax
  _DWORD *v18; // eax
  int v19; // ecx
  int v20; // ecx
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
  v31[0] = 0;
  v31[1] = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
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
  memset(v26, 0, sizeof(v26));
  dword_106E7F34 = sub_100032E0((int)"ACT_FASTZOMBIE_LEAP_SOAR");
  sub_10008F60((int)"ACT_FASTZOMBIE_LEAP_SOAR", dword_106E7F34);
  dword_106E7F30 = sub_100032E0((int)"ACT_FASTZOMBIE_LEAP_STRIKE");
  sub_10008F60((int)"ACT_FASTZOMBIE_LEAP_STRIKE", dword_106E7F30);
  dword_106E7F2C = sub_100032E0((int)"ACT_FASTZOMBIE_LAND_RIGHT");
  sub_10008F60((int)"ACT_FASTZOMBIE_LAND_RIGHT", dword_106E7F2C);
  dword_106E7F28 = sub_100032E0((int)"ACT_FASTZOMBIE_LAND_LEFT");
  sub_10008F60((int)"ACT_FASTZOMBIE_LAND_LEFT", dword_106E7F28);
  dword_106E7F24 = sub_100032E0((int)"ACT_FASTZOMBIE_FRENZY");
  sub_10008F60((int)"ACT_FASTZOMBIE_FRENZY", dword_106E7F24);
  dword_106E7F20 = sub_100032E0((int)"ACT_FASTZOMBIE_BIG_SLASH");
  sub_10008F60((int)"ACT_FASTZOMBIE_BIG_SLASH", dword_106E7F20);
  v44 = "TASK_FASTZOMBIE_DO_ATTACK";
  v45 = 250;
  sub_10229160(v35, 0, &v44);
  v44 = "TASK_FASTZOMBIE_LAND_RECOVER";
  v45 = 251;
  sub_10229160(v35, v37, &v44);
  v44 = "TASK_FASTZOMBIE_UNSTICK_JUMP";
  v45 = 252;
  sub_10229160(v35, v37, &v44);
  v44 = "TASK_FASTZOMBIE_JUMP_BACK";
  v45 = 253;
  sub_10229160(v35, v37, &v44);
  v44 = "TASK_FASTZOMBIE_VERIFY_ATTACK";
  v45 = 254;
  sub_10229160(v35, v37, &v44);
  v44 = "COND_FASTZOMBIE_CLIMB_TOUCH";
  v45 = 76;
  sub_10229160(v27, 0, &v44);
  dword_106E7F48 = sub_1013BF10((int)"AE_FASTZOMBIE_LEAP");
  sub_1006AFD0((int)"AE_FASTZOMBIE_LEAP", dword_106E7F48);
  dword_106E7F44 = sub_1013BF10((int)"AE_FASTZOMBIE_GALLOP_LEFT");
  sub_1006AFD0((int)"AE_FASTZOMBIE_GALLOP_LEFT", dword_106E7F44);
  dword_106E7F40 = sub_1013BF10((int)"AE_FASTZOMBIE_GALLOP_RIGHT");
  sub_1006AFD0((int)"AE_FASTZOMBIE_GALLOP_RIGHT", dword_106E7F40);
  dword_106E7F3C = sub_1013BF10((int)"AE_FASTZOMBIE_CLIMB_LEFT");
  sub_1006AFD0((int)"AE_FASTZOMBIE_CLIMB_LEFT", dword_106E7F3C);
  dword_106E7F38 = sub_1013BF10((int)"AE_FASTZOMBIE_CLIMB_RIGHT");
  sub_1006AFD0((int)"AE_FASTZOMBIE_CLIMB_RIGHT", dword_106E7F38);
  dword_106E7F54 = sub_1013BF10((int)"AE_PASSENGER_PHYSICS_PUSH");
  sub_1006AFD0((int)"AE_PASSENGER_PHYSICS_PUSH", dword_106E7F54);
  dword_106E7F50 = sub_1013BF10((int)"AE_FASTZOMBIE_VEHICLE_LEAP");
  sub_1006AFD0((int)"AE_FASTZOMBIE_VEHICLE_LEAP", dword_106E7F50);
  dword_106E7F4C = sub_1013BF10((int)"AE_FASTZOMBIE_VEHICLE_SS_DIE");
  sub_1006AFD0((int)"AE_FASTZOMBIE_VEHICLE_SS_DIE", dword_106E7F4C);
  v44 = "SCHED_FASTZOMBIE_RANGE_ATTACK1";
  v45 = 188;
  sub_10229160(v31, 0, &v44);
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
          "\t\tSCHED_FASTZOMBIE_RANGE_ATTACK1\tTasks\t\tTASK_PLAY_SEQUENCE\t\t\t\tACTIVITY:ACT_RANGE_ATTACK1\t\tTASK_SET_"
          "ACTIVITY\t\t\t\tACTIVITY:ACT_FASTZOMBIE_LEAP_STRIKE\t\tTASK_RANGE_ATTACK1\t\t\t\t0\t\tTASK_WAIT\t\t\t\t\t\t0.1"
          "\t\tTASK_FASTZOMBIE_LAND_RECOVER\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tInterrupts\n";
  v44 = "SCHED_FASTZOMBIE_UNSTICK_JUMP";
  v45 = 189;
  sub_10229160(v31, v33, &v44);
  v3 = v1;
  v45 = (int)v1;
  if ( (int)(v1 + 1) > v40 )
  {
    sub_102ABFC0(&Src, (int)&v1[-v40 + 1]);
    v1 = v42;
    v0 = Src;
    v3 = (const char *)v45;
  }
  v4 = v1 + 1;
  v5 = v4 - v3 - 1;
  v42 = v4;
  v43 = v0;
  if ( v5 > 0 )
  {
    memcpy(&v0[(_DWORD)v3 + 1], &v0[(_DWORD)v3], 4 * v5);
    v3 = (const char *)v45;
  }
  v6 = &v0[(_DWORD)v3];
  if ( v6 )
    *v6 = "\n\tSchedule\n\t\tSCHED_FASTZOMBIE_UNSTICK_JUMP\tTasks\t\tTASK_FASTZOMBIE_UNSTICK_JUMP\t0\t\tInterrupts\n";
  v44 = "SCHED_FASTZOMBIE_CLIMBING_UNSTICK_JUMP";
  v45 = 190;
  sub_10229160(v31, v33, &v44);
  v7 = v4;
  v45 = (int)v4;
  if ( (int)(v4 + 1) > v40 )
  {
    sub_102ABFC0(&Src, (int)&v4[-v40 + 1]);
    v4 = v42;
    v0 = Src;
    v7 = (const char *)v45;
  }
  v8 = v4 + 1;
  v9 = v8 - v7 - 1;
  v42 = v8;
  v43 = v0;
  if ( v9 > 0 )
  {
    memcpy(&v0[(_DWORD)v7 + 1], &v0[(_DWORD)v7], 4 * v9);
    v7 = (const char *)v45;
  }
  v10 = &v0[(_DWORD)v7];
  if ( v10 )
    *v10 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_FASTZOMBIE_CLIMBING_UNSTICK_JUMP\tTasks\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_FASTZ"
           "OMBIE_UNSTICK_JUMP\t0\t\tInterrupts\n";
  v44 = "SCHED_FASTZOMBIE_MELEE_ATTACK1";
  v45 = 191;
  sub_10229160(v31, v33, &v44);
  v11 = v8;
  v45 = (int)v8;
  if ( (int)(v8 + 1) > v40 )
  {
    sub_102ABFC0(&Src, (int)&v8[-v40 + 1]);
    v8 = v42;
    v0 = Src;
    v11 = (const char *)v45;
  }
  v12 = v8 + 1;
  v13 = v12 - v11 - 1;
  v42 = v12;
  v43 = v0;
  if ( v13 > 0 )
  {
    memcpy(&v0[(_DWORD)v11 + 1], &v0[(_DWORD)v11], 4 * v13);
    v11 = (const char *)v45;
  }
  v14 = &v0[(_DWORD)v11];
  if ( v14 )
    *v14 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_FASTZOMBIE_MELEE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\tTASK_"
           "MELEE_ATTACK1\t\t\t\t0\t\tTASK_MELEE_ATTACK1\t\t\t\t0\t\tTASK_PLAY_SEQUENCE\t\t\t\tACTIVITY:ACT_FASTZOMBIE_FR"
           "ENZY\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_CHASE_ENEMY\t\tTASK_FASTZOMBIE_VERIFY_ATTACK\t0\t\tTASK_PL"
           "AY_SEQUENCE_FACE_ENEMY\tACTIVITY:ACT_FASTZOMBIE_BIG_SLASH\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\t"
           "COND_ENEMY_OCCLUDED\n";
  v44 = "SCHED_FASTZOMBIE_TORSO_MELEE_ATTACK1";
  v45 = 192;
  sub_10229160(v31, v33, &v44);
  v15 = v12;
  v45 = (int)v12;
  if ( (int)(v12 + 1) > v40 )
  {
    sub_102ABFC0(&Src, (int)&v12[-v40 + 1]);
    v12 = v42;
    v0 = Src;
    v15 = (const char *)v45;
  }
  v16 = (int)(v12 + 1);
  v17 = v16 - (_DWORD)v15 - 1;
  v42 = (const char *)v16;
  v43 = v0;
  if ( v17 > 0 )
  {
    memcpy(&v0[(_DWORD)v15 + 1], &v0[(_DWORD)v15], 4 * v17);
    v15 = (const char *)v45;
  }
  v18 = &v0[(_DWORD)v15];
  if ( v18 )
    *v18 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_FASTZOMBIE_TORSO_MELEE_ATTACK1\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_FACE_ENEMY\t\t\t\t\t0\t\t"
           "TASK_MELEE_ATTACK1\t\t\t\t0\t\tTASK_MELEE_ATTACK1\t\t\t\t0\t\tTASK_SET_FAIL_SCHEDULE\t\t\tSCHEDULE:SCHED_CHAS"
           "E_ENEMY\t\tTASK_FASTZOMBIE_VERIFY_ATTACK\t0\tInterrupts\t\tCOND_NEW_ENEMY\t\tCOND_ENEMY_DEAD\t\tCOND_ENEMY_OCCLUDED\n";
  sub_1004BBC0(&dword_106E7F60, (int)"CFastZombie", (int)dword_10690E5C, (int)&dword_106E5A40);
  sub_1007DAB0(dword_106E7FAC, (int)dword_1069528C, (int)dword_106E5A8C);
  sub_1004C500((int)v31, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v35, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v27, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v26, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v19 = 0;
  v45 = 0;
  if ( v33 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E7F64,
                 *(_DWORD *)(v31[0] + 8 * v19),
                 *(_DWORD *)(v31[0] + 8 * v19 + 4),
                 "schedule",
                 off_106734A4);
      if ( !result )
        break;
      if ( ++v45 >= v33 )
        goto LABEL_30;
      v19 = v45;
    }
  }
  else
  {
LABEL_30:
    v20 = 0;
    v45 = 0;
    if ( v37 <= 0 )
    {
LABEL_52:
      v22 = 0;
      if ( v29 <= 0 )
      {
LABEL_57:
        v23 = 0;
        if ( v16 > 0 )
        {
          v24 = byte_1067349C;
          do
          {
            if ( !v24 )
              break;
            v24 = sub_100A7A40(&dword_10694898, "CFastZombie", *((_DWORD *)Src + v23++), (int)&dword_106E7F60);
            byte_1067349C = v24;
          }
          while ( v23 < v16 );
        }
        sub_102375F0(v26);
        sub_102375F0(v27);
        sub_102375F0(v35);
        sub_102375F0(v31);
        sub_102375F0(v25);
        return sub_102375F0((int *)&Src);
      }
      while ( 1 )
      {
        v45 = *(_DWORD *)(v27[0] + 8 * v22);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          result = sub_1007DB90(
                     dword_106E7F94,
                     *(_DWORD *)(v27[0] + 8 * v22),
                     *(_DWORD *)(v27[0] + 8 * v22 + 4),
                     "condition",
                     off_106734A4);
          if ( !result )
          {
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
            if ( v32 >= 0 )
            {
              result = v31[0];
              if ( v31[0] )
                result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
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
        if ( ++v22 >= v29 )
          goto LABEL_57;
      }
    }
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E7F7C,
                 *(_DWORD *)(v35[0] + 8 * v20),
                 *(_DWORD *)(v35[0] + 8 * v20 + 4),
                 "task",
                 off_106734A4);
      if ( !result )
        break;
      if ( ++v45 >= v37 )
        goto LABEL_52;
      v20 = v45;
    }
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
  if ( v32 >= 0 )
  {
    result = v31[0];
    if ( v31[0] )
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
  }
  if ( v41 >= 0 && v0 )
    return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  return result;
}
