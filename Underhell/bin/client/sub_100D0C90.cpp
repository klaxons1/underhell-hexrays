HMODULE __thiscall sub_100D0C90(void *this)
{
  int v1; // eax

  v1 = CommandLine_Tier0(this);
  if ( !(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v1 + 40))(v1, "-g15") )
    return (HMODULE)Msg("Must run with -g15 to enable support for the LCD Keyboard\n");
  sub_100D0480(dword_10430F68);
  Msg("Reloading G15 config\n");
  return sub_100D0A10((int)dword_10430F68);
}
