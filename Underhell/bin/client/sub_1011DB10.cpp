HMODULE sub_1011DB10()
{
  HMODULE result; // eax

  if ( dword_104376B8 )
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_104376B8 + 8))(dword_104376B8);
  result = hLibModule;
  if ( hLibModule )
    return (HMODULE)sub_1022CE30(hLibModule);
  return result;
}
