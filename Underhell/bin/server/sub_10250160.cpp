int __usercall sub_10250160@<eax>(int a1@<edi>)
{
  char *v1; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // eax

  v1 = (char *)sub_100D6340(804);
  v2 = (int)v1;
  if ( v1 )
  {
    sub_100E33C0(v1, 0);
    *(_DWORD *)v2 = &CPlatTrigger::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 108))(v2, "plat_trigger");
  if ( !a1 )
    return sub_1024E840(v2, 0);
  v3 = *(_DWORD *)(a1 + 12);
  if ( !v3 )
    return sub_1024E840(v2, 0);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
  return sub_1024E840(v2, v4);
}
