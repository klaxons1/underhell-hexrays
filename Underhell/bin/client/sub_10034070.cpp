int sub_10034070()
{
  if ( (dword_10404FBC & 1) == 0 )
  {
    dword_10404FBC |= 1u;
    sub_1009AED0(&unk_10404F08, "should_never_see_this", 0, 4, 0, 0);
    sub_101160F0(&unk_10404F44, "m_PredictableID", 148, 4);
    sub_1009AED0(&unk_10404F80, "m_bIsPlayerSimulated", 1108, 1, 0, 0);
  }
  sub_1009AC10(&unk_10404F44, 2, "DT_PredictableId");
  return 1;
}
