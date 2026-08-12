char sub_101A7410()
{
  char *v0; // esi
  const char *v1; // edi
  int v2; // eax
  _DWORD *v3; // eax
  const char *v4; // edi
  int v5; // eax
  char *v6; // eax
  int v7; // edi
  int v8; // eax
  char *v9; // esi
  int v10; // esi
  char result; // al
  int v12; // esi
  int i; // esi
  int v14; // esi
  int v15; // esi
  char v16; // al
  _DWORD v17[5]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v18[2]; // [esp+20h] [ebp-6Ch] BYREF
  int v19; // [esp+28h] [ebp-64h]
  int v20; // [esp+2Ch] [ebp-60h]
  int v21; // [esp+30h] [ebp-5Ch]
  _DWORD v22[2]; // [esp+34h] [ebp-58h] BYREF
  int v23; // [esp+3Ch] [ebp-50h]
  int v24; // [esp+40h] [ebp-4Ch]
  int v25; // [esp+44h] [ebp-48h]
  _DWORD v26[2]; // [esp+48h] [ebp-44h] BYREF
  int v27; // [esp+50h] [ebp-3Ch]
  int v28; // [esp+54h] [ebp-38h]
  int v29; // [esp+58h] [ebp-34h]
  _DWORD v30[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v31; // [esp+64h] [ebp-28h]
  int v32; // [esp+68h] [ebp-24h]
  int v33; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v35; // [esp+74h] [ebp-18h]
  int v36; // [esp+78h] [ebp-14h]
  int v37; // [esp+7Ch] [ebp-10h]
  void *v38; // [esp+80h] [ebp-Ch]
  const char *v39; // [esp+84h] [ebp-8h] BYREF
  int v40; // [esp+88h] [ebp-4h]

  Src = 0;
  v35 = 0;
  v36 = 0;
  memset(v17, 0, sizeof(v17));
  v22[0] = 0;
  v22[1] = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v30[0] = 0;
  v30[1] = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v26[0] = 0;
  v26[1] = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v18[0] = 0;
  v18[1] = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v39 = "SQUAD_SLOT_UH_INFECTED_SPRINT1";
  v40 = 8;
  sub_10229160(0, &v39);
  v39 = "SQUAD_SLOT_UH_INFECTED_SPRINT2";
  v40 = 9;
  sub_10229160(0, &v39);
  v39 = "COND_UH_INFECTED_GRENADE";
  v40 = 76;
  sub_10229160(0, &v39);
  v39 = "COND_UH_INFECTED_RANDOMRUN";
  v40 = 77;
  sub_10229160(0, &v39);
  v39 = "COND_UH_INFECTED_CLIMB_TOUCH";
  v40 = 78;
  sub_10229160(0, &v39);
  v39 = "COND_BLOCKED_BY_DOOR";
  v40 = 80;
  sub_10229160(0, &v39);
  v39 = "COND_DOOR_OPENED";
  v40 = 79;
  sub_10229160(0, &v39);
  dword_106B9108 = sub_100032E0((int)"ACT_RUN_PANICKED");
  sub_10008F60((int)"ACT_RUN_PANICKED", dword_106B9108);
  dword_106B9104 = sub_100032E0((int)"ACT_UH_INFECTED_ATTACK_FAST");
  sub_10008F60((int)"ACT_UH_INFECTED_ATTACK_FAST", dword_106B9104);
  dword_106EC798 = sub_100032E0((int)"ACT_ZOMBIE_WALLPOUND");
  sub_10008F60((int)"ACT_ZOMBIE_WALLPOUND", dword_106EC798);
  dword_106B9100 = sub_100032E0((int)"ACT_ZOMBIE_BREAKTHROUGH");
  sub_10008F60((int)"ACT_ZOMBIE_BREAKTHROUGH", dword_106B9100);
  v39 = "TASK_UH_INFECTED_UNSTICK_JUMP";
  v40 = 250;
  sub_10229160(0, &v39);
  v39 = "TASK_UH_RADIO_PICKUP";
  v40 = 255;
  sub_10229160(0, &v39);
  v39 = "TASK_UH_THROW_ITEM";
  v40 = 256;
  sub_10229160(0, &v39);
  v39 = "TASK_UH_DESTROY_RADIO";
  v40 = 254;
  sub_10229160(0, &v39);
  v39 = "TASK_ZOMBIE_YAW_TO_DOOR";
  v40 = 251;
  sub_10229160(0, &v39);
  v39 = "TASK_ZOMBIE_ATTACK_DOOR";
  v40 = 252;
  sub_10229160(0, &v39);
  v39 = "TASK_ZOMBIE_BREAKTHROUG";
  v40 = 253;
  sub_10229160(0, &v39);
  v39 = "SCHED_UH_INFECTED_UNSTICK_JUMP";
  v40 = 101;
  sub_10229160(0, &v39);
  sub_102ABFC0(1);
  v37 = 1;
  v38 = 0;
  v39 = "SCHED_ZOMBIE_BASH_DOOR";
  v40 = 103;
  sub_10229160(0, &v39);
  v40 = 1;
  sub_102ABFC0(1 - v35 + 1);
  v0 = (char *)Src;
  v1 = (const char *)(v37 + 1);
  v37 = (int)v1;
  v2 = (int)&v1[-v40 - 1];
  v38 = Src;
  if ( v2 > 0 )
    memcpy((char *)Src + 4 * v40 + 4, (char *)Src + 4 * v40, 4 * v2);
  v3 = (char *)Src + 4 * v40;
  if ( v3 )
    *v3 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_ZOMBIE_BASH_DOOR\tTasks\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_ZOMBIE_WALLPOUND\t\tTASK_SET_FAIL_S"
          "CHEDULE\t\t\tSCHEDULE:SCHED_TAKE_COVER_FROM_ENEMY\t\tTASK_ZOMBIE_YAW_TO_DOOR\t\t\t0\t\tTASK_FACE_IDEAL\t\t\t\t"
          "\t0\t\tTASK_ZOMBIE_ATTACK_DOOR\t\t\t0\t\tTASK_ZOMBIE_BREAKTHROUG\t\t\t0\tInterrupts\t\tCOND_ZOMBIE_RELEASECRAB"
          "\t\tCOND_ENEMY_DEAD\t\tCOND_NEW_ENEMY\t\tCOND_DOOR_OPENED\n";
  v39 = "SCHED_UH_INFECTED_CLIMBING_UNSTICK_JUMP";
  v40 = 102;
  sub_10229160(v24, &v39);
  v40 = (int)v1;
  if ( (int)(v1 + 1) > v35 )
  {
    sub_102ABFC0(&v1[-v35 + 1]);
    v1 = (const char *)v37;
    v0 = (char *)Src;
  }
  v4 = v1 + 1;
  v37 = (int)v4;
  v5 = (int)&v4[-v40 - 1];
  v38 = v0;
  if ( v5 > 0 )
    memcpy(&v0[4 * v40 + 4], &v0[4 * v40], 4 * v5);
  v6 = &v0[4 * v40];
  if ( v6 )
    *(_DWORD *)v6 = "\n"
                    "\tSchedule\n"
                    "\t\tSCHED_UH_INFECTED_CLIMBING_UNSTICK_JUMP\tTasks\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_IDLE\t\t"
                    "TASK_UH_INFECTED_UNSTICK_JUMP\t0\t\tInterrupts\n";
  v39 = "SCHED_UH_INFECTED_INVESTIGATE_RADIO";
  v40 = 104;
  sub_10229160(v24, &v39);
  v40 = (int)v4;
  if ( (int)(v4 + 1) > v35 )
  {
    sub_102ABFC0(&v4[-v35 + 1]);
    v4 = (const char *)v37;
    v0 = (char *)Src;
  }
  v7 = (int)(v4 + 1);
  v37 = v7;
  v8 = v7 - v40 - 1;
  v38 = v0;
  if ( v8 > 0 )
    memcpy(&v0[4 * v40 + 4], &v0[4 * v40], 4 * v8);
  v9 = &v0[4 * v40];
  if ( v9 )
    *(_DWORD *)v9 = "\n"
                    "\tSchedule\n"
                    "\t\tSCHED_UH_INFECTED_INVESTIGATE_RADIO\tTasks\t\tTASK_STOP_MOVING\t\t\t\t0\t\tTASK_STORE_LASTPOSITI"
                    "ON\t\t\t0\t\tTASK_SET_TOLERANCE_DISTANCE\t\t128\t\tTASK_GET_PATH_TO_TARGET\t\t\t0\t\tTASK_FACE_IDEAL"
                    "\t\t\t\t\t0\t\tTASK_RUN_PATH\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t0\t\tTASK_STOP_MOVING\t\t\t\t"
                    "0\t\tTASK_WAIT\t\t\t\t\t\t5\t\tTASK_FACE_TARGET\t\t\t\t0\t\tTASK_ITEM_PICKUP\t\t\t\t0\t\tTASK_UH_DES"
                    "TROY_RADIO\t\t\t0\t\tTASK_SET_SCHEDULE\t\t\t\tSCHEDULE:SCHED_RUN_RANDOM\t\tInterrupts\t\tCOND_ENEMY_"
                    "DEAD\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_HEAR_MOVE_AWAY\t\tCOND_NE"
                    "W_ENEMY\t\tCOND_SEE_ENEMY\t\tCOND_CAN_RANGE_ATTACK1\t\tCOND_CAN_RANGE_ATTACK2\n";
  sub_1004BBC0(&dword_106B9398, (int)"CNPC_UH_Infected", (int)dword_10690E5C, (int)&unk_106E5A40);
  sub_1007DAB0(dword_106B93E4, (int)dword_1069528C, (int)&unk_106E5A8C);
  sub_1004C500((int)v22, sub_10333A80);
  sub_1004C500((int)v30, sub_10333A80);
  sub_1004C500((int)v26, sub_10333A80);
  sub_1004C500((int)v18, sub_10333A80);
  v10 = 0;
  if ( v24 > 0 )
  {
    do
    {
      result = sub_1007DB90(
                 dword_106B939C,
                 *(_DWORD *)(v22[0] + 8 * v10),
                 *(_DWORD *)(v22[0] + 8 * v10 + 4),
                 "schedule",
                 off_1063328C);
      if ( !result )
        goto LABEL_28;
    }
    while ( ++v10 < v24 );
  }
  v12 = 0;
  if ( v32 > 0 )
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106B93B4,
                 *(_DWORD *)(v30[0] + 8 * v12),
                 *(_DWORD *)(v30[0] + 8 * v12 + 4),
                 "task",
                 off_1063328C);
      if ( !result )
        break;
      if ( ++v12 >= v32 )
        goto LABEL_25;
    }
LABEL_28:
    if ( v19 >= 0 )
    {
      result = v18[0];
      if ( v18[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v18[0]);
    }
    if ( v27 >= 0 )
    {
      result = v26[0];
      if ( v26[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v26[0]);
    }
    if ( v31 >= 0 )
    {
      result = v30[0];
      if ( v30[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v30[0]);
    }
    if ( v23 >= 0 )
    {
      result = v22[0];
      if ( v22[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v22[0]);
    }
    if ( v36 >= 0 )
    {
      result = (char)Src;
      if ( Src )
        return (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src);
    }
    return result;
  }
LABEL_25:
  for ( i = 0; i < v28; ++i )
  {
    v40 = *(_DWORD *)(v26[0] + 8 * i);
    if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
    {
      result = sub_1007DB90(
                 dword_106B93CC,
                 *(_DWORD *)(v26[0] + 8 * i),
                 *(_DWORD *)(v26[0] + 8 * i + 4),
                 "condition",
                 off_1063328C);
      if ( !result )
        goto LABEL_28;
    }
    else
    {
      DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v40);
    }
  }
  v14 = 0;
  if ( v20 <= 0 )
  {
LABEL_48:
    v15 = 0;
    if ( v7 > 0 )
    {
      v16 = byte_10633284;
      do
      {
        if ( !v16 )
          break;
        v16 = sub_100A7A40(&dword_10694898, "CNPC_UH_Infected", *((_DWORD *)Src + v15++), (int)&dword_106B9398);
        byte_10633284 = v16;
      }
      while ( v15 < v7 );
    }
    sub_102375F0(v18);
    sub_102375F0(v26);
    sub_102375F0(v30);
    sub_102375F0(v22);
    sub_102375F0(v17);
  }
  else
  {
    while ( sub_1007DB90(
              dword_106B93E4,
              *(_DWORD *)(v18[0] + 8 * v14),
              *(_DWORD *)(v18[0] + 8 * v14 + 4),
              "squadslot",
              off_1063328C) )
    {
      if ( ++v14 >= v20 )
        goto LABEL_48;
    }
    if ( v19 >= 0 && v18[0] )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v18[0]);
    if ( v27 >= 0 && v26[0] )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v26[0]);
    if ( v31 >= 0 && v30[0] )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v30[0]);
    if ( v23 >= 0 && v22[0] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v22[0]);
      return sub_102375F0(&Src);
    }
  }
  return sub_102375F0(&Src);
}
