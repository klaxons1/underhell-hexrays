int sub_10215AF0()
{
  unsigned int v0; // eax
  _DWORD *v1; // eax

  v0 = dword_1064595C;
  if ( dword_1064595C == -1
    || off_1061BE18[4 * (dword_1064595C & 0xFFF) + 2] != (unsigned int)dword_1064595C >> 12
    || !off_1061BE18[4 * (dword_1064595C & 0xFFF) + 1] )
  {
    v1 = sub_1012BC90(&dword_1069E3E0, 0, "game_gib_manager");
    if ( !v1 )
    {
      dword_1064595C = -1;
      return 0;
    }
    v0 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v1 + 8))(v1);
    dword_1064595C = v0;
  }
  if ( v0 != -1 && off_1061BE18[4 * (v0 & 0xFFF) + 2] == v0 >> 12 )
    return off_1061BE18[4 * (v0 & 0xFFF) + 1];
  return 0;
}
