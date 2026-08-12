void __thiscall sub_10058480(int this, int a2)
{
  if ( !a2 )
  {
    *(_DWORD *)(this + 1952) = (*(int (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C
                                                                                          + 280))(
                                 dword_1047C96C,
                                 this + 1184,
                                 "Other textures",
                                 1,
                                 0);
    *(_BYTE *)(this + 1956) = 1;
  }
  if ( *(_BYTE *)(this + 1976) != *(_BYTE *)(this + 1977) )
    *(_BYTE *)(this + 1956) = 1;
}
