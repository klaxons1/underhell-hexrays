int sub_100F9960()
{
  if ( (dword_106998CC & 1) == 0 )
  {
    dword_106998CC |= 1u;
    sub_10122040(&unk_106997E8, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_10234800(&unk_10699834, "m_PredictableID", 136, 4);
    sub_10122040(&unk_10699880, "m_bIsPlayerSimulated", 756, 1, 1, 1, 0);
    atexit(sub_10470190);
  }
  sub_10121D00(&unk_10699834, 2, off_10612A10[0]);
  return 1;
}
