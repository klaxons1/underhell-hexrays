int *sub_102E70E0()
{
  if ( (dword_106E15C4 & 1) == 0 )
  {
    dword_106E15C4 |= 1u;
    dword_106E15A8 = (int)"CTriggerWeaponDissolve";
    dword_106E15B0 = 0;
    dword_106E15B4 = 0;
    dword_106E15B8 = 0;
    dword_106E15BC = 0;
    dword_106E15C0 = 0;
    dword_106E15AC = 22;
    atexit(sub_104774B0);
  }
  dword_106677CC = (int)&dword_10651564;
  if ( (dword_106E15C4 & 2) == 0 )
  {
    dword_106E15C4 |= 2u;
    if ( (dword_106E159C & 1) == 0 )
    {
      dword_106E159C |= 1u;
      dword_106E1598 = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CBaseCombatWeapon>,CUtlMemory<CHandle<CBaseCombatWeapon>,int>>,13>::`vftable';
    }
    dword_10667B68 = 0;
    dword_10667B6C = 0;
    dword_10667B70 = 0;
    dword_10667B74 = 0;
    dword_10667B78 = 0;
    word_10667B8C = 1;
    dword_10667B60 = (int)&dword_106E1598;
    dword_10667B64 = 0;
    dword_10667B7C = 11;
    dword_10667B80 = (int)"m_pConduitPoints";
    dword_10667B84 = 1184;
    dword_10667B88 = 0;
    word_10667B8E = 2;
    dword_10667B90 = 0;
    if ( (dword_106950B0 & 1) == 0 )
    {
      dword_106950B0 |= 1u;
      dword_106950AC = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::`vftable';
    }
    dword_10667B9C = 0;
    flt_10667BE0 = 0.0;
    dword_10667BA0 = 0;
    dword_10667BA4 = 0;
    dword_10667BA8 = 0;
    dword_10667BAC = 0;
    word_10667BC0 = 1;
    word_10667BC2 = 2;
    word_10667BF6 = 22;
    word_10667BF4 = 1;
    dword_10667BE4 = 11;
    dword_10667C00 = 0;
    dword_10667C04 = 0;
    dword_10667C08 = 0;
    dword_10667C0C = 0;
    dword_10667C10 = 0;
    dword_10667C14 = 0;
    dword_10667C18 = 11;
    dword_10667BFC = (int)off_10614A2C;
    dword_10667C30 = (int)off_10614A2C;
    word_10667C28 = 1;
    word_10667C2A = 22;
    word_10667C5C = 1;
    dword_10667B94 = (int)&dword_106950AC;
    dword_10667B98 = 0;
    dword_10667BB0 = 26;
    dword_10667BB4 = (int)"m_spriteTexture";
    dword_10667BB8 = 1208;
    dword_10667BBC = 0;
    dword_10667BC4 = 0;
    dword_10667BC8 = 0;
    dword_10667BCC = 0;
    dword_10667BD0 = 0;
    dword_10667BD4 = 4;
    dword_10667BD8 = 0;
    dword_10667BDC = 0;
    dword_10667BE8 = (int)"m_OnDissolveWeapon";
    dword_10667BEC = 1116;
    dword_10667BF0 = 0;
    dword_10667BF8 = (int)"OnDissolveWeapon";
    dword_10667C1C = (int)"m_OnChargingPhyscannon";
    dword_10667C20 = 1140;
    dword_10667C24 = 0;
    dword_10667C2C = (int)"OnChargingPhyscannon";
    dword_10667C34 = 0;
    dword_10667C38 = 0;
    dword_10667C3C = 0;
    dword_10667C40 = 0;
    dword_10667C44 = 0;
    dword_10667C48 = 0;
    dword_10667C4C = 0;
    dword_10667C50 = (int)"InputStopSound";
    dword_10667C54 = 0;
    dword_10667C58 = 0;
    word_10667C5E = 8;
    dword_10667C60 = (int)"StopSound";
    dword_10667C64 = 0;
    dword_10667C68 = (int)sub_102E59E0;
    dword_10667C6C = 0;
    dword_10667C70 = 0;
    dword_10667C74 = 0;
    dword_10667C78 = 0;
    dword_10667C7C = 0;
    dword_10667C80 = 0;
    dword_10667C84 = (int)sub_100390B0((char **)&dword_106E15A8, "DissolveThink");
    dword_10667C88 = 0;
    dword_10667C8C = 0;
    dword_10667C90 = 2097153;
    dword_10667C94 = 0;
    dword_10667C98 = 0;
    dword_10667C9C = (int)sub_102E62E0;
    dword_10667CA0 = 0;
    dword_10667CA4 = 0;
    dword_10667CA8 = 0;
    dword_10667CAC = 0;
    dword_10667CB0 = 0;
  }
  dword_106677C4 = 8;
  dword_106677C0 = (int)&unk_10667B14;
  return &dword_106677C0;
}
