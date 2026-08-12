int *sub_10128090()
{
  if ( (dword_1069DBC8 & 1) == 0 )
  {
    dword_1069DBC8 |= 1u;
    dword_1069DBAC = (int)"CItemSoda";
    dword_1069DBB4 = 0;
    dword_1069DBB8 = 0;
    dword_1069DBBC = 0;
    dword_1069DBC0 = 0;
    dword_1069DBC4 = 0;
    dword_1069DBB0 = 9;
    atexit(sub_10470A40);
  }
  dword_10619920 = (int)&dword_1060D0FC;
  if ( (dword_1069DBC8 & 2) == 0 )
  {
    dword_1069DBC8 |= 2u;
    dword_1069DB48 = (int)sub_100390B0((char **)&dword_1069DBAC, "CanThink");
    dword_1069DB4C = 0;
    dword_1069DB50 = 0;
    dword_1069DB54 = 2097153;
    dword_1069DB58 = 0;
    dword_1069DB5C = 0;
    dword_1069DB60 = (int)sub_101263E0;
    dword_1069DB64 = 0;
    dword_1069DB68 = 0;
    dword_1069DB6C = 0;
    dword_1069DB70 = 0;
    dword_1069DB74 = 0;
    dword_1069DB78 = 0;
    dword_1069DB7C = (int)sub_100390B0((char **)&dword_1069DBAC, "CanTouch");
    dword_1069DB80 = 0;
    dword_1069DB84 = 0;
    dword_1069DB88 = 2097153;
    dword_1069DB8C = 0;
    dword_1069DB90 = 0;
    dword_1069DB94 = (int)sub_10125760;
    dword_1069DB98 = 0;
    dword_1069DB9C = 0;
    dword_1069DBA0 = 0;
    dword_1069DBA4 = 0;
    dword_1069DBA8 = 0;
  }
  dword_10619918 = 2;
  dword_10619914 = (int)&unk_1069DB44;
  return &dword_10619914;
}
