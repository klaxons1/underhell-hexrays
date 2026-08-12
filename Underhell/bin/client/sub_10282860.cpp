int __userpurge sub_10282860@<eax>(int (__thiscall ***a1)(_DWORD)@<ecx>, int a2@<ebp>, char *String1)
{
  int result; // eax

  if ( !_stricmp(String1, "Save") )
  {
    (*a1)[262](a1);
    result = (*((int (__thiscall **)(_DWORD))*a1[114] + 4))(a1[114]);
    if ( (_BYTE)result )
      return (*((int (__thiscall **)(int (__thiscall **)(_DWORD), _DWORD))*a1[119] + 50))(a1[119], 0);
  }
  else if ( !_stricmp(String1, "Exit") )
  {
    if ( (*((unsigned __int8 (__thiscall **)(_DWORD))*a1[114] + 17))(a1[114]) )
      (*((void (__thiscall **)(int (__thiscall **)(_DWORD)))*a1[114] + 15))(a1[114]);
    return (*(int (__thiscall **)(int (__thiscall **)(_DWORD), _DWORD))*a1[114])(a1[114], 0);
  }
  else if ( !_stricmp(String1, "Apply") )
  {
    return (*a1)[262](a1);
  }
  else if ( !_stricmp(String1, "DeletePanel") )
  {
    return (*a1)[264](a1);
  }
  else if ( !_stricmp(String1, "RevertToSaved") )
  {
    return sub_10281F20((int)a1, a2);
  }
  else if ( !_stricmp(String1, "ShowHelp") )
  {
    return sub_10281F50(a1);
  }
  else
  {
    return sub_1024EC70(a1, String1);
  }
  return result;
}
