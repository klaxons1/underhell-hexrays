int sub_102289E0()
{
  int result; // eax

  if ( g_pCVar )
  {
    if ( byte_10479824 )
    {
      result = (*(int (__stdcall **)(int))(*(_DWORD *)g_pCVar + 32))(dword_103FC114);
      dword_103FC114 = -1;
      byte_10479824 = 0;
    }
  }
  return result;
}
