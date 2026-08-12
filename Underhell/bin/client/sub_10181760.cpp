int __thiscall sub_10181760(_DWORD *this, int a2)
{
  int result; // eax

  result = strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2), "game_newmap");
  if ( !result )
  {
    (*(void (__thiscall **)(_DWORD *, void *, _DWORD))(*(this - 1) + 8))(this - 1, &unk_10328618, 0);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(_DWORD *, const char *, int))(*(this - 1) + 8))(this - 1, "specgui", 1);
  }
  return result;
}
