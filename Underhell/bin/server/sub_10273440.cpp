char sub_10273440()
{
  const char *v0; // eax
  int v1; // eax

  v0 = *(const char **)(dword_106B31C8 + 60);
  if ( !v0 )
    v0 = String;
  v1 = sub_10123D50((char)v0, *(_DWORD *)(dword_106B31C8 + 64), 0);
  if ( !v1 )
    return 1;
  if ( v1 == 1 )
  {
    Msg("\nAborting map_edit\nWorldcraft not running...\n\n");
    sub_10260160(4, (int)"Worldcraft not running...", 0, 0, 0, 0);
  }
  else
  {
    Msg("\nAborting map_edit\nWC/Engine map versions different...\n\n");
    sub_10260160(4, (int)"WC/Engine map versions different...", 0, 0, 0, 0);
  }
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, "disconnect\n");
  return 0;
}
