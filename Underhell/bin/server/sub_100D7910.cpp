int __thiscall sub_100D7910(char **this)
{
  char Destination[512]; // [esp+0h] [ebp-200h] BYREF

  sub_104299C0(Destination, this[13], 0x200u);
  sub_10429C20(Destination, ".manifest", 0x200u);
  return (*(int (__thiscall **)(int, char *, const char *))(*(_DWORD *)(dword_10700A38 + 4) + 40))(
           dword_10700A38 + 4,
           Destination,
           "MOD");
}
