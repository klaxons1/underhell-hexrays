int *sub_10107D90()
{
  if ( (dword_1069A81C & 1) == 0 )
  {
    dword_1069A81C |= 1u;
    dword_1069A800 = (int)"CBtBullet";
    dword_1069A808 = 0;
    dword_1069A80C = 0;
    dword_1069A810 = 0;
    dword_1069A814 = 0;
    dword_1069A818 = 0;
    dword_1069A804 = 9;
    atexit(sub_10470320);
  }
  dword_10613CB8 = (int)&dword_1060D0FC;
  if ( (dword_1069A81C & 2) == 0 )
  {
    dword_1069A81C |= 2u;
    dword_1069A768 = (int)sub_100390B0((char **)&dword_1069A800, "Touch");
    dword_1069A76C = 0;
    dword_1069A770 = 0;
    dword_1069A774 = 2097153;
    dword_1069A778 = 0;
    dword_1069A77C = 0;
    dword_1069A780 = (int)sub_10272970;
    dword_1069A784 = 0;
    dword_1069A788 = 0;
    dword_1069A78C = 0;
    dword_1069A790 = 0;
    dword_1069A794 = 0;
    dword_1069A798 = 0;
    dword_1069A79C = (int)sub_100390B0((char **)&dword_1069A800, "BulletThink");
    flt_1069A7FC = 0.0;
    dword_1069A7A0 = 0;
    dword_1069A7A4 = 0;
    dword_1069A7A8 = 2097153;
    dword_1069A7AC = 0;
    dword_1069A7B0 = 0;
    dword_1069A7B4 = (int)sub_101078D0;
    dword_1069A7B8 = 0;
    dword_1069A7BC = 0;
    dword_1069A7C0 = 0;
    dword_1069A7C4 = 0;
    dword_1069A7C8 = 0;
    dword_1069A7CC = 3;
    dword_1069A7D0 = (int)"m_vforward";
    dword_1069A7D4 = 1220;
    dword_1069A7D8 = 0;
    dword_1069A7DC = 131073;
    dword_1069A7E0 = 0;
    dword_1069A7E4 = 0;
    dword_1069A7E8 = 0;
    dword_1069A7EC = 0;
    dword_1069A7F0 = 12;
    dword_1069A7F4 = 0;
    dword_1069A7F8 = 0;
  }
  dword_10613CB0 = 3;
  dword_10613CAC = (int)&unk_1069A764;
  return &dword_10613CAC;
}
