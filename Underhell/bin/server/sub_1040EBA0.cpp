int *sub_1040EBA0()
{
  if ( (dword_106F0EF8 & 1) == 0 )
  {
    dword_106F0EF8 |= 1u;
    dword_106F0EDC = (int)"CGrenadeBeam";
    dword_106F0EE4 = 0;
    dword_106F0EE8 = 0;
    dword_106F0EEC = 0;
    dword_106F0EF0 = 0;
    dword_106F0EF4 = 0;
    dword_106F0EE0 = 12;
    atexit(sub_10479C40);
  }
  dword_10687E9C = (int)&dword_106121C8;
  if ( (dword_106F0EF8 & 2) == 0 )
  {
    dword_106F0EF8 |= 2u;
    dword_10688198 = (int)sub_100390B0((char **)&dword_106F0EDC, "GrenadeBeamTouch");
    word_106881A4 = 1;
    word_106881A6 = 32;
    dword_1068819C = 0;
    dword_106881A0 = 0;
    dword_106881A8 = 0;
    dword_106881AC = 0;
    dword_106881B0 = (int)sub_1040E520;
    dword_106881B4 = 0;
    dword_106881B8 = 0;
    dword_106881BC = 0;
    dword_106881C0 = 0;
    dword_106881C4 = 0;
    dword_106881C8 = 0;
    dword_106881CC = (int)sub_100390B0((char **)&dword_106F0EDC, "KillBeam");
    dword_106881D0 = 0;
    dword_106881D4 = 0;
    dword_106881D8 = 2097153;
    dword_106881DC = 0;
    dword_106881E0 = 0;
    dword_106881E4 = (int)sub_1040E150;
    dword_106881E8 = 0;
    dword_106881EC = 0;
    dword_106881F0 = 0;
    dword_106881F4 = 0;
    dword_106881F8 = 0;
  }
  dword_10687E94 = 12;
  dword_10687E90 = (int)&unk_10687F8C;
  return &dword_10687E90;
}
