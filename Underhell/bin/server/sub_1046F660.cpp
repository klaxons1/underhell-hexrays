void __cdecl sub_1046F660()
{
  int v0; // eax

  v0 = unk_1069532C;
  *(_DWORD *)byte_10695308 = &ConVar::`vftable';
  *(_DWORD *)&byte_10695308[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069532C = 0;
  }
  *(_DWORD *)byte_10695308 = &ConCommandBase::`vftable';
}
