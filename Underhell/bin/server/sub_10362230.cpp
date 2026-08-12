char sub_10362230()
{
  char (**v0)(); // esi
  _DWORD *v1; // esi
  const char *v2; // edi
  int v3; // eax
  const char *v4; // ecx
  const char *v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  const char *v8; // ecx
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // esi
  int v12; // esi
  void *v13; // eax
  int v14; // esi
  int v15; // esi
  int v16; // ebx
  bool v17; // zf
  int i; // esi
  int v19; // esi
  char v20; // al
  int v22[5]; // [esp+Ch] [ebp-80h] BYREF
  int v23[2]; // [esp+20h] [ebp-6Ch] BYREF
  int v24; // [esp+28h] [ebp-64h]
  int v25; // [esp+2Ch] [ebp-60h]
  int v26; // [esp+30h] [ebp-5Ch]
  void *Src[2]; // [esp+34h] [ebp-58h] BYREF
  int v28; // [esp+3Ch] [ebp-50h]
  int v29; // [esp+40h] [ebp-4Ch]
  void *v30; // [esp+44h] [ebp-48h]
  int v31[2]; // [esp+48h] [ebp-44h] BYREF
  int v32; // [esp+50h] [ebp-3Ch]
  int v33; // [esp+54h] [ebp-38h]
  int v34; // [esp+58h] [ebp-34h]
  void *v35; // [esp+5Ch] [ebp-30h] BYREF
  int v36; // [esp+60h] [ebp-2Ch]
  int v37; // [esp+64h] [ebp-28h]
  const char *v38; // [esp+68h] [ebp-24h]
  void *v39; // [esp+6Ch] [ebp-20h]
  int v40[2]; // [esp+70h] [ebp-1Ch] BYREF
  int v41; // [esp+78h] [ebp-14h]
  int v42; // [esp+7Ch] [ebp-10h]
  int v43; // [esp+80h] [ebp-Ch]
  const char *v44; // [esp+84h] [ebp-8h] BYREF
  int v45; // [esp+88h] [ebp-4h]

  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  Src[0] = 0;
  Src[1] = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31[0] = 0;
  v31[1] = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v40[0] = 0;
  v40[1] = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v23[0] = 0;
  v23[1] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  memset(v22, 0, sizeof(v22));
  sub_102ABFC0(Src, 1);
  v0 = (char (**)())Src[0];
  ++v29;
  v30 = Src[0];
  if ( v29 - 1 > 0 )
    memcpy((char *)Src[0] + 4, Src[0], 4 * (v29 - 1));
  if ( v0 )
    *v0 = sub_10056B50;
  dword_106E7C64 = sub_100032E0((int)"ACT_DOG_THROW");
  sub_10008F60((int)"ACT_DOG_THROW", dword_106E7C64);
  dword_106E7C60 = sub_100032E0((int)"ACT_DOG_PICKUP");
  sub_10008F60((int)"ACT_DOG_PICKUP", dword_106E7C60);
  dword_106E7C5C = sub_100032E0((int)"ACT_DOG_WAITING");
  sub_10008F60((int)"ACT_DOG_WAITING", dword_106E7C5C);
  dword_106E7C58 = sub_100032E0((int)"ACT_DOG_CATCH");
  sub_10008F60((int)"ACT_DOG_CATCH", dword_106E7C58);
  v44 = "COND_DOG_LOST_PHYSICS_ENTITY";
  v45 = 73;
  sub_10229160(v23, 0, &v44);
  v44 = "TASK_DOG_DELAY_SWAT";
  v45 = 150;
  sub_10229160(v40, 0, &v44);
  v44 = "TASK_DOG_GET_PATH_TO_PHYSOBJ";
  v45 = 151;
  sub_10229160(v40, v42, &v44);
  v44 = "TASK_DOG_LAUNCH_ITEM";
  v45 = 153;
  sub_10229160(v40, v42, &v44);
  v44 = "TASK_DOG_PICKUP_ITEM";
  v45 = 152;
  sub_10229160(v40, v42, &v44);
  v44 = "TASK_DOG_FACE_OBJECT";
  v45 = 154;
  sub_10229160(v40, v42, &v44);
  v44 = "TASK_DOG_WAIT_FOR_OBJECT";
  v45 = 155;
  sub_10229160(v40, v42, &v44);
  v44 = "TASK_DOG_CATCH_OBJECT";
  v45 = 156;
  sub_10229160(v40, v42, &v44);
  v44 = "TASK_DOG_WAIT_FOR_TARGET_TO_FACE";
  v45 = 157;
  sub_10229160(v40, v42, &v44);
  v44 = "TASK_DOG_SETUP_THROW_TARGET";
  v45 = 158;
  sub_10229160(v40, v42, &v44);
  dword_106E7C54 = sub_1013BF10((int)"AE_DOG_THROW");
  sub_1006AFD0((int)"AE_DOG_THROW", dword_106E7C54);
  dword_106E7C50 = sub_1013BF10((int)"AE_DOG_PICKUP");
  sub_1006AFD0((int)"AE_DOG_PICKUP", dword_106E7C50);
  dword_106E7C4C = sub_1013BF10((int)"AE_DOG_CATCH");
  sub_1006AFD0((int)"AE_DOG_CATCH", dword_106E7C4C);
  dword_106E7C48 = sub_1013BF10((int)"AE_DOG_PICKUP_NOEFFECT");
  sub_1006AFD0((int)"AE_DOG_PICKUP_NOEFFECT", dword_106E7C48);
  v44 = "SCHED_DOG_FIND_OBJECT";
  v45 = 88;
  sub_10229160(v31, 0, &v44);
  sub_102ABFC0(&v35, 1);
  v1 = v35;
  v2 = v38 + 1;
  v3 = (int)v38++;
  v39 = v35;
  if ( v3 > 0 )
    memcpy((char *)v35 + 4, v35, 4 * v3);
  if ( v1 )
    *v1 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_DOG_FIND_OBJECT\tTasks\t\tTASK_DOG_DELAY_SWAT\t\t\t\t\t3\t\tTASK_DOG_GET_PATH_TO_PHYSOBJ\t\t0\t\tTAS"
          "K_RUN_PATH\t\t\t\t\t\t0\t\tTASK_WAIT_FOR_MOVEMENT\t\t\t\t0\t\tTASK_DOG_FACE_OBJECT\t\t\t\t0\t\tTASK_FACE_IDEAL"
          "\t\t\t\t\t\t0\t\tTASK_DOG_PICKUP_ITEM\t\t\t\t0\t\tTASK_DOG_SETUP_THROW_TARGET\t\t\t0\t\tTASK_FACE_TARGET\t\t\t"
          "\t\t0.5\t\tTASK_DOG_WAIT_FOR_TARGET_TO_FACE\t0\t\tTASK_DOG_LAUNCH_ITEM\t\t\t\t0\tInterrupts\t\tCOND_DOG_LOST_PHYSICS_ENTITY\n";
  v44 = "SCHED_DOG_WAIT_THROW_OBJECT";
  v45 = 90;
  sub_10229160(v31, v33, &v44);
  v4 = v2;
  v45 = (int)v2;
  if ( (int)(v2 + 1) > v36 )
  {
    sub_102ABFC0(&v35, (int)&v2[-v36 + 1]);
    v2 = v38;
    v1 = v35;
    v4 = (const char *)v45;
  }
  v5 = v2 + 1;
  v6 = v5 - v4 - 1;
  v38 = v5;
  v39 = v1;
  if ( v6 > 0 )
  {
    memcpy(&v1[(_DWORD)v4 + 1], &v1[(_DWORD)v4], 4 * v6);
    v4 = (const char *)v45;
  }
  v7 = &v1[(_DWORD)v4];
  if ( v7 )
    *v7 = "\n"
          "\tSchedule\n"
          "\t\tSCHED_DOG_WAIT_THROW_OBJECT\tTasks\t\tTASK_DOG_SETUP_THROW_TARGET\t\t\t0\t\tTASK_FACE_TARGET\t\t\t\t\t0.5\t"
          "\tTASK_DOG_WAIT_FOR_TARGET_TO_FACE\t0\t\tTASK_DOG_LAUNCH_ITEM\t\t\t\t0\tInterrupts\t\tCOND_DOG_LOST_PHYSICS_ENTITY\n";
  v44 = "SCHED_DOG_CATCH_OBJECT";
  v45 = 89;
  sub_10229160(v31, v33, &v44);
  v8 = v5;
  v45 = (int)v5;
  if ( (int)(v5 + 1) > v36 )
  {
    sub_102ABFC0(&v35, (int)&v5[-v36 + 1]);
    v5 = v38;
    v1 = v35;
    v8 = (const char *)v45;
  }
  v9 = (int)(v5 + 1);
  v10 = v9 - (_DWORD)v8 - 1;
  v38 = (const char *)v9;
  v39 = v1;
  if ( v10 > 0 )
  {
    memcpy(&v1[(_DWORD)v8 + 1], &v1[(_DWORD)v8], 4 * v10);
    v8 = (const char *)v45;
  }
  v11 = &v1[(_DWORD)v8];
  if ( v11 )
    *v11 = "\n"
           "\tSchedule\n"
           "\t\tSCHED_DOG_CATCH_OBJECT\tTasks\t\tTASK_DOG_WAIT_FOR_OBJECT\t\t\t0\t\tTASK_DOG_CATCH_OBJECT\t\t\t\t0\t\tTAS"
           "K_FACE_PLAYER\t\t\t\t\t0.5\t\tTASK_DOG_WAIT_FOR_TARGET_TO_FACE\t0\t\tTASK_DOG_LAUNCH_ITEM\t\t\t\t0\t\tTASK_SE"
           "T_FAIL_SCHEDULE\t\t\t\tSCHEDULE:SCHED_IDLE_STAND\tInterrupts\t\tCOND_DOG_LOST_PHYSICS_ENTITY\n";
  sub_1004BBC0(&dword_106E7D00, (int)"CNPC_Dog", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E7D4C, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v31, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v40, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v23, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v22, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v12 = 0;
  if ( v33 <= 0 )
  {
LABEL_24:
    v14 = 0;
    if ( v42 <= 0 )
    {
LABEL_27:
      v15 = 0;
      if ( v25 <= 0 )
      {
LABEL_49:
        for ( i = 0; i < v29; ++i )
          (*((void (**)(void))Src[0] + i))();
        v19 = 0;
        if ( v9 > 0 )
        {
          v20 = byte_106726E8;
          do
          {
            if ( !v20 )
              break;
            v20 = sub_100A7A40(&dword_10694898, "CNPC_Dog", *((_DWORD *)v35 + v19++), (int)&dword_106E7D00);
            byte_106726E8 = v20;
          }
          while ( v19 < v9 );
        }
        sub_102375F0(v22);
        sub_102375F0(v23);
        sub_102375F0(v40);
        sub_102375F0(v31);
        sub_102375F0((int *)Src);
        LOBYTE(v13) = sub_102375F0((int *)&v35);
        return (char)v13;
      }
      v16 = v23[0];
      while ( 1 )
      {
        v45 = *(_DWORD *)(v16 + 8 * v15);
        if ( sub_1016BF80(dword_10690E6C) - 1000000000 < 256 )
        {
          LOBYTE(v13) = sub_1007DB90(
                          dword_106E7D34,
                          *(_DWORD *)(v16 + 8 * v15),
                          *(_DWORD *)(v16 + 8 * v15 + 4),
                          "condition",
                          off_106726F0);
          if ( !(_BYTE)v13 )
          {
            if ( v24 >= 0 && v16 )
              LOBYTE(v13) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v16);
            if ( v41 >= 0 )
            {
              LOBYTE(v13) = v40[0];
              if ( v40[0] )
                LOBYTE(v13) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
            }
            if ( v32 >= 0 )
            {
              LOBYTE(v13) = v31[0];
              if ( v31[0] )
                LOBYTE(v13) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
            }
            if ( v28 >= 0 )
            {
              LOBYTE(v13) = Src[0];
              if ( Src[0] )
                LOBYTE(v13) = (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src[0]);
            }
            if ( v37 >= 0 )
            {
              v13 = v35;
              v17 = v35 == 0;
              goto LABEL_45;
            }
            return (char)v13;
          }
        }
        else
        {
          DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, (const char *)v45);
        }
        if ( ++v15 >= v25 )
          goto LABEL_49;
      }
    }
    while ( 1 )
    {
      LOBYTE(v13) = sub_1007DB90(
                      dword_106E7D1C,
                      *(_DWORD *)(v40[0] + 8 * v14),
                      *(_DWORD *)(v40[0] + 8 * v14 + 4),
                      "task",
                      off_106726F0);
      if ( !(_BYTE)v13 )
        break;
      if ( ++v14 >= v42 )
        goto LABEL_27;
    }
  }
  else
  {
    while ( 1 )
    {
      LOBYTE(v13) = sub_1007DB90(
                      dword_106E7D04,
                      *(_DWORD *)(v31[0] + 8 * v12),
                      *(_DWORD *)(v31[0] + 8 * v12 + 4),
                      "schedule",
                      off_106726F0);
      if ( !(_BYTE)v13 )
        break;
      if ( ++v12 >= v33 )
        goto LABEL_24;
    }
  }
  if ( v24 >= 0 )
  {
    LOBYTE(v13) = v23[0];
    if ( v23[0] )
      LOBYTE(v13) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v23[0]);
  }
  if ( v41 >= 0 )
  {
    LOBYTE(v13) = v40[0];
    if ( v40[0] )
      LOBYTE(v13) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40[0]);
  }
  if ( v32 >= 0 )
  {
    LOBYTE(v13) = v31[0];
    if ( v31[0] )
      LOBYTE(v13) = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
  }
  if ( v28 >= 0 )
  {
    LOBYTE(v13) = Src[0];
    if ( Src[0] )
      LOBYTE(v13) = (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Src[0]);
  }
  if ( v37 >= 0 )
  {
    v13 = v35;
    v17 = v35 == 0;
LABEL_45:
    if ( !v17 )
      LOBYTE(v13) = (*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v13);
  }
  return (char)v13;
}
