int *sub_10163960()
{
  if ( (dword_106B4D3C & 1) == 0 )
  {
    dword_106B4D3C |= 1u;
    dword_106B4D20 = (int)"CGameWeaponManager";
    dword_106B4D28 = 0;
    dword_106B4D2C = 0;
    dword_106B4D30 = 0;
    dword_106B4D34 = 0;
    dword_106B4D38 = 0;
    dword_106B4D24 = 18;
    atexit(sub_10471B20);
  }
  dword_10628280 = (int)&dword_1060F348;
  if ( (dword_106B4D3C & 2) == 0 )
  {
    dword_106B4D3C |= 2u;
    dword_106283F8 = (int)sub_100390B0((char **)&dword_106B4D20, "Think");
    word_10628404 = 1;
    dword_10628414 = 0;
    dword_10628418 = 0;
    dword_1062841C = 0;
    dword_10628420 = 0;
    dword_10628424 = 0;
    word_10628406 = 32;
    word_1062843A = 8;
    word_10628438 = 1;
    dword_10628448 = 0;
    dword_1062844C = 0;
    dword_10628450 = 0;
    dword_10628454 = 0;
    dword_10628458 = 0;
    word_1062846C = 1;
    dword_1062847C = 0;
    dword_10628480 = 0;
    dword_10628484 = 0;
    dword_10628488 = 0;
    dword_1062848C = 0;
    dword_106283FC = 0;
    dword_10628400 = 0;
    dword_10628408 = 0;
    dword_1062840C = 0;
    dword_10628410 = (int)sub_103D79E0;
    dword_10628428 = 5;
    dword_1062842C = (int)"InputSetMaxPieces";
    dword_10628430 = 0;
    dword_10628434 = 0;
    dword_1062843C = (int)"SetMaxPieces";
    dword_10628440 = 0;
    dword_10628444 = (int)sub_101632A0;
    dword_1062845C = 1;
    dword_10628460 = (int)"InputSetAmmoModifier";
    dword_10628464 = 0;
    dword_10628468 = 0;
    word_1062846E = 8;
    dword_10628470 = (int)"SetAmmoModifier";
    dword_10628474 = 0;
    dword_10628478 = (int)sub_101632D0;
    dword_10628490 = 11;
    dword_10628494 = (int)"m_ManagedNonWeapons";
    dword_10628498 = 816;
    dword_1062849C = 0;
    word_106284A0 = 1;
    word_106284A2 = 2;
    dword_106284A4 = 0;
    if ( (dword_106950B0 & 1) == 0 )
    {
      dword_106950B0 |= 1u;
      dword_106950AC = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::`vftable';
    }
    dword_106284A8 = (int)&dword_106950AC;
    dword_106284AC = 0;
    dword_106284B0 = 0;
    dword_106284B4 = 0;
    dword_106284B8 = 0;
    dword_106284BC = 0;
    dword_106284C0 = 0;
  }
  dword_10628278 = 8;
  dword_10628274 = (int)&unk_10628324;
  return &dword_10628274;
}
