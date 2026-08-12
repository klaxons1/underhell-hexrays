int sub_10272EE0()
{
  if ( (dword_106CFC74 & 1) == 0 )
  {
    dword_106CFC74 |= 1u;
    sub_10122040((int)&unk_106CFB90, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121D30(
      (int)&unk_106CFBDC,
      (int)"m_flCheapWaterStartDistance",
      800,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30((int)&unk_106CFC28, (int)"m_flCheapWaterEndDistance", 804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10474C20);
  }
  sub_10121D00(byte_106CFCB0, (int)&unk_106CFBDC, 2, (int)off_106561FC[0]);
  return 1;
}
