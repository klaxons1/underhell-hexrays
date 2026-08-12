unsigned int __usercall sub_10135CD0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  char *v4; // eax
  const char *v5; // eax
  char Destination[512]; // [esp+4h] [ebp-204h] BYREF
  _BYTE v8[4]; // [esp+204h] [ebp-4h] BYREF

  v3 = (const char *)a1[251];
  if ( !v3 )
    v3 = String;
  if ( !sub_10429530(v3, ".vmt") )
  {
    v4 = (char *)a1[251];
    if ( !v4 )
      v4 = (char *)String;
    sub_104299C0(Destination, v4, 0x200u);
    sub_10429C20(Destination, ".vmt", 0x200u);
    a1[251] = *(_DWORD *)sub_10162BE0(v8, Destination);
  }
  dword_106AFE90 = *(_DWORD *)sub_10162BE0(v8, "prop_physics");
  v5 = (const char *)a1[251];
  if ( !v5 )
    v5 = String;
  a1[243] = sub_100E8220(a2, v5);
  return sub_100FA9E0(a1);
}
