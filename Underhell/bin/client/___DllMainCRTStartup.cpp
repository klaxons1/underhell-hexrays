BOOL __fastcall __DllMainCRTStartup(void *a1, DWORD a2, HINSTANCE hinstDLL)
{
  BOOL v5; // eax
  BOOL v7; // [esp+10h] [ebp-1Ch]

  if ( !a2 && !dword_10481B14 || (a2 == 1 || a2 == 2) && !_CRT_INIT((int)hinstDLL, a2, (int)a1) )
    return 0;
  v5 = DllMain(hinstDLL, a2, a1);
  v7 = v5;
  if ( a2 == 1 && !v5 )
  {
    DllMain(hinstDLL, 0, a1);
    _CRT_INIT((int)hinstDLL, 0, (int)a1);
  }
  if ( (!a2 || a2 == 3) && !_CRT_INIT((int)hinstDLL, a2, (int)a1) )
    return 0;
  return v7;
}
