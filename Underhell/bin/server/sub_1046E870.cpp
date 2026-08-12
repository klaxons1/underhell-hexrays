void __cdecl sub_1046E870()
{
  int v0; // eax

  v0 = unk_1069072C;
  *(_DWORD *)byte_10690708 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690708[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069072C = 0;
  }
  *(_DWORD *)byte_10690708 = &ConCommandBase::`vftable';
}
