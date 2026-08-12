void __thiscall sub_103393F0(int this, float *a2)
{
  float v3; // eax
  int v4; // edi
  char *v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  float v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = *a2;
  if ( *(_DWORD *)a2 == dword_106E5B7C )
  {
    v4 = sub_100C9780((char *)this, (int)"weapon_citizenpackage");
    if ( v4 )
    {
      if ( *(_DWORD *)(this + 260) )
      {
        v5 = sub_1025F440("%s_weapon", *(const char **)(this + 260));
        *(_DWORD *)(v4 + 260) = *sub_10162BE0(&a2, v5);
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 952))(this, v4);
    }
  }
  else if ( LODWORD(v3) == dword_106E5B78 )
  {
    if ( *(_DWORD *)(dword_106E613C + 48)
      && (*(const char **)(this + 260) == "griggs" || sub_100D6190((_DWORD *)this, "griggs"))
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1532))(this) )
    {
      v6 = sub_10022C40((_DWORD *)this);
      v7 = (_DWORD *)__RTDynamicCast(
                       v6,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                       (int)&CBaseCombatCharacter `RTTI Type Descriptor',
                       0);
      if ( v7 )
      {
        *(float *)(this + 5704) = *(float *)(dword_106E6214 + 44) + *(float *)(dword_106B31C8 + 12);
        v9[0] = 48.0;
        v9[1] = 0.0;
        v9[2] = 0.0;
        sub_103345A0((void *)this, v7, (int)v9);
      }
    }
    else
    {
      sub_10338860((float *)this, this);
    }
  }
  else
  {
    v8 = LODWORD(v3) - 2050;
    if ( v8 )
    {
      if ( v8 == 1 )
        sub_1023C380((_DWORD *)this, (int)"NPC_Citizen.FootstepRight", a2[3], 0);
      else
        sub_10399420(a2);
    }
    else
    {
      sub_1023C380((_DWORD *)this, (int)"NPC_Citizen.FootstepLeft", a2[3], 0);
    }
  }
}
