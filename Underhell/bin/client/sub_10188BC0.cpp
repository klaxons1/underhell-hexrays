int __stdcall sub_10188BC0(char *String1)
{
  int result; // eax

  if ( !_stricmp(String1, "specnext") )
    return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, "spec_next");
  result = _stricmp(String1, "specprev");
  if ( !result )
    return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, "spec_prev");
  return result;
}
