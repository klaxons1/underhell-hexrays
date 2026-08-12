int __thiscall sub_100D0440(void *this)
{
  int v1; // eax

  v1 = CommandLine_Tier0(this);
  if ( (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v1 + 40))(v1, "-g15") )
    return sub_100D0180(dword_10430F68);
  else
    return Msg("Must run with -g15 to enable support for the LCD Keyboard\n");
}
