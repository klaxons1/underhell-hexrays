void __cdecl sub_10478B50()
{
  int v0; // eax

  v0 = unk_106EB17C;
  *(_DWORD *)byte_106EB158 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EB158[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EB17C = 0;
  }
  *(_DWORD *)byte_106EB158 = &ConCommandBase::`vftable';
}
