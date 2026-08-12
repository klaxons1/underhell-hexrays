char __thiscall sub_10160130(int this)
{
  int v2; // eax
  char *v3; // eax
  int v4; // eax
  int v5; // eax
  char v6; // al
  int *v7; // esi
  int v8; // ebx
  int v9; // eax
  char String[256]; // [esp+8h] [ebp-100h] BYREF

  v2 = CommandLine_Tier0();
  v3 = (char *)(*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v2 + 32))(v2, "-game", "hl2");
  sub_104299C0(String, v3, 0x100u);
  _strlwr(String);
  off_10627F88 = (*(int (__stdcall **)(int, char *))(*(_DWORD *)off_10627F88 + 44))(off_10627F88, String);
  sub_104299C0(byte_106B3F18, String, 0x100u);
  sub_10429750((int)byte_106B3F18, "_gamestats.dat", 256, -1);
  sub_104299C0(byte_106B4018, "GameStatsUpload_", 0x100u);
  sub_10429750((int)byte_106B4018, String, 256, -1);
  v4 = CommandLine_Tier0();
  *(_BYTE *)(off_10627F88 + 88) ^= (*(_BYTE *)(off_10627F88 + 88)
                                  ^ (2
                                   * ((*(int (__thiscall **)(int, const char *))(*(_DWORD *)v4 + 40))(
                                        v4,
                                        "-gamestatsloggingtofile") != 0)))
                                 & 2;
  v5 = CommandLine_Tier0();
  *(_BYTE *)(off_10627F88 + 88) ^= (*(_BYTE *)(off_10627F88 + 88)
                                  ^ ((*(int (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 40))(
                                       v5,
                                       "-gamestatslogging") != 0))
                                 & 1;
  if ( dword_106B31CC )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31CC + 12))(dword_106B31CC);
    *(_BYTE *)(this + 2473) = v6;
    if ( v6 )
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_106B31CC + 16))(dword_106B31CC, &byte_106B3F00, 20);
  }
  sub_1015FD90((_DWORD *)this);
  if ( byte_106B4AC1 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 52))(off_10627F88) )
  {
    v7 = (int *)sub_1021A800("Steam");
    v8 = *v7;
    v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)off_10627F88 + 68))(off_10627F88, 0);
    *(_QWORD *)(this + 2480) = (*(int (__thiscall **)(int *, int))(v8 + 12))(v7, v9);
    sub_1021A3E0(v7);
    (*(void (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 160))(off_10627F88);
  }
  if ( byte_106B3F00 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 16))(off_10627F88);
    if ( (**(unsigned __int8 (__thiscall ***)(int))off_10627F88)(off_10627F88) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 172))(off_10627F88) )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)off_10627F88 + 164))(off_10627F88, 0);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 192))(off_10627F88) )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 168))(off_10627F88);
        return 1;
      }
    }
  }
  else
  {
    *(_BYTE *)(this + 2473) = 0;
  }
  return 1;
}
