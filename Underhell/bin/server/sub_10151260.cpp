int *sub_10151260()
{
  if ( (dword_106B2694 & 1) == 0 )
  {
    dword_106B2694 |= 1u;
    dword_106B2678 = (int)"CFuncMoveLinear";
    dword_106B2680 = 0;
    dword_106B2684 = 0;
    dword_106B2688 = 0;
    dword_106B268C = 0;
    dword_106B2690 = 0;
    dword_106B267C = 15;
    atexit(sub_10471570);
  }
  dword_10626C4C = (int)&dword_1064E490;
  if ( (dword_106B2694 & 2) == 0 )
  {
    dword_106B2694 |= 2u;
    dword_10626F44 = 0;
    dword_10626F48 = 0;
    dword_10626F4C = 0;
    dword_10626F50 = 0;
    dword_10626F54 = 0;
    dword_10626F58 = 0;
    word_10626F6C = 1;
    dword_10626F40 = (int)off_10614A2C;
    dword_10626F74 = (int)off_10614A2C;
    dword_10626F5C = 11;
    dword_10626F60 = (int)"m_OnFullyClosed";
    dword_10626F64 = 980;
    dword_10626F68 = 0;
    word_10626F6E = 22;
    dword_10626F70 = (int)"OnFullyClosed";
    dword_10626F78 = 0;
    dword_10626F7C = 0;
    dword_10626F80 = 0;
    dword_10626F84 = 0;
    dword_10626F88 = 0;
    dword_10626F8C = 0;
    dword_10626F90 = 0;
    dword_10626F94 = (int)sub_100390B0((char **)&dword_106B2678, "StopMoveSound");
    dword_10626F98 = 0;
    dword_10626F9C = 0;
    dword_10626FA0 = 2097153;
    dword_10626FA4 = 0;
    dword_10626FA8 = 0;
    dword_10626FAC = (int)sub_10150DA0;
    dword_10626FB0 = 0;
    dword_10626FB4 = 0;
    dword_10626FB8 = 0;
    dword_10626FBC = 0;
    dword_10626FC0 = 0;
  }
  dword_10626C44 = 14;
  dword_10626C40 = (int)&unk_10626CEC;
  return &dword_10626C40;
}
