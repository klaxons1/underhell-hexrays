int __thiscall sub_103ABA30(int this)
{
  char *v2; // eax
  char String[256]; // [esp+8h] [ebp-100h] BYREF

  sub_1032C830((float *)this);
  *(_DWORD *)this = &CNPC_CScanner::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_CScanner::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_CScanner::`vftable';
  *(_DWORD *)(this + 3680) = &CNPC_CScanner::`vftable';
  *(_DWORD *)(this + 3916) = -1;
  *(_DWORD *)(this + 3920) = -1;
  *(_DWORD *)(this + 3984) = -1;
  *(_DWORD *)(this + 3972) = 0;
  *(_DWORD *)(this + 3988) = 5;
  *(_DWORD *)(this + 4008) = -1;
  *(_DWORD *)(this + 3996) = 0;
  *(_DWORD *)(this + 4012) = 5;
  sub_1032C7F0();
  if ( dword_10678E3C != dword_10694898 )
  {
    sub_103AA0A0();
    byte_10678E38 = 1;
    dword_10678E3C = dword_10694898;
  }
  *(_WORD *)(this + 3880) = 1;
  *(_BYTE *)(this + 3882) = 0;
  v2 = *(char **)(dword_106B31C8 + 60);
  if ( !v2 )
    v2 = (char *)::String;
  sub_104299C0(String, v2, 0x100u);
  _strlwr(String);
  *(_BYTE *)(this + 3968) = sub_104292D0(String, "d3_c17", 6) == 0;
  return this;
}
