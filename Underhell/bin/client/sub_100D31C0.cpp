int __cdecl sub_100D31C0(char *Source)
{
  unsigned int v1; // kr00_4

  if ( dword_10431134 )
    sub_10034930(dword_10431134);
  v1 = strlen(Source);
  dword_10431134 = sub_100DDA40(v1 + 1);
  sub_102282F0((char *)dword_10431134, Source, v1 + 1);
  return sub_100D30A0((void (__thiscall *)(int))sub_10239270);
}
