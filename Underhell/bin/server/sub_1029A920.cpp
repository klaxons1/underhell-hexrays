char *__thiscall sub_1029A920(void *this, int *a2)
{
  bool v3; // zf
  char **v5; // ecx
  char *v6; // eax
  char *v7; // esi
  char *v8; // edx
  _DWORD *v9; // eax
  char *result; // eax
  bool v11; // bl
  char *v12; // esi
  _DWORD *v13; // eax
  int v14; // edi
  _BYTE *v15; // esi
  int v16; // edi
  int v17; // ebx
  const char *v18; // esi
  const char *v19; // eax
  int v20; // edx
  char v21; // al
  char String[256]; // [esp+24h] [ebp-11Ch] BYREF
  int v23; // [esp+124h] [ebp-1Ch] BYREF
  char v24[4]; // [esp+128h] [ebp-18h]
  int v25; // [esp+12Ch] [ebp-14h]
  int v26; // [esp+130h] [ebp-10h]
  int v27; // [esp+134h] [ebp-Ch]
  float v28; // [esp+138h] [ebp-8h]
  char v29[4]; // [esp+13Ch] [ebp-4h]
  int v30; // [esp+148h] [ebp+8h]

  v3 = a2[6] == 2;
  v5 = (char **)(a2 + 2);
  v25 = (int)this;
  if ( v3 )
  {
    v6 = *v5;
    if ( !*v5 )
      v6 = (char *)::String;
  }
  else
  {
    v6 = (char *)sub_1010D460((int)v5);
  }
  sub_104299C0(String, v6, 0xFFu);
  v28 = -1.0;
  v26 = 0;
  v29[0] = 0;
  v24[0] = 0;
  v27 = 0;
  v7 = strtok(String, " ");
  if ( !v7 || (v8 = v7, !*v7) )
    v8 = (char *)::String;
  v9 = sub_1012BF20(&dword_1069E3E0, 0, v8, 0, *a2, a2[1], 0);
  if ( !v9 )
    return (char *)Msg(
                     "ai_goal_actbusy input %s fired targeting a non-existant entity (%s).\n",
                     "InputForceNPCToActBusy",
                     v7);
  result = (char *)sub_10295D50((int)v9, "InputForceNPCToActBusy");
  v30 = (int)result;
  if ( result )
  {
    v11 = *(_DWORD *)(dword_10698344 + 48) != 0;
    v12 = strtok(0, " ");
    if ( v12 )
    {
      v13 = sub_1012BF20(&dword_1069E3E0, 0, v12, 0, *a2, a2[1], 0);
      if ( v13 )
      {
        v26 = __RTDynamicCast(
                (int)v13,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CAI_Hint `RTTI Type Descriptor',
                0);
        if ( !v26 )
          return (char *)Msg(
                           "ai_goal_actbusy input ForceNPCToActBusy fired targeting an entity that isn't a hintnode.\n",
                           v12);
        if ( v11 )
          v12 = strtok(0, " ");
      }
    }
    v14 = -1;
    if ( !v11 )
      v12 = strtok(0, " ");
    for ( ; v12; v12 = strtok(0, " ") )
    {
      if ( sub_104291C0(v12, "teleport", 8) )
      {
        if ( sub_104291C0(v12, "nearest", 8) )
        {
          if ( sub_104291C0(v12, "see:", 4) )
          {
            if ( *v12 == 36 )
            {
              v15 = v12 + 1;
              v14 = sub_10002030((int)v15);
              if ( v14 == -1 )
              {
                v16 = *(_DWORD *)(v30 + 4);
                *(_DWORD *)(v16 + 2704) = *sub_10162BE0(&v23, v15);
                v14 = 16;
              }
            }
            else
            {
              v28 = atof(v12);
            }
          }
          else
          {
            v27 = (int)sub_1012BF20(&dword_1069E3E0, 0, v12 + 4, 0, 0, 0, 0);
          }
        }
        else
        {
          v24[0] = 1;
        }
      }
      else
      {
        v29[0] = 1;
      }
    }
    v17 = v25;
    if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
    {
      v18 = *(const char **)(v25 + 92);
      if ( !v18 )
        v18 = ::String;
      v19 = sub_100D6390((_DWORD *)v25);
      Msg("ACTBUSY: Actbusy goal %s (%s) ForceNPCToActBusy input with data: %s.\n", v18, v19, String);
    }
    v20 = v27;
    v21 = v24[0];
    *(float *)(v30 + 48) = *(float *)(v17 + 852);
    return sub_10299F20(v30, v17, (_DWORD *)v26, v28, *(_BYTE *)(v17 + 856), v29[0], v21, v20, v14);
  }
  return result;
}
