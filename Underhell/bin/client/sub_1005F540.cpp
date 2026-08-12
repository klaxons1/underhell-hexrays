int sub_1005F540()
{
  if ( (dword_1040DE10 & 1) == 0 )
  {
    dword_1040DE10 |= 1u;
    sub_1009AED0(&unk_1040DD20, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040DD5C, "baseclass", 0, 0, off_103DB4D0, sub_1009AE70);
    sub_1009AED0(&unk_1040DD98, "m_iPhysicsMode", 1204, 4, 0, 0);
    sub_1009AC40(&unk_1040DDD4, "m_fMass", 1208, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_1040DD5C, 3, "DT_PhysBoxMultiplayer");
  return 1;
}
