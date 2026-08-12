HMODULE __cdecl sub_1022CE30(HMODULE hLibModule)
{
  HMODULE result; // eax

  result = hLibModule;
  if ( hLibModule )
    return (HMODULE)FreeLibrary(hLibModule);
  return result;
}
