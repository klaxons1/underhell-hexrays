int __thiscall sub_100F4A20(_BYTE *this)
{
  sub_10229140(&unk_10433B80, (unsigned __int8)this[44]);
  this[24] = 0;
  sub_100F48B0((int)this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 396))(dword_1041315C, "host_timescale 0");
  return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 396))(dword_1041315C, "toggleconsole");
}
