int __thiscall sub_1014CC30(int this, int a2, int a3)
{
  int v4; // eax
  int (__thiscall *v5)(int, const char *, const char *, int, _DWORD); // edx
  int v6; // eax

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 140))(dword_1041315C);
  if ( v4 )
  {
    sub_1014C310((_DWORD *)(this + 40), v4);
    *(_BYTE *)(this + 10284) = 1;
  }
  v5 = *(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280);
  dword_1043C8E4 = this;
  v6 = v5(dword_1047C96C, "voice/icntlk_pl", "VGUI textures", 1, 0);
  *(_DWORD *)(this + 10280) = v6;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 48))(v6);
  *(_BYTE *)(this + 36) = 0;
  *(_DWORD *)(this + 32) = a2;
  *(_DWORD *)(this + 12) = a3;
  sub_1012CAB0((int)off_103E6EEC[0], "VoiceMask", (int)sub_1014CBE0);
  sub_1012CAB0((int)off_103E6EEC[0], "RequestState", (int)sub_1014CC00);
  return 1;
}
