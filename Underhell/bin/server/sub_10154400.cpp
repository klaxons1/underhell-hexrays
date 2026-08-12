int __cdecl sub_10154400(const char *a1)
{
  int result; // eax

  if ( a1 )
  {
    result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B3228 + 48))(dword_106B3228, a1);
    if ( result != 0xFFFF )
      return result;
    DevWarning("Server: Missing precache for particle system \"%s\"!\n", a1);
  }
  return 0;
}
