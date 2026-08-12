void __cdecl _freea(void *Memory)
{
  if ( Memory )
  {
    if ( *((_DWORD *)Memory - 2) == 56797 )
      sub_10184660((int)Memory - 8);
  }
}
