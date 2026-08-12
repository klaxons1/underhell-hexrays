void __usercall sub_10326980(int a1@<ecx>, const char *a2@<edi>)
{
  unsigned int v3; // eax
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // ecx
  char v7; // bl
  _DWORD *v8; // eax
  int *v9; // edi
  int v10; // ebx
  void *v11; // ebx
  float *v12; // eax
  int v13; // eax
  float v14; // [esp+28h] [ebp-90h]
  float v15; // [esp+2Ch] [ebp-8Ch]
  float v16; // [esp+2Ch] [ebp-8Ch]
  float v17; // [esp+30h] [ebp-88h]
  float v18; // [esp+30h] [ebp-88h]
  _BYTE v19[80]; // [esp+40h] [ebp-78h] BYREF
  _BYTE v20[12]; // [esp+90h] [ebp-28h] BYREF
  _BYTE v21[12]; // [esp+9Ch] [ebp-1Ch] BYREF
  int v22[3]; // [esp+A8h] [ebp-10h] BYREF
  float v23; // [esp+B4h] [ebp-4h] BYREF
  int savedregs; // [esp+B8h] [ebp+0h] BYREF

  v15 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)a1, v15, 0);
  sub_103223D0(a1);
  if ( (dword_1069042C & 1) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 3740);
    if ( v3 != -1
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 2] == v3 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 1] )
    {
      if ( *(_BYTE *)(a1 + 3676) )
      {
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
        v5 = (_DWORD *)a1;
        if ( !v4 )
        {
          sub_103244B0(a1, 1);
LABEL_52:
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 728))(a1);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 784))(a1, a1);
          return;
        }
LABEL_28:
        sub_103264B0(v5, (int)&savedregs, (int)a2, a1);
        goto LABEL_52;
      }
      if ( *(_BYTE *)(a1 + 3677) )
      {
        sub_10322240((float *)a1);
        goto LABEL_52;
      }
      if ( 0.0 == *(float *)(a1 + 3680) )
        goto LABEL_52;
      v6 = a1;
      if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(a1 + 3680) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 732))(a1) )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, 1);
        if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 25) )
          goto LABEL_52;
        goto LABEL_15;
      }
    }
    else
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
      {
        if ( *(_BYTE *)(a1 + 3677) || *(_BYTE *)(a1 + 3676) )
          sub_103244B0(a1, 0);
        (*(void (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)(a1 + 320) + 60))(a1 + 320, v20, v21);
        if ( !sub_10262460((int)v20, (int)v21) )
        {
          v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  1.0,
                  1.5)
              + *(float *)(dword_106B31C8 + 12);
          sub_100EC4A0((int *)a1, v16, 0);
        }
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 732))(a1) && *(_DWORD *)(a1 + 2372) != 1 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, 1);
          v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  0.80000001,
                  1.2);
          sub_10045B20(a1, v17);
        }
        if ( *(_DWORD *)(a1 + 3672)
          && (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 99) == 1 )
        {
          sub_101674F0(a2, (_DWORD *)a1, 1, 50.0, 1.0, (int)"models/gibs/hgibs_rib.mdl", 25.0);
          --*(_DWORD *)(a1 + 3672);
          sub_1023C380((_DWORD *)a1, (int)"NPC_Barnacle.Digest", 0.0, 0);
        }
        v9 = sub_103224B0(a1, (int)&savedregs, (int)a2, a1, &v23);
        if ( v23 > (double)*(float *)(a1 + 3668) )
        {
          v10 = dword_106B31C8;
          v18 = (*(float *)(v10 + 12) - sub_100E92C0((_DWORD *)a1, 0)) * *(float *)(a1 + 9928) + *(float *)(a1 + 3668);
          sub_10322D80(a1, v18);
        }
        if ( v23 <= (double)*(float *)(a1 + 3668) )
        {
          if ( v9
            && v9 != (int *)sub_1026A890((unsigned int *)(a1 + 9900))
            && (v11 = (void *)__RTDynamicCast(
                                (int)v9,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                                (int)&CBaseCombatCharacter `RTTI Type Descriptor',
                                0),
                sub_10321AE0((int)v11))
            && (((*(void (__thiscall **)(int *, int *))(*v9 + 504))(v9, v22), !v11)
             || sub_100B0F60(v11, dword_106E50B0, (int)v22, a1)) )
          {
            sub_1023C380((_DWORD *)a1, (int)"NPC_Barnacle.BreakNeck", 0.0, 0);
            sub_10322EF0(a1, (int)&savedregs, (int)v9, a1, v9, v22[0], v22[1], *(float *)&v22[2]);
            *(float *)(a1 + 9932) = 60.0;
            v12 = (float *)sub_10019640(v9);
            *(float *)(a1 + 9936) = *v12;
            *(float *)(a1 + 9940) = v12[1];
            *(float *)(a1 + 9944) = v12[2];
            *(float *)(a1 + 9948) = 0.0;
            *(float *)(a1 + 9952) = *(float *)(dword_106B31C8 + 12) + 3.0;
            v9[63] |= 0x100000u;
          }
          else
          {
            if ( sub_1026A890((unsigned int *)(a1 + 3736)) )
            {
              v13 = sub_1026A890((unsigned int *)(a1 + 3736));
              (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v13 + 1120) + 8))(*(_DWORD *)(v13 + 1120), 10000.0);
            }
            sub_10322D80(a1, v23);
          }
        }
        goto LABEL_52;
      }
      if ( *(_BYTE *)(a1 + 3676) || *(_BYTE *)(a1 + 9956) == 1 )
      {
        v5 = (_DWORD *)a1;
        goto LABEL_28;
      }
      if ( 0.0 == *(float *)(a1 + 3680) )
        goto LABEL_52;
      v6 = a1;
      if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(a1 + 3680) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 732))(a1) )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, 1);
        if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 25) )
          goto LABEL_52;
LABEL_15:
        sub_1023C380((_DWORD *)a1, (int)"NPC_Barnacle.Digest", 0.0, 0);
        goto LABEL_52;
      }
    }
    v7 = *(_BYTE *)(a1 + 9957);
    sub_103244B0(v6, 1);
    *(float *)(a1 + 3680) = 0.0;
    if ( v7 )
    {
      v14 = (float)*(int *)(a1 + 220);
      v8 = (_DWORD *)sub_10248110((int)v19, a1, a1, v14, 0x100000, 0);
      sub_100D9E70((int *)a1, a1, v8);
    }
    goto LABEL_52;
  }
}
