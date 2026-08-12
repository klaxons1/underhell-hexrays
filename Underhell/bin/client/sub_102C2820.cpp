int sub_102C2820()
{
  int *v0; // eax

  v0 = sub_100E8590();
  return (*(int (__thiscall **)(int *, const char *, int (__stdcall ***)(char *, int, int, int)))(*v0 + 4))(
           v0,
           "teleport_countdown_screen",
           off_103EAE00);
}
