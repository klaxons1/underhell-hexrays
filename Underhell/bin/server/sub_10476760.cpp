void __cdecl sub_10476760()
{
  int v0; // eax

  v0 = unk_106DBB44;
  *(_DWORD *)byte_106DBB20 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DBB20[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DBB44 = 0;
  }
  *(_DWORD *)byte_106DBB20 = &ConCommandBase::`vftable';
}
