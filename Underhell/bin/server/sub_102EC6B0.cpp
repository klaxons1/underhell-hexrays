__int16 __usercall sub_102EC6B0@<ax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int *v3; // eax
  int v4; // eax
  int (__thiscall *v5)(_DWORD *, int *); // edx
  const char *v6; // eax
  char *v8; // [esp-4h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-4h] BYREF

  a1[115] = *sub_10162BE0(&v9, off_1066857C[a1[280]]);
  sub_100D8500(a1);
  v8 = (&off_106685A4)[a1[280]];
  v3 = sub_102D9B20();
  v4 = sub_100B9D10(v3, v8);
  v5 = *(int (__thiscall **)(_DWORD *, int *))(*a1 + 28);
  a1[281] = v4;
  v6 = *(const char **)v5(a1, &v9);
  if ( !v6 )
    v6 = String;
  sub_100E8220(a2, v6);
  sub_1023B8B0("AmmoCrate.Open");
  return sub_1023B8B0("AmmoCrate.Close");
}
