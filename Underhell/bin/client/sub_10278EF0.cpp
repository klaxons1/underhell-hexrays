char __cdecl sub_10278EF0(char *Source)
{
  dword_104394AC = 1;
  if ( sub_1021F310() != 1 )
    Error("Must include memoverride.cpp in your project.");
  strncpy(Destination, Source, 0x100u);
  byte_104818FF = 0;
  setlocale(2, Locale);
  setlocale(5, Locale);
  setlocale(1, Locale);
  setlocale(3, Locale);
  if ( dword_1047CA74 && dword_1047CA68 && dword_1047CA70 && dword_1047CA6C && dword_1047CA7C && dword_1047CA80 )
    return 1;
  Warning("vgui_controls is missing a required interface!\n");
  return 0;
}
