void __cdecl sub_10477A40()
{
  int v0; // eax

  v0 = unk_106E38A4;
  *(_DWORD *)byte_106E3880 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3880[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E38A4 = 0;
  }
  *(_DWORD *)byte_106E3880 = &ConCommandBase::`vftable';
}
