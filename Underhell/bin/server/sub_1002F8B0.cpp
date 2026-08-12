int sub_1002F8B0()
{
  if ( (dword_10691AD4 & 1) == 0 )
  {
    dword_10691AD4 |= 1u;
    sub_10122040(&unk_106916F8, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_10691744,
      "baseclass",
      0,
      off_1060E0C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040(&unk_10691790, "m_lifeState", 224, 1, 3, 1, 0);
    sub_10234700(&unk_106917DC, "m_bPerformAvoidance", 3596, 1);
    sub_10234700(&unk_10691828, "m_bIsMoving", 3597, 1);
    sub_10234700(&unk_10691874, "m_bFadeCorpse", 3598, 1);
    sub_10122040(&unk_106918C0, "m_iDeathPose", 2396, 4, 12, 0, 0);
    sub_10122040(&unk_1069190C, "m_iDeathFrame", 2400, 4, 5, 0, 0);
    sub_10234700(&unk_10691958, "m_bSpeedModActive", 3600, 1);
    sub_10122040(&unk_106919A4, "m_iSpeedModRadius", 3604, 4, -1, 0, 0);
    sub_10122040(&unk_106919F0, "m_iSpeedModSpeed", 3608, 4, -1, 0, 0);
    sub_10234700(&unk_10691A3C, "m_bImportanRagdoll", 3599, 1);
    sub_10121D30((int)&unk_10691A88, (int)"m_flTimePingEffect", 3612, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_1046EA90);
  }
  sub_10121D00(&unk_10691744, 12, off_105FE718[0]);
  return 1;
}
