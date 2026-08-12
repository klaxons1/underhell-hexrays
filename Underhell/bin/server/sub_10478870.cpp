void __cdecl sub_10478870()
{
  int v0; // eax

  v0 = unk_106EA284;
  *(_DWORD *)byte_106EA260 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EA260[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EA284 = 0;
  }
  *(_DWORD *)byte_106EA260 = &ConCommandBase::`vftable';
}
