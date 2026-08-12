void *__thiscall sub_100BAB40(int this)
{
  int v2; // ecx
  void *result; // eax

  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 396))(
    dword_1041315C,
    "gameui_allowescapetoshow\n");
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(this + 44) + 524))(this + 44, 0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(this + 44) + 520))(this + 44, 0);
  v2 = *(_DWORD *)(this + 320);
  if ( v2 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 260))(v2, 0);
    sub_10257CC0(*(_DWORD *)(this + 320));
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 320) + 520))(*(_DWORD *)(this + 320), 0);
    sub_1025A5B0(0);
    sub_10258220(0, 1, 0.25);
    sub_10257890(*(_DWORD *)(this + 320));
  }
  (*(void (__thiscall **)(_DWORD, void *))(**(_DWORD **)(*(_DWORD *)(this + 308) + 208) + 772))(
    *(_DWORD *)(*(_DWORD *)(this + 308) + 208),
    &unk_10302674);
  result = off_103DC81C;
  *(float *)(this + 300) = *((float *)off_103DC81C + 3) + 0.25;
  return result;
}
