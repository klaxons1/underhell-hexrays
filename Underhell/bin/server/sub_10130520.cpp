int __usercall sub_10130520@<eax>(int *a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  sub_100BD350();
  v3 = *(const char **)(*(int (__thiscall **)(int *, _BYTE *))(*a1 + 28))(a1, v5);
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  if ( a1[280] )
    return sub_10130470(a1);
  else
    return Warning("CEnvEffectsScript with no script!\n");
}
