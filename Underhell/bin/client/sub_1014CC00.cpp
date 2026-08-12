void *sub_1014CC00()
{
  void *result; // eax
  char *v1; // esi

  result = (void *)dword_1043C8E4;
  if ( dword_1043C8E4 )
  {
    v1 = (char *)dword_1043C8E4;
    if ( *(_DWORD *)(dword_1043C94C + 48) )
      Msg("CVoiceStatus::HandleReqStateMsg\n");
    return sub_1014C610(v1, 1);
  }
  return result;
}
