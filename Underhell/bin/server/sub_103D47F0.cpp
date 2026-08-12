void __thiscall sub_103D47F0(int this, int a2, int a3, int a4, int a5)
{
  unsigned int v7; // eax
  int *v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  char v13; // bl
  int v14; // eax
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  double v19; // st7
  double v20; // st7
  int v21; // eax
  _DWORD v22[20]; // [esp+20h] [ebp-5Ch] BYREF
  float v23; // [esp+70h] [ebp-Ch] BYREF
  float v24; // [esp+74h] [ebp-8h]
  float v25; // [esp+78h] [ebp-4h]
  int v26; // [esp+84h] [ebp+8h]
  int v27; // [esp+84h] [ebp+8h]
  bool v28; // [esp+87h] [ebp+Bh]

  if ( *(char **)(a2 + 92) == "npc_strider"
    || sub_100D6240((_DWORD *)a2, "npc_strider")
    || (v7 = *(_DWORD *)(a2 + 412), v7 != -1)
    && (v8 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 412) & 0xFFF) + 1],
        v9 = v7 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(a2 + 412) & 0xFFF) + 2] == v9)
    && *v8
    && (off_1061BE18[4 * (*(_DWORD *)(a2 + 412) & 0xFFF) + 2] != v9 ? (v10 = 0) : (v10 = *v8),
        *(char **)(v10 + 92) == "npc_strider" || sub_100D6240((_DWORD *)v10, "npc_strider")) )
  {
LABEL_41:
    sub_103D43E0(this);
    return;
  }
  v26 = *(int *)(dword_106ECC04 + 44);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v11 = *(_DWORD *)(this + 412);
  if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] != v11 >> 12 )
    v12 = 0;
  else
    v12 = off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1];
  sub_102487B0((int)v22, this, v12, (float *)(this + 476), (float *)(this + 580), *(float *)&v26, 0x4000000, 0, 0);
  v28 = (*(_DWORD *)(a2 + 256) & 0x10000000) != 0;
  v13 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 244))(a2, v22);
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 288))(a2);
  if ( v14 )
  {
    v15 = *(_DWORD *)(this + 412);
    if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] != v15 >> 12 )
      v16 = 0;
    else
      v16 = off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1];
    v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 1080))(v14, v16) != 3;
  }
  if ( !v28 && v13 == 1 && (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 244))(a2, v22) )
  {
    if ( sub_103D2000((_DWORD *)this) || *(_DWORD *)(this + 1128) == -1 )
    {
      if ( *(float *)(this + 1160) <= (double)*(float *)(dword_106B31C8 + 12) )
      {
        sub_1023C380((_DWORD *)this, (int)"NPC_CombineBall.KillImpact", 0.0, 0);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2)
          && (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) != 3
          && *(_DWORD *)(dword_10698344 + 48) )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) != 2
            || (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) == 2 && !*(_BYTE *)(this + 1141) )
          {
            v27 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 448))(a2);
            *(_BYTE *)(this + 1141) = 1;
            *(float *)&v22[13] = (float)v27;
          }
        }
        else
        {
          *(float *)(this + 1160) = *(float *)(dword_106B31C8 + 12) + 0.1;
        }
        sub_100D9E70((int *)a2, a2, v22);
      }
    }
    else
    {
      if ( *(_BYTE *)(this + 1144) == 2
        && ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2)
         || __RTDynamicCast(
              a2,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&CRagdollProp `RTTI Type Descriptor',
              0)) )
      {
        sub_1023C380((_DWORD *)this, (int)"NPC_CombineBall.KillImpact", 0.0, 0);
      }
      if ( *(_BYTE *)(this + 1144) != 1 )
      {
        v17 = sub_10019B00((_DWORD *)this);
        v18 = sub_1001F4B0(v17);
        if ( v18 && sub_103D2120(this) && sub_100CFD20(a2) )
          (*(void (__thiscall **)(int, int, _DWORD, const char *, _DWORD *))(*(_DWORD *)off_10627F88 + 120))(
            off_10627F88,
            v18,
            0,
            "weapon_ar2",
            v22);
        sub_103D1DC0((_BYTE *)this, (_DWORD *)a2);
        if ( *(char **)(a2 + 92) == "npc_hunter" || sub_100D6240((_DWORD *)a2, "npc_hunter") )
          goto LABEL_41;
      }
    }
  }
  if ( *(_BYTE *)(this + 1144) )
  {
    v23 = *(float *)(a5 + 12 * a4 + 56);
    v24 = *(float *)(a5 + 12 * a4 + 60);
    v25 = *(float *)(a5 + 12 * a4 + 64);
    off_10689714();
    v20 = *(float *)(this + 1148);
    v23 = v23 * v20;
    v24 = v24 * v20;
    v19 = v20 * v25;
  }
  else
  {
    v23 = *(float *)(a5 + 12 * a4 + 32);
    v24 = *(float *)(a5 + 12 * a4 + 36);
    v19 = *(float *)(a5 + 12 * a4 + 40);
  }
  v21 = *(_DWORD *)(a5 + 4 * a4);
  v25 = v19;
  sub_101BA870(v21, (int *)&v23);
}
