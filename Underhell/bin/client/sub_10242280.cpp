int __cdecl sub_10242280(const char *a1, int a2)
{
  char *v3; // eax
  _DWORD v4[2]; // [esp+4h] [ebp-8h] BYREF

  if ( a1 )
  {
    v4[0] = a1;
    if ( sub_1023CEC0((unsigned __int8 (__cdecl **)(int, int))&off_103FCF74, (int)v4) != -1 )
      return Msg("Already have converter for type %s, ignoring...\n", a1);
  }
  v3 = sub_10001FD0(a1);
  v4[1] = a2;
  v4[0] = v3;
  return sub_10241980((int)&off_103FCF74, (int)v4);
}
