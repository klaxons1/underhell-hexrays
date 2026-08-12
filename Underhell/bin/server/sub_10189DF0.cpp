int __thiscall sub_10189DF0(void *this)
{
  _BYTE *v2; // ecx
  const char *v3; // eax
  char *v4; // eax
  char Destination[36]; // [esp+4h] [ebp-24h] BYREF

  if ( (dword_106B79DC & 0x1000) != 0 )
    goto LABEL_5;
  v2 = *(_BYTE **)(dword_106B79E4 + 36);
  if ( !v2 || !*v2 )
    goto LABEL_14;
  if ( (dword_106B79DC & 0x1000) != 0 )
  {
LABEL_5:
    v3 = "FCVAR_NEVER_AS_STRING";
  }
  else
  {
    v3 = *(const char **)(dword_106B79E4 + 36);
    if ( !v3 )
      v3 = String;
  }
  if ( (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 4))(dword_106B31D0, v3) )
  {
    if ( (dword_106B79DC & 0x1000) != 0 )
    {
      sub_104299C0(Destination, "FCVAR_NEVER_AS_STRING", 0x20u);
    }
    else
    {
      v4 = *(char **)(dword_106B79E4 + 36);
      if ( !v4 )
        v4 = (char *)String;
      sub_104299C0(Destination, v4, 0x20u);
    }
    goto LABEL_16;
  }
LABEL_14:
  (*(void (__thiscall **)(void *, char *, int, _DWORD))(*(_DWORD *)this + 532))(this, Destination, 32, 0);
  if ( ++dword_106B771C >= dword_106B7738 )
    dword_106B771C = 0;
LABEL_16:
  byte_106B4F38 = 1;
  Msg("CHANGE LEVEL: %s\n", Destination);
  return (**(int (__thiscall ***)(int, char *, _DWORD))dword_106B31D0)(dword_106B31D0, Destination, 0);
}
