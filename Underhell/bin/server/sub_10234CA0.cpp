int sub_10234CA0()
{
  int result; // eax

  result = dword_106C47D4;
  if ( *(_DWORD *)(dword_106C47D4 + 48) )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(
      dword_106B31D0,
      "vprof_record_start benchmark\n");
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 148))(dword_106B31D0);
  }
  return result;
}
