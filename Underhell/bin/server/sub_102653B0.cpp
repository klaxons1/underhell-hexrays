__int16 sub_102653B0()
{
  char *v0; // eax
  char String[256]; // [esp+0h] [ebp-104h] BYREF
  __int16 v3; // [esp+100h] [ebp-4h] BYREF

  sub_1042CDD0(&v3);
  v0 = *(char **)(dword_106B31C8 + 60);
  if ( !v0 )
    v0 = (char *)::String;
  sub_104299C0(String, v0, 0x100u);
  _strlwr(String);
  sub_1042CDF0(&v3, String, strlen(String));
  sub_1042CDE0(&v3);
  return v3;
}
