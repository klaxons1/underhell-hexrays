int sub_1042C0C0()
{
  int result; // eax

  if ( g_pCVar )
  {
    if ( byte_106FE534 )
    {
      result = (*(int (__stdcall **)(int))(*(_DWORD *)g_pCVar + 32))(dword_1068E27C);
      dword_1068E27C = -1;
      byte_106FE534 = 0;
    }
  }
  return result;
}
