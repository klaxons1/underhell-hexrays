FARPROC __usercall sub_10430090@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  HMODULE v3; // esi
  char *v5; // [esp-4h] [ebp-8h]

  if ( !*(_DWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 12) )
  {
    v5 = *(char **)(a1 + 4);
    *(_BYTE *)(a1 + 12) = 1;
    *(_DWORD *)(a1 + 8) = sub_1042FF50(a2, v5);
  }
  v3 = *(HMODULE *)(a1 + 8);
  if ( v3 )
    return GetProcAddress(v3, "CreateInterface");
  else
    return 0;
}
