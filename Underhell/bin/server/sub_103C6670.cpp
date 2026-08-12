int *sub_103C6670()
{
  if ( (dword_106EBDA4 & 1) == 0 )
  {
    dword_106EBDA4 |= 1u;
    dword_106EBD88 = (int)"CNPC_GroundTurret";
    dword_106EBD90 = 0;
    dword_106EBD94 = 0;
    dword_106EBD98 = 0;
    dword_106EBD9C = 0;
    dword_106EBDA0 = 0;
    dword_106EBD8C = 17;
    atexit(sub_10478D70);
  }
  dword_1067C9E4 = (int)&dword_105FE114;
  if ( (dword_106EBDA4 & 2) == 0 )
  {
    dword_106EBDA4 |= 2u;
    dword_1067CD14 = (int)sub_100390B0((char **)&dword_106EBD88, "DeathEffects");
    word_1067CD20 = 1;
    dword_1067CD30 = 0;
    dword_1067CD34 = 0;
    dword_1067CD38 = 0;
    dword_1067CD3C = 0;
    dword_1067CD40 = 0;
    word_1067CD56 = 22;
    dword_1067CD60 = 0;
    dword_1067CD64 = 0;
    dword_1067CD68 = 0;
    dword_1067CD6C = 0;
    dword_1067CD70 = 0;
    dword_1067CD74 = 0;
    word_1067CD22 = 32;
    word_1067CD8A = 8;
    dword_1067CD18 = 0;
    dword_1067CD1C = 0;
    dword_1067CD24 = 0;
    dword_1067CD28 = 0;
    dword_1067CD2C = (int)sub_103C5590;
    dword_1067CD44 = 11;
    dword_1067CD48 = (int)"m_OnAreaClear";
    dword_1067CD4C = 3620;
    dword_1067CD50 = 0;
    word_1067CD54 = 1;
    dword_1067CD58 = (int)"OnAreaClear";
    dword_1067CD5C = (int)off_10614A2C;
    dword_1067CD78 = 0;
    dword_1067CD7C = (int)"InputEnable";
    dword_1067CD80 = 0;
    dword_1067CD84 = 0;
    word_1067CD88 = 1;
    dword_1067CD8C = (int)"Enable";
    dword_1067CD90 = 0;
    dword_1067CD94 = (int)sub_103C5730;
    dword_1067CD98 = 0;
    dword_1067CD9C = 0;
    dword_1067CDA0 = 0;
    dword_1067CDA4 = 0;
    dword_1067CDA8 = 0;
    dword_1067CDAC = 0;
    dword_1067CDB0 = (int)"InputDisable";
    dword_1067CDB4 = 0;
    dword_1067CDB8 = 0;
    dword_1067CDBC = 524289;
    dword_1067CDC0 = (int)"Disable";
    dword_1067CDC4 = 0;
    dword_1067CDC8 = (int)sub_103C5750;
    dword_1067CDCC = 0;
    dword_1067CDD0 = 0;
    dword_1067CDD4 = 0;
    dword_1067CDD8 = 0;
    dword_1067CDDC = 0;
  }
  dword_1067C9DC = 17;
  dword_1067C9D8 = (int)&unk_1067CA6C;
  return &dword_1067C9D8;
}
