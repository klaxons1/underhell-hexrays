int sub_1005F5F0()
{
  if ( (dword_1040DF80 & 1) == 0 )
  {
    dword_1040DF80 |= 1u;
    sub_1009AED0(&unk_1040DE18, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040DE54, "baseclass", 0, 0, off_103DB504, sub_1009AE70);
    sub_1009AED0(&unk_1040DE90, "m_iPhysicsMode", 1972, 4, 0, 0);
    sub_1009AC40(&unk_1040DECC, "m_fMass", 1976, 4, 0, sub_1009ADC0);
    sub_1009AC90(&unk_1040DF08, "m_collisionMins", 1980, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_1040DF44, "m_collisionMaxs", 1992, 12, 0, sub_1009ADD0);
  }
  sub_1009AC10(&unk_1040DE54, 5, "DT_PhysicsPropMultiplayer");
  return 1;
}
