void __cdecl sub_1046EA50()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_10691058[4];
  *(_DWORD *)byte_10691038 = &ConVar::`vftable';
  *(_DWORD *)&byte_10691038[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_10691058[4] = 0;
  }
  *(_DWORD *)byte_10691038 = &ConCommandBase::`vftable';
}
