int __thiscall sub_10217B10(int this, int a2, char *String1, int a4)
{
  int result; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  char String[256]; // [esp+8h] [ebp-100h] BYREF

  result = _stricmp(String1, "selfcollisions");
  if ( result )
  {
    result = _stricmp(String1, "collisionpair");
    if ( !result )
    {
      if ( *(_BYTE *)(this + 8) )
      {
        v6 = sub_1025F620(String, a4, 44);
        v7 = atoi(String);
        sub_1025F620(String, v6, 44);
        v8 = atoi(String);
        return (***(int (__thiscall ****)(_DWORD, int, int))(this + 4))(*(_DWORD *)(this + 4), v7, v8);
      }
    }
  }
  else
  {
    *(_BYTE *)(this + 8) = 0;
  }
  return result;
}
