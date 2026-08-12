int *sub_103C3B20()
{
  if ( (dword_106EBD64 & 1) == 0 )
  {
    dword_106EBD64 |= 1u;
    dword_106EBD48 = (int)"CTurretTipController";
    dword_106EBD50 = 0;
    dword_106EBD54 = 0;
    dword_106EBD58 = 0;
    dword_106EBD5C = 0;
    dword_106EBD60 = 0;
    dword_106EBD4C = 20;
    atexit(sub_10478D40);
  }
  dword_1067BB9C = (int)&dword_1060F348;
  if ( (dword_106EBD64 & 2) == 0 )
  {
    dword_106EBD64 |= 2u;
    dword_1067BD6C = (int)sub_101D3250(8);
    flt_1067BDB8 = 0.0;
    flt_1067BDEC = 0.0;
    dword_1067BD74 = 0;
    dword_1067BD78 = 0;
    dword_1067BD7C = 0;
    dword_1067BD80 = 0;
    dword_1067BD84 = 0;
    word_1067BD98 = 1;
    dword_1067BD70 = 0;
    dword_1067BD88 = 1;
    dword_1067BD8C = (int)"m_angularLimit";
    dword_1067BD90 = 840;
    dword_1067BD94 = 0;
    word_1067BD9A = 2;
    dword_1067BD9C = 0;
    dword_1067BDA0 = 0;
    dword_1067BDA4 = 0;
    dword_1067BDA8 = 0;
    dword_1067BDAC = 4;
    dword_1067BDB0 = 0;
    dword_1067BDB4 = 0;
    dword_1067BDBC = 12;
    dword_1067BDC0 = (int)"m_pParentTurret";
    dword_1067BDC4 = 844;
    dword_1067BDC8 = 0;
    dword_1067BDCC = 131073;
    dword_1067BDD0 = 0;
    dword_1067BDD4 = 0;
    dword_1067BDD8 = 0;
    dword_1067BDDC = 0;
    dword_1067BDE0 = 4;
    dword_1067BDE4 = 0;
    dword_1067BDE8 = 0;
  }
  dword_1067BB94 = 7;
  dword_1067BB90 = (int)&unk_1067BC84;
  return &dword_1067BB90;
}
