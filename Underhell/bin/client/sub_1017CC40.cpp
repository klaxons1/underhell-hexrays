void sub_1017CC40()
{
  int v0; // eax

  if ( dword_104452F4 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_104452F4 + 52))(dword_104452F4);
    dword_104452F4 = 0;
  }
  flt_104452F0 = 0.0;
  if ( dword_1047C96C )
  {
    v0 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
           dword_1047C96C,
           "particle/screenspace_fog",
           "ClientEffect textures",
           1,
           0);
    dword_104452F4 = v0;
    if ( v0 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v0 + 48))(v0);
  }
}
