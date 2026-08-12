int __thiscall sub_1023A9E0(int this)
{
  int result; // eax
  const char *v3; // eax
  char Buffer[260]; // [esp+4h] [ebp-104h] BYREF

  result = sub_1042F730(this + 12);
  if ( *(_BYTE *)(this + 4) && !*(_DWORD *)(this + 8) )
  {
    (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)dword_106B31D8 + 68))(
      dword_106B31D8,
      "reslists",
      "DEFAULT_WRITE_PATH");
    v3 = *(const char **)(dword_106B31C8 + 60);
    if ( !v3 )
      v3 = String;
    sub_10429A00(Buffer, 0x104u, "reslists\\%s.snd", (char)v3);
    result = (*(int (__thiscall **)(int, char *, void *, const char *))(*(_DWORD *)(dword_106B31D8 + 4) + 8))(
               dword_106B31D8 + 4,
               Buffer,
               &unk_104A928C,
               "GAME");
    *(_DWORD *)(this + 8) = result;
  }
  return result;
}
