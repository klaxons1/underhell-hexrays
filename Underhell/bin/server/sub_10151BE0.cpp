int sub_10151BE0()
{
  int result; // eax

  sub_1042C030(4, &off_10627564);
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "developer");
  dword_106B2C88 = result;
  return result;
}
