int sub_100F4A10()
{
  double v0; // st7

  byte_103E19B4 = *(_DWORD *)(dword_10433B84 + 48) != 0;
  sub_10229140(&unk_10433B80, 0);
  unk_103E19A4 = 0;
  v0 = *(float *)off_103DC81C + 1.5;
  algn_103E19B5[0] = 1;
  byte_103E19A0 = 1;
  unk_103E19A8 = v0;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 396))(dword_1041315C, "cancelselect");
  return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 396))(
           dword_1041315C,
           "host_timescale 0.0001");
}
