int *sub_10180770()
{
  if ( (dword_106B65A8 & 1) == 0 )
  {
    dword_106B65A8 |= 1u;
    dword_106B658C = (int)"CLogicActiveAutosave";
    dword_106B6594 = 0;
    dword_106B6598 = 0;
    dword_106B659C = 0;
    dword_106B65A0 = 0;
    dword_106B65A4 = 0;
    dword_106B6590 = 20;
    atexit(sub_10471FF0);
  }
  dword_1062CE60 = (int)&dword_1062CE3C;
  if ( (dword_106B65A8 & 2) == 0 )
  {
    dword_106B65A8 |= 2u;
    dword_1062F578 = (int)sub_100390B0((char **)&dword_106B658C, "SaveThink");
    word_1062F584 = 1;
    dword_1062F594 = 0;
    dword_1062F598 = 0;
    dword_1062F59C = 0;
    dword_1062F5A0 = 0;
    dword_1062F5A4 = 0;
    word_1062F5BA = 8;
    dword_1062F57C = 0;
    dword_1062F580 = 0;
    word_1062F586 = 32;
    dword_1062F588 = 0;
    dword_1062F58C = 0;
    dword_1062F590 = (int)sub_1017D6C0;
    dword_1062F5A8 = 0;
    dword_1062F5AC = (int)"InputEnable";
    dword_1062F5B0 = 0;
    dword_1062F5B4 = 0;
    word_1062F5B8 = 1;
    dword_1062F5BC = (int)"Enable";
    dword_1062F5C0 = 0;
    dword_1062F5C4 = (int)sub_1017E250;
    dword_1062F5C8 = 0;
    dword_1062F5CC = 0;
    dword_1062F5D0 = 0;
    dword_1062F5D4 = 0;
    dword_1062F5D8 = 0;
    dword_1062F5DC = 0;
    dword_1062F5E0 = (int)"InputDisable";
    dword_1062F5E4 = 0;
    dword_1062F5E8 = 0;
    dword_1062F5EC = 524289;
    dword_1062F5F0 = (int)"Disable";
    dword_1062F5F4 = 0;
    dword_1062F5F8 = (int)sub_1017B2E0;
    dword_1062F5FC = 0;
    dword_1062F600 = 0;
    dword_1062F604 = 0;
    dword_1062F608 = 0;
    dword_1062F60C = 0;
  }
  dword_1062CE58 = 7;
  dword_1062CE54 = (int)&unk_1062F4A4;
  return &dword_1062CE54;
}
