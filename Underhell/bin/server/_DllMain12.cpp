BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  BOOL result; // eax

  result = 1;
  if ( fdwReason == 1 )
    dword_106B52B0 = (int)hinstDLL;
  return result;
}
