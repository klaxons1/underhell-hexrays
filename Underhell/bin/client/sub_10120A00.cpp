int sub_10120A00()
{
  char *v0; // eax
  int result; // eax
  char Destination[512]; // [esp+0h] [ebp-300h] BYREF
  char String[256]; // [esp+200h] [ebp-100h] BYREF

  v0 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 204))(dword_1041315C);
  sub_102282F0(String, v0, 0x100u);
  sub_10228240(String, 92);
  _strlwr(String);
  sub_102287C0(String, Destination, 0x200u);
  sub_10228100((int)Destination, "_level_sounds.txt", 512, -1);
  result = (*(int (__thiscall **)(int, char *, const char *))(*(_DWORD *)(dword_10413188 + 4) + 40))(
             dword_10413188 + 4,
             Destination,
             "GAME");
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_104131AC + 156))(dword_104131AC, Destination);
  return result;
}
