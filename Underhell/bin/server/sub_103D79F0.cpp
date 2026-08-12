__int16 __usercall sub_103D79F0@<ax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  sub_100BD350();
  v3 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v5);
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  sub_1023B8B0("coast.thumper_hit");
  sub_1023B8B0("coast.thumper_ambient");
  sub_1023B8B0("coast.thumper_dust");
  sub_1023B8B0("coast.thumper_startup");
  sub_1023B8B0("coast.thumper_shutdown");
  return sub_1023B8B0("coast.thumper_large_hit");
}
