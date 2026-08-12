void __thiscall sub_1005D520(void *this)
{
  int i; // edi
  _BYTE *v3; // eax
  _BYTE *v4; // esi
  int v5; // ecx
  _BYTE v6[12]; // [esp+2Ch] [ebp-24h] BYREF
  int v7[3]; // [esp+38h] [ebp-18h] BYREF
  int v8[3]; // [esp+44h] [ebp-Ch] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "CAI_StandoffBehavior::PrescheduleThink", 0, "NPCs", 0, 4);
  nullsub_4(this);
  if ( *(_DWORD *)(dword_10692474 + 48) )
  {
    for ( i = sub_1012BC90(0, "ai_battle_line"); i; i = sub_1012BC90(i, "ai_battle_line") )
    {
      v3 = (_BYTE *)__RTDynamicCast(
                      i,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CAI_BattleLine `RTTI Type Descriptor',
                      0);
      v4 = v3;
      if ( v3[804] )
      {
        (*(void (__thiscall **)(_BYTE *, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v3 + 528))(v3, v6, 0, 0);
        if ( (*((_DWORD *)v4 + 63) & 0x800) != 0 )
          sub_100DAE60(v4);
        v5 = *((_DWORD *)v4 + 63);
        v8[0] = *((int *)v4 + 145);
        v8[1] = *((int *)v4 + 146);
        *(float *)&v8[2] = *((float *)v4 + 147) + 64.0;
        if ( (v5 & 0x800) != 0 )
          sub_100DAE60(v4);
        v7[0] = *((int *)v4 + 145);
        v7[1] = *((int *)v4 + 146);
        *(float *)&v7[2] = *((float *)v4 + 147) - 64.0;
        sub_1011BC50((int)v7, (int)v8, 0, 255, 0, 0, 0.1);
      }
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
