void __cdecl sub_1046E830()
{
  int v0; // eax

  v0 = unk_1069060C;
  *(_DWORD *)byte_106905E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106905E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069060C = 0;
  }
  *(_DWORD *)byte_106905E8 = &ConCommandBase::`vftable';
}
