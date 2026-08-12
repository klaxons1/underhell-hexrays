int *sub_10408090()
{
  if ( (dword_106F05A0 & 1) == 0 )
  {
    dword_106F05A0 |= 1u;
    dword_106F0584 = (int)"CAPCMissile";
    dword_106F058C = 0;
    dword_106F0590 = 0;
    dword_106F0594 = 0;
    dword_106F0598 = 0;
    dword_106F059C = 0;
    dword_106F0588 = 11;
    atexit(sub_10479A40);
  }
  dword_10686728 = (int)&dword_106866EC;
  if ( (dword_106F05A0 & 2) == 0 )
  {
    dword_106F05A0 |= 2u;
    dword_10686BA0 = (int)sub_100390B0((char **)&dword_106F0584, "BeginSeekThink");
    word_10686BAC = 1;
    word_10686BAE = 32;
    dword_10686BA4 = 0;
    dword_10686BA8 = 0;
    dword_10686BB0 = 0;
    dword_10686BB4 = 0;
    dword_10686BB8 = (int)sub_10407380;
    dword_10686BBC = 0;
    dword_10686BC0 = 0;
    dword_10686BC4 = 0;
    dword_10686BC8 = 0;
    dword_10686BCC = 0;
    dword_10686BD0 = 0;
    dword_10686BD4 = (int)sub_100390B0((char **)&dword_106F0584, "AugerStartThink");
    word_10686BE2 = 32;
    dword_10686BD8 = 0;
    dword_10686BDC = 0;
    word_10686BE0 = 1;
    dword_10686BE4 = 0;
    dword_10686BE8 = 0;
    dword_10686BEC = (int)sub_104072B0;
    dword_10686BF0 = 0;
    dword_10686BF4 = 0;
    dword_10686BF8 = 0;
    dword_10686BFC = 0;
    dword_10686C00 = 0;
    dword_10686C04 = 0;
    dword_10686C08 = (int)sub_100390B0((char **)&dword_106F0584, "ExplodeThink");
    word_10686C14 = 1;
    dword_10686C0C = 0;
    dword_10686C10 = 0;
    word_10686C16 = 32;
    dword_10686C18 = 0;
    dword_10686C1C = 0;
    dword_10686C20 = (int)sub_10403C90;
    dword_10686C24 = 0;
    dword_10686C28 = 0;
    dword_10686C2C = 0;
    dword_10686C30 = 0;
    dword_10686C34 = 0;
    dword_10686C38 = 0;
    dword_10686C3C = (int)sub_100390B0((char **)&dword_106F0584, "APCSeekThink");
    word_10686C48 = 1;
    dword_10686C40 = 0;
    dword_10686C44 = 0;
    word_10686C4A = 32;
    dword_10686C4C = 0;
    dword_10686C50 = 0;
    dword_10686C54 = (int)sub_10406CA0;
    dword_10686C58 = 0;
    dword_10686C5C = 0;
    dword_10686C60 = 0;
    dword_10686C64 = 0;
    dword_10686C68 = 0;
    dword_10686C6C = 0;
    dword_10686C70 = (int)sub_100390B0((char **)&dword_106F0584, "APCMissileTouch");
    dword_10686C74 = 0;
    dword_10686C78 = 0;
    dword_10686C7C = 2097153;
    dword_10686C80 = 0;
    dword_10686C84 = 0;
    dword_10686C88 = (int)sub_10406C70;
    dword_10686C8C = 0;
    dword_10686C90 = 0;
    dword_10686C94 = 0;
    dword_10686C98 = 0;
    dword_10686C9C = 0;
  }
  dword_10686720 = 11;
  dword_1068671C = (int)&unk_10686A64;
  return &dword_1068671C;
}
