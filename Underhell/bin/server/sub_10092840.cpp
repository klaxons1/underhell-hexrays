char *sub_10092840()
{
  char *result; // eax

  result = dword_10693788;
  if ( !dword_10693788 )
  {
    sub_101811E0("ai_ally_speech_manager", -1);
    result = dword_10693788;
    if ( dword_10693788 )
    {
      sub_10260750(dword_10693788);
      return dword_10693788;
    }
  }
  return result;
}
