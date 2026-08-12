void __thiscall sub_103892F0(_DWORD *this, int a2)
{
  char **v2; // esi
  char *v4; // eax
  _DWORD *v5; // eax
  const char *v6; // esi
  const char *v7; // eax
  const char *v8; // edi
  const char *v9; // eax
  int v10; // eax
  const char *v11; // esi
  const char *v12; // eax
  const char *v13; // edi
  const char *v14; // eax
  const char *v15; // [esp-4h] [ebp-10h]
  const char *v16; // [esp-4h] [ebp-10h]

  v2 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v2;
    if ( !*v2 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460(a2 + 8);
  }
  v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
  if ( v5 )
  {
    v10 = __RTDynamicCast(
            (int)v5,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CAI_PoliceGoal `RTTI Type Descriptor',
            0);
    if ( v10 )
    {
      sub_102A8740((int)(this + 1219), v10);
    }
    else
    {
      if ( *(_DWORD *)(a2 + 24) == 2 )
      {
        v11 = *v2;
        if ( v11 )
          v12 = v11;
        else
          v12 = String;
      }
      else
      {
        v12 = sub_1010D460((int)v2);
      }
      v13 = (const char *)this[23];
      if ( !v13 )
        v13 = String;
      v16 = v12;
      v14 = sub_100D6390(this);
      DevMsg("SetPoliceGoal: %s (%s)'s target %s is not an ai_goal_police entity!\n", v13, v14, v16);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 24) == 2 )
    {
      v6 = *v2;
      if ( v6 )
        v7 = v6;
      else
        v7 = String;
    }
    else
    {
      v7 = sub_1010D460((int)v2);
    }
    v8 = (const char *)this[23];
    if ( !v8 )
      v8 = String;
    v15 = v7;
    v9 = sub_100D6390(this);
    DevMsg("SetPoliceGoal: %s (%s) unable to find ai_goal_police: %s\n", v8, v9, v15);
  }
}
