void __thiscall sub_1029B4A0(_DWORD *this, int a2)
{
  int v3; // eax
  int i; // edi
  char *v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int *v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  char *v13; // eax
  _DWORD *v14; // eax
  const char *v15; // eax
  const char *v16; // ecx
  const char *v17; // eax
  const char *v18; // ecx
  unsigned int v19; // eax
  const char *v20; // ecx
  const char *v21; // eax
  const char *v22; // edi
  const char *v23; // eax
  float v24; // [esp+0h] [ebp-14h]

  v3 = this[212];
  if ( (v3 & 1) == 0 )
    goto LABEL_6;
  if ( (v3 & 2) != 0 )
  {
    sub_1006DCB0(this);
  }
  else
  {
    sub_1006F910(this);
    this[212] |= 2u;
  }
  if ( this[209] )
  {
LABEL_50:
    if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
    {
      v22 = (const char *)this[23];
      if ( !v22 )
        v22 = String;
      v23 = sub_100D6390(this);
      Msg("ACTBUSY: Actbusy goal %s (%s) activated.\n", v22, v23);
    }
    sub_1006FA60(this, a2);
  }
  else
  {
LABEL_6:
    for ( i = 0; i < 20; ++i )
    {
      v5 = (char *)this[i + 280];
      if ( v5 )
      {
        v6 = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, 0, 0, 0);
        if ( !v6 )
        {
          v15 = (const char *)this[i + 280];
          if ( !v15 )
            v15 = String;
          v16 = (const char *)this[65];
          if ( !v16 )
            v16 = String;
          Warning("Unable to find ai_goal_actbusy_queue %s's node %d: %s\n", v16, i, v15);
          sub_1025FAC0((int)this);
          return;
        }
        v7 = __RTDynamicCast(
               (int)v6,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CAI_Hint `RTTI Type Descriptor',
               0);
        if ( v7 )
          this[i + 252] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
        else
          this[i + 252] = -1;
        v8 = this[i + 252];
        if ( v8 == -1
          || (v9 = &off_1061BE18[4 * (this[i + 252] & 0xFFF) + 1],
              v10 = v8 >> 12,
              off_1061BE18[4 * (this[i + 252] & 0xFFF) + 2] != v10)
          || !*v9 )
        {
          v17 = (const char *)this[i + 280];
          if ( !v17 )
            v17 = String;
          v18 = (const char *)this[65];
          if ( !v18 )
            v18 = String;
          Warning("ai_goal_actbusy_queue %s's node %d: '%s' is not an ai_hint.\n", v18, i, v17);
          sub_1025FAC0((int)this);
          return;
        }
        if ( i )
        {
          if ( off_1061BE18[4 * (this[i + 252] & 0xFFF) + 2] == v10 )
            v12 = *v9;
          else
            v12 = 0;
          *(_DWORD *)(v12 + 828) = 1;
        }
        else
        {
          v11 = this[252];
          if ( v11 == -1 || off_1061BE18[4 * (this[252] & 0xFFF) + 2] != v11 >> 12 )
            MEMORY[0x33C] = 0;
          else
            *(_DWORD *)(off_1061BE18[4 * (this[252] & 0xFFF) + 1] + 828) = 0;
        }
      }
      else
      {
        this[i + 252] = -1;
      }
    }
    v13 = (char *)this[300];
    if ( !v13 )
      v13 = (char *)String;
    v14 = sub_1012BF20(&dword_1069E3E0, 0, v13, 0, 0, 0, 0);
    if ( v14 )
      this[277] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v14 + 8))(v14);
    else
      this[277] = -1;
    v19 = this[277];
    if ( v19 != -1
      && off_1061BE18[4 * (this[277] & 0xFFF) + 2] == v19 >> 12
      && off_1061BE18[4 * (this[277] & 0xFFF) + 1] )
    {
      sub_102984B0((int)this);
      v24 = *(float *)(dword_106B31C8 + 12) + 5.0;
      sub_100EC3F0(this, (int)sub_1029B3A0, v24, (int)"ActBusyQueueThinkContext");
      goto LABEL_50;
    }
    v20 = (const char *)this[300];
    if ( !v20 )
      v20 = String;
    v21 = (const char *)this[65];
    if ( !v21 )
      v21 = String;
    Warning("Unable to find ai_goal_actbusy_queue %s's exit node: %s\n", v21, v20);
    sub_1025FAC0((int)this);
  }
}
