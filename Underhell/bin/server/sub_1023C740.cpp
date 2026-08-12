int __cdecl sub_1023C740(int a1)
{
  if ( !dword_106C4FC4 )
    return 0;
  if ( a1 > 127 )
  {
    Msg("SoundPointerForIndex() - Index too large!\n");
    return 0;
  }
  if ( a1 >= 0 )
    return 52 * a1 + dword_106C4FC4 + 812;
  Msg("SoundPointerForIndex() - Index < 0!\n");
  return 0;
}
