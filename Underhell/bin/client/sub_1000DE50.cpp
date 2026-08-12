int sub_1000DE50()
{
  int result; // eax

  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "host_timescale");
  dword_10401978 = result;
  return result;
}
