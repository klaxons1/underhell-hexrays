char __thiscall sub_100AEC10(int this)
{
  int v2; // eax
  char *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int (***v7)(); // ecx
  int v8; // eax
  char v9; // al
  char String[256]; // [esp+8h] [ebp-100h] BYREF

  v2 = CommandLine_Tier0(this);
  v3 = (char *)(*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v2 + 32))(v2, "-game", "hl2");
  sub_102282F0(String, v3, 0x100u);
  _strlwr(String);
  off_103E0700 = (int (***)())((int (__stdcall *)(int (***)(), char *))(*off_103E0700)[11])(off_103E0700, String);
  sub_102282F0(byte_1042EA68, String, 0x100u);
  sub_10228100((int)byte_1042EA68, "_gamestats.dat", 256, -1);
  sub_102282F0(byte_1042EB68, "GameStatsUpload_", 0x100u);
  sub_10228100((int)byte_1042EB68, String, 256, -1);
  v5 = CommandLine_Tier0(v4);
  v6 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 40))(v5, "-gamestatsloggingtofile");
  v7 = off_103E0700;
  *((_BYTE *)off_103E0700 + 4) ^= (*((_BYTE *)off_103E0700 + 4) ^ (2 * (v6 != 0))) & 2;
  v8 = CommandLine_Tier0(v7);
  *((_BYTE *)off_103E0700 + 4) ^= (*((_BYTE *)off_103E0700 + 4)
                                 ^ ((*(int (__thiscall **)(int, const char *))(*(_DWORD *)v8 + 40))(
                                      v8,
                                      "-gamestatslogging") != 0))
                                & 1;
  if ( dword_104131C4 )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_104131C4 + 12))(dword_104131C4);
    *(_BYTE *)(this + 2473) = v9;
    if ( v9 )
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_104131C4 + 16))(dword_104131C4, &Src, 20);
  }
  sub_100AE9F0((_DWORD *)this);
  if ( Src )
    ((void (__thiscall *)(int (***)()))(*off_103E0700)[4])(off_103E0700);
  else
    *(_BYTE *)(this + 2473) = 0;
  return 1;
}
