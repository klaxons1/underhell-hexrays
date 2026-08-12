int sub_1018C0B0()
{
  if ( (dword_10445D44 & 1) == 0 )
  {
    dword_10445D44 |= 1u;
    sub_1009AED0((int)&unk_10445C18, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10445C54, (int)"baseclass", 0, 0, (int)off_103E9F64, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10445C90, (int)"m_vecOrigin", 32, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10445CCC, (int)"m_vecAngles", 44, 12, 0, (int)sub_1009ADD0);
    sub_10116070((int)&unk_10445D08, (int)"m_bBlockedSpawner", 56, 1);
  }
  sub_1009AC10(dword_10445D84, (int)&unk_10445C54, 4, (int)"DT_TEAntlionDust");
  return 1;
}
