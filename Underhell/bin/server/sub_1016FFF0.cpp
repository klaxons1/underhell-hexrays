int __cdecl sub_1016FFF0(char *Source)
{
  unsigned int v1; // kr00_4

  if ( dword_106B5980 )
    sub_10184660(dword_106B5980);
  v1 = strlen(Source);
  dword_106B5980 = sub_10184390(v1 + 1);
  sub_104299C0((char *)dword_106B5980, Source, v1 + 1);
  return sub_1016FED0((void (__thiscall *)(int))sub_1016FE30);
}
