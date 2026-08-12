const char *__thiscall sub_100421F0(_DWORD *this)
{
  int v1; // esi
  int v2; // eax

  if ( !dword_1040D3A8 )
    return Locale;
  v1 = *(_DWORD *)(dword_1040D3A8 + 1192);
  v2 = (*(int (__thiscall **)(_DWORD *))(this[2] + 36))(this + 2);
  return (const char *)(*(int (__thiscall **)(int, int))(v1 + 32))(dword_1040D3A8 + 1192, v2);
}
