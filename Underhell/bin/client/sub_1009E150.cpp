int sub_1009E150()
{
  if ( (dword_1042DF38 & 1) == 0 )
  {
    dword_1042DF38 |= 1u;
    sub_1009AED0((int)&unk_1042DDD0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1042DE0C, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_1042DE48, (int)"m_vecPlayerMountPositionTop", 1224, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1042DE84, (int)"m_vecPlayerMountPositionBottom", 1236, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1042DEC0, (int)"m_vecLadderDir", 1192, 12, 0, (int)sub_1009ADD0);
    sub_10116070(&unk_1042DEFC, "m_bFakeLadder", 1249, 1);
  }
  sub_1009AC10(dword_1042DFF0, (int)&unk_1042DE0C, 5, (int)"DT_FuncLadder");
  return 1;
}
