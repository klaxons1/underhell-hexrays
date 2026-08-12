int sub_10117940()
{
  const char *v0; // eax
  int result; // eax
  char Buffer[512]; // [esp+0h] [ebp-200h] BYREF

  v0 = *(const char **)(dword_106B31C8 + 60);
  if ( !v0 )
    v0 = String;
  sub_10429A00(Buffer, 0x200u, "maps/%s_commentary.txt", (char)v0);
  if ( (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 40))(
         dword_106B31D8 + 4,
         Buffer,
         0) )
  {
    sub_10110F90((_DWORD **)&unk_1069BFA8);
    result = dword_1069C0AC;
    if ( *(_DWORD *)(dword_1069C0AC + 48) )
      byte_1069BF89 = 1;
  }
  else
  {
    byte_1069BF89 = 0;
    return sub_10110F90((_DWORD **)&unk_1069BFA8);
  }
  return result;
}
