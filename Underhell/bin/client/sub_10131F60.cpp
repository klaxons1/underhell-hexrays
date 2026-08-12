char __cdecl sub_10131F60(int (__cdecl *a1)(const char *, _DWORD))
{
  if ( !(unsigned __int8)sub_10278EF0("CLIENT") )
    return 0;
  if ( !(unsigned __int8)sub_101F42F0("CLIENT", (int)&a1, 1) )
    return 0;
  dword_10439610 = a1("VGUI_InputInternal001", 0);
  if ( !dword_10439610 )
    return 0;
  if ( !byte_10439680 )
  {
    byte_10439680 = 1;
    sub_10242280("CHudTextureHandle", &off_103E7538);
  }
  nullsub_4();
  if ( !sub_101B9A20() )
    return 0;
  (**(void (__thiscall ***)(int, const char *, const char *, _DWORD))dword_1047CA78)(
    dword_1047CA78,
    "resource/ep2_%language%.txt",
    "GAME",
    0);
  return 1;
}
