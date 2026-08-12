int __cdecl sub_100744E0(const char *a1)
{
  int result; // eax

  if ( a1 )
  {
    result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_104131C8 + 48))(dword_104131C8, a1);
    if ( result != 0xFFFF )
      return result;
    DevWarning("Client: Missing precache for particle system \"%s\"!\n", a1);
  }
  return 0;
}
