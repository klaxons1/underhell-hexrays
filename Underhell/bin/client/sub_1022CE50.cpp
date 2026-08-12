FARPROC __cdecl sub_1022CE50(HMODULE hModule)
{
  FARPROC result; // eax

  result = (FARPROC)hModule;
  if ( hModule )
    return GetProcAddress(hModule, "CreateInterface");
  return result;
}
