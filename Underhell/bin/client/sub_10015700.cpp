int sub_10015700()
{
  if ( (dword_10402B9C & 1) == 0 )
  {
    dword_10402B9C |= 1u;
    sub_1009AED0(&unk_10402AE8, "should_never_see_this", 0, 4, 0, 0);
    sub_101160F0(&unk_10402B24, "m_PredictableID", 148, 4);
    sub_1009AED0(&unk_10402B60, "m_bIsPlayerSimulated", 1108, 1, 0, 0);
  }
  sub_1009AC10(&unk_10402B24, 2, "DT_BeamPredictableId");
  return 1;
}
