void __cdecl sub_1046EA60()
{
  int v0; // eax

  v0 = unk_106910A4;
  *(_DWORD *)byte_10691080 = &ConVar::`vftable';
  *(_DWORD *)&byte_10691080[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106910A4 = 0;
  }
  *(_DWORD *)byte_10691080 = &ConCommandBase::`vftable';
}
