// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_10084B90@<al>(int a1@<ecx>, int a2@<esi>, float a3)
{
  double v3; // st7
  int v5; // eax
  int v6; // ecx
  char *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // eax
  float *v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // edx
  const char *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edi
  float v23; // [esp+0h] [ebp-110h]
  char Buffer[256]; // [esp+8h] [ebp-108h] BYREF
  int v26; // [esp+108h] [ebp-8h]
  int v27; // [esp+10Ch] [ebp-4h] BYREF
  char v28; // [esp+11Bh] [ebp+Bh]

  v3 = 1.0;
  if ( a3 <= 1.0 )
    v3 = a3;
  else
    a3 = 1.0;
  v23 = v3;
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 1736))(LODWORD(v23), a2) )
    return 1;
  v5 = sub_100A6180(*(_DWORD *)(a1 + 36));
  v6 = *(_DWORD *)(a1 + 4);
  if ( !v5 )
  {
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 52) = 0;
LABEL_18:
    if ( *(_DWORD *)(a1 + 12) == 3 )
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 20) + 24))(*(_DWORD *)(a1 + 20));
      *(_DWORD *)(a1 + 12) = 0;
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 20) + 48))(*(_DWORD *)(a1 + 20));
    return 0;
  }
  if ( (*(_DWORD *)(v6 + 2716) & 0x2000) != 0
    && *(float *)(dword_106B31C8 + 12) - *(float *)(*(_DWORD *)(a1 + 36) + 76) > 5.0 )
  {
    *(_DWORD *)(v6 + 2716) &= ~0x2000u;
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v7 = sub_1001E280(Buffer, "[Nav] %s", "NPC appears stuck turning. Proceeding.\n");
      sub_10029660(*(_DWORD **)(a1 + 4), (int)v7);
    }
  }
  v8 = *(_DWORD *)(a1 + 48);
  if ( v8 > 1 && *(int *)(*(_DWORD *)(a1 + 36) + 8) <= 1 )
  {
    v9 = sub_10039AE0(*(_DWORD **)(a1 + 4), v8, 0);
    sub_100A5F90(v9);
  }
  if ( *(int *)(*(_DWORD *)(a1 + 36) + 8) <= 1 )
    goto LABEL_18;
  *(float *)(*(_DWORD *)(a1 + 20) + 16) = a3;
  if ( !sub_100A6180(*(_DWORD *)(a1 + 36)) )
  {
    DevWarning("Move requested with no route!\n");
    v10 = 1;
LABEL_16:
    sub_10083640((_DWORD *)a1, dword_10608F24[v10], 0);
    return 0;
  }
  if ( !**(_DWORD **)(a1 + 36) )
  {
    DevWarning("Move goal with no route!\n");
    sub_100A6340(*(_DWORD *)(a1 + 36));
    v10 = 2;
    goto LABEL_16;
  }
  if ( sub_10042650(*(float **)(a1 + 4)) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 20) + 52))(*(_DWORD *)(a1 + 20));
    return 0;
  }
  else
  {
    v12 = 1;
    v26 = 0;
    v28 = 0;
    v27 = 1;
    *(_BYTE *)(a1 + 16) = 0;
    while ( !*(_BYTE *)(a1 + 16) )
    {
      v13 = *(float **)(a1 + 20);
      if ( v13[4] <= 0.0 )
        return v28;
      if ( !*(_BYTE *)(a1 + 57) )
      {
        (*(void (__thiscall **)(float *))(*(_DWORD *)v13 + 44))(v13);
        *(_BYTE *)(a1 + 57) = 1;
      }
      v14 = *(_DWORD *)(a1 + 124);
      if ( v14 != -1
        && off_1061BE18[4 * (*(_DWORD *)(a1 + 124) & 0xFFF) + 2] == v14 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(a1 + 124) & 0xFFF) + 1] )
      {
        v15 = sub_101C5260(*(_DWORD *)(a1 + 4));
        v16 = *(_DWORD *)(a1 + 124);
        if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 124) & 0xFFF) + 2] != v16 >> 12 )
          v17 = 0;
        else
          v17 = off_1061BE18[4 * (*(_DWORD *)(a1 + 124) & 0xFFF) + 1];
        if ( v17 != v15 )
          *(_DWORD *)(a1 + 124) = -1;
      }
      switch ( sub_100A6190(*(_DWORD *)(a1 + 36)) )
      {
        case 0:
        case 2:
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 52))(a1);
          goto LABEL_41;
        case 1:
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 60))(a1);
          goto LABEL_41;
        case 3:
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 56))(a1);
LABEL_41:
          v27 = v12;
          if ( !v12 )
            v28 = 1;
          break;
        default:
          DevMsg("Bogus route move type!");
          v12 = -4;
          v27 = -4;
          break;
      }
      if ( ++v26 > 16 )
      {
        v18 = (const char *)sub_100D6390(*(_DWORD *)(a1 + 4));
        DevMsg("ERROR: %s navigation not terminating. Possibly bad cyclical solving?\n", v18);
        v19 = *(_DWORD *)(a1 + 36);
        v27 = -4;
        v20 = sub_100A6190(v19);
        if ( !v20 || v20 == 2 )
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)(a1 + 8) + 24))(a1 + 8, &v27);
        v12 = v27;
        break;
      }
      if ( v12 < 0 )
        goto LABEL_54;
    }
    if ( v12 >= 0 )
      return v28;
LABEL_54:
    if ( v12 != -3 || (v21 = *(_DWORD *)(a1 + 12), v21 == 3) || v21 == 1 || sub_100A6190(*(_DWORD *)(a1 + 36)) == 1 )
    {
      if ( sub_10080740(a1) )
      {
        v22 = **(_DWORD **)(a1 + 36);
        if ( v22 )
        {
          sub_100A61F0(0, 0);
          if ( sub_10083810(a1, 0, 1) )
          {
            sub_100B9C00(v22);
            return v28;
          }
          sub_100A61F0(v22, 0);
        }
      }
    }
    sub_10083640((_DWORD *)a1, (v27 == -4) + 13, 1);
    return v28;
  }
}
