char sub_100970D0()
{
  char *v0; // esi
  int v1; // ecx
  int v2; // ebx
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  char *v8; // esi
  int v9; // esi
  void *v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // edi
  const char *v14; // ebx
  bool v15; // zf
  int v16; // esi
  char v17; // al
  _DWORD v19[5]; // [esp+Ch] [ebp-80h] BYREF
  _DWORD v20[5]; // [esp+20h] [ebp-6Ch] BYREF
  _DWORD v21[2]; // [esp+34h] [ebp-58h] BYREF
  int v22; // [esp+3Ch] [ebp-50h]
  int v23; // [esp+40h] [ebp-4Ch]
  int v24; // [esp+44h] [ebp-48h]
  _DWORD v25[2]; // [esp+48h] [ebp-44h] BYREF
  int v26; // [esp+50h] [ebp-3Ch]
  int v27; // [esp+54h] [ebp-38h]
  int v28; // [esp+58h] [ebp-34h]
  _DWORD v29[2]; // [esp+5Ch] [ebp-30h] BYREF
  int v30; // [esp+64h] [ebp-28h]
  int v31; // [esp+68h] [ebp-24h]
  int v32; // [esp+6Ch] [ebp-20h]
  void *Src; // [esp+70h] [ebp-1Ch] BYREF
  int v34; // [esp+74h] [ebp-18h]
  int v35; // [esp+78h] [ebp-14h]
  int v36; // [esp+7Ch] [ebp-10h]
  void *v37; // [esp+80h] [ebp-Ch]
  const char *v38; // [esp+84h] [ebp-8h] BYREF
  int v39; // [esp+88h] [ebp-4h]

  Src = 0;
  v34 = 0;
  v35 = 0;
  memset(v19, 0, sizeof(v19));
  v29[0] = 0;
  v29[1] = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v21[0] = 0;
  v21[1] = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25[0] = 0;
  v25[1] = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  memset(v20, 0, sizeof(v20));
  v38 = "TASK_TALKER_SPEAK_PENDING";
  v39 = 150;
  sub_10229160(0, &v38);
  v38 = "COND_TALKER_CLIENTUNSEEN";
  v39 = 73;
  sub_10229160(0, &v38);
  v38 = "COND_TALKER_PLAYER_DEAD";
  v39 = 74;
  sub_10229160(0, &v38);
  v38 = "COND_TALKER_PLAYER_STARING";
  v39 = 75;
  sub_10229160(0, &v38);
  v38 = "SCHED_TALKER_SPEAK_PENDING_IDLE";
  v39 = 88;
  sub_10229160(0, &v38);
  sub_102ABFC0(1);
  v36 = 1;
  v37 = 0;
  v38 = "SCHED_TALKER_SPEAK_PENDING_ALERT";
  v39 = 89;
  sub_10229160(0, &v38);
  v39 = 1;
  sub_102ABFC0(1 - v34 + 1);
  v0 = (char *)Src;
  v1 = v39;
  v2 = v36 + 1;
  v3 = v36 - v39;
  ++v36;
  v37 = Src;
  if ( v3 > 0 )
  {
    memcpy((char *)Src + 4 * v39 + 4, (char *)Src + 4 * v39, 4 * v3);
    v1 = v39;
  }
  v4 = (char *)Src + 4 * v1;
  if ( v4 )
    *v4 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_TALKER_SPEAK_PENDING_ALERT\tTasks\t\tTASK_TALKER_SPEAK_PENDING\t\t0\t\tTASK_STOP_MOVING\t\t\t\t0\t\t"
          "TASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT_FOR_SPEAK_FINISH\t\t0\t\tTASK_WAIT_RANDOM\t\t\t\t0.5\t"
          "Interrupts\t\tCOND_NEW_ENEMY\t\tCOND_LIGHT_DAMAGE\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\t\tCOND_PLAYER_PUSH"
          "ING\t\tCOND_GIVE_WAY\n";
  v38 = "SCHED_TALKER_SPEAK_PENDING_COMBAT";
  v39 = 90;
  sub_10229160(v31, &v38);
  v5 = v2;
  v39 = v2;
  if ( v2 + 1 > v34 )
  {
    sub_102ABFC0(v2 - v34 + 1);
    v2 = v36;
    v0 = (char *)Src;
    v5 = v39;
  }
  v6 = v2 + 1;
  v7 = v6 - v5 - 1;
  v36 = v6;
  v37 = v0;
  if ( v7 > 0 )
  {
    memcpy(&v0[4 * v5 + 4], &v0[4 * v5], 4 * v7);
    v5 = v39;
  }
  v8 = &v0[4 * v5];
  if ( v8 )
    *(_DWORD *)v8 = "\n"
                    "\tSchedule\n"
                    "\t\tSCHED_TALKER_SPEAK_PENDING_COMBAT\tTasks\t\tTASK_TALKER_SPEAK_PENDING\t\t0\t\tTASK_STOP_MOVING\t"
                    "\t\t\t0\t\tTASK_SET_ACTIVITY\t\t\t\tACTIVITY:ACT_IDLE\t\tTASK_WAIT_FOR_SPEAK_FINISH\t\t0\tInterrupts"
                    "\t\tCOND_HEAVY_DAMAGE\t\tCOND_HEAR_DANGER\n";
  sub_1004BBC0(&dword_10693928, (int)"CAI_PlayerAlly", (int)&unk_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_10693974, (int)&unk_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v29, sub_10333A80);
  sub_1004C500((int)v21, sub_10333A80);
  sub_1004C500((int)v25, sub_10333A80);
  sub_1004C500((int)v20, sub_10333A80);
  v9 = 0;
  if ( v31 <= 0 )
  {
LABEL_16:
    v11 = 0;
    if ( v23 <= 0 )
    {
LABEL_19:
      v12 = 0;
      if ( v27 <= 0 )
      {
LABEL_39:
        v16 = 0;
        if ( v6 > 0 )
        {
          v17 = byte_10609D90;
          do
          {
            if ( !v17 )
              break;
            v17 = sub_100A7A40("CAI_PlayerAlly", *((_DWORD *)Src + v16++), &dword_10693928);
            byte_10609D90 = v17;
          }
          while ( v16 < v6 );
        }
        sub_102375F0(v25);
        sub_102375F0(v21);
        sub_102375F0(v29);
        sub_102375F0(v19);
        LOBYTE(v10) = sub_102375F0(&Src);
        return (char)v10;
      }
      v13 = v25[0];
      while ( 1 )
      {
        v14 = *(const char **)(v13 + 8 * v12);
        if ( sub_1016BF80(&unk_10690E6C) - 1000000000 < 256 )
        {
          LOBYTE(v10) = sub_1007DB90(
                          dword_1069395C,
                          *(_DWORD *)(v13 + 8 * v12),
                          *(_DWORD *)(v13 + 8 * v12 + 4),
                          "condition",
                          off_10609D98);
          if ( !(_BYTE)v10 )
          {
            if ( v26 >= 0 && v13 )
              LOBYTE(v10) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v13);
            if ( v22 >= 0 )
            {
              LOBYTE(v10) = v21[0];
              if ( v21[0] )
                LOBYTE(v10) = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v21[0]);
            }
            if ( v30 >= 0 )
            {
              LOBYTE(v10) = v29[0];
              if ( v29[0] )
                LOBYTE(v10) = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v29[0]);
            }
            if ( v35 >= 0 )
            {
              v10 = Src;
              v15 = Src == 0;
              goto LABEL_34;
            }
            return (char)v10;
          }
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, v14);
        }
        if ( ++v12 >= v27 )
        {
          v6 = v36;
          goto LABEL_39;
        }
      }
    }
    while ( 1 )
    {
      LOBYTE(v10) = sub_1007DB90(
                      dword_10693944,
                      *(_DWORD *)(v21[0] + 8 * v11),
                      *(_DWORD *)(v21[0] + 8 * v11 + 4),
                      "task",
                      off_10609D98);
      if ( !(_BYTE)v10 )
        break;
      if ( ++v11 >= v23 )
        goto LABEL_19;
    }
  }
  else
  {
    while ( 1 )
    {
      LOBYTE(v10) = sub_1007DB90(
                      dword_1069392C,
                      *(_DWORD *)(v29[0] + 8 * v9),
                      *(_DWORD *)(v29[0] + 8 * v9 + 4),
                      "schedule",
                      off_10609D98);
      if ( !(_BYTE)v10 )
        break;
      if ( ++v9 >= v31 )
        goto LABEL_16;
    }
  }
  if ( v26 >= 0 )
  {
    LOBYTE(v10) = v25[0];
    if ( v25[0] )
      LOBYTE(v10) = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v25[0]);
  }
  if ( v22 >= 0 )
  {
    LOBYTE(v10) = v21[0];
    if ( v21[0] )
      LOBYTE(v10) = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v21[0]);
  }
  if ( v30 >= 0 )
  {
    LOBYTE(v10) = v29[0];
    if ( v29[0] )
      LOBYTE(v10) = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v29[0]);
  }
  if ( v35 >= 0 )
  {
    v10 = Src;
    v15 = Src == 0;
LABEL_34:
    if ( !v15 )
      LOBYTE(v10) = (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v10);
  }
  return (char)v10;
}
