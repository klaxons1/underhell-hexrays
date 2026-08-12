char *__stdcall sub_1024AA40(int a1)
{
  if ( a1 < 0 || a1 >= dword_106C6860 )
    return (char *)String;
  else
    return &byte_106C6660[16 * a1];
}
