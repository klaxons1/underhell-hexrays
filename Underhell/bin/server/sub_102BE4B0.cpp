int sub_102BE4B0()
{
  if ( (dword_106DDD9C & 1) == 0 )
  {
    dword_106DDD9C |= 1u;
    sub_10122040((int)&unk_106DD890, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121D30((int)&unk_106DD8DC, (int)"m_flFlightSpeed", 56, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234790((int)&unk_106DD928, (int)"m_flLaunchTime", 60, 4);
    sub_10121E50((int)&unk_106DD974, (int)"m_vecParabolaDirection", 80, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106DD9C0, (int)"m_flFlightTime", 52, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106DDA0C, (int)"m_flWorldEnterTime", 92, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106DDA58, (int)"m_flInitialZSpeed", 64, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106DDAA4, (int)"m_flZAcceleration", 68, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106DDAF0, (int)"m_flHorizSpeed", 72, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700((int)&unk_106DDB3C, (int)"m_bLaunchedFromWithinWorld", 76, 1);
    sub_10121E50((int)&unk_106DDB88, (int)"m_vecStartPosition", 4, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106DDBD4, (int)"m_vecEnterWorldPosition", 16, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106DDC20, (int)"m_vecDirection", 28, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106DDC6C, (int)"m_vecStartAngles", 40, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106DDCB8, (int)"m_vecSkyboxOrigin", 96, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106DDD04, (int)"m_flSkyboxScale", 108, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700((int)&unk_106DDD50, (int)"m_bInSkybox", 112, 1);
    atexit(sub_10476A60);
  }
  sub_10121D00(byte_106DDDC4, (int)&unk_106DD8DC, 16, (int)off_10661CA0);
  return 1;
}
