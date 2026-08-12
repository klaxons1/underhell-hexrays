_DWORD *__stdcall sub_10192880(char *Source, int a2, int a3, int a4)
{
  _DWORD *v4; // esi

  v4 = (_DWORD *)sub_100DDA40(268);
  if ( !v4 )
    return 0;
  sub_100713C0(v4, a4, Source, dword_1044C2C0);
  *v4 = &CTeleportCountdownScreen::`vftable';
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*v4 + 864))(v4, a2, a3) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*v4 + 120))(v4, 1);
    return 0;
  }
  return v4;
}
