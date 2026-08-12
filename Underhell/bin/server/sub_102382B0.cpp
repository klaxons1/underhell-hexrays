int sub_102382B0()
{
  int result; // eax

  if ( !dword_106C4E64 )
  {
    result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31D0 + 20))(
               dword_106B31D0,
               "scripts/sentences.txt",
               0);
    dword_106C4E64 = 1;
  }
  return result;
}
