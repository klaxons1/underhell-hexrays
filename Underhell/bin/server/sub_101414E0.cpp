int sub_101414E0()
{
  if ( (dword_106B0CCC & 1) == 0 )
  {
    dword_106B0CCC |= 1u;
    sub_10122040((int)&unk_106B0A20, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121E50((int)&unk_106B0A6C, (int)"m_poolOrigin", 1172, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106B0AB8, (int)"m_angle", 1140, 4, 7, 0, 0.0, 360.0, (int)sub_101412B0);
    sub_10121D30((int)&unk_106B0B04, (int)"m_x", 1128, 4, 7, 0, -255.0, 255.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B0B50, (int)"m_y", 1132, 4, 7, 0, -255.0, 255.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B0B9C, (int)"m_z", 1136, 4, -1, 2, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106B0BE8, (int)"m_nModelIndex", 114, 2, 11, 0, 0);
    sub_10122040((int)&unk_106B0C34, (int)"m_lifeState", 224, 1, -1, 0, 0);
    sub_10121D30((int)&unk_106B0C80, (int)"m_waterLevel", 1184, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_104711D0);
  }
  sub_10121D00(byte_106B0D78, (int)&unk_106B0A6C, 8, (int)off_106239BC[0]);
  return 1;
}
