void __cdecl sub_10477520()
{
  int v0; // eax

  v0 = unk_106E17C4;
  *(_DWORD *)byte_106E17A0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E17A0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E17C4 = 0;
  }
  *(_DWORD *)byte_106E17A0 = &ConCommandBase::`vftable';
}
