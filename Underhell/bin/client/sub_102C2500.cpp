int sub_102C2500()
{
  int *v0; // eax

  v0 = sub_100797E0();
  return (*(int (__thiscall **)(int *, const char *, const char *, int, int (*)()))(*v0 + 4))(
           v0,
           "player",
           "C_BaseHLPlayer",
           5336,
           sub_1018EF20);
}
