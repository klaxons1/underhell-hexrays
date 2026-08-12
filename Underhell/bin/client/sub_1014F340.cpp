char __cdecl sub_1014F340(int a1, const char *ArgList, unsigned __int16 *a3, int a4)
{
  unsigned __int16 *v4; // esi
  unsigned __int16 v6; // ax
  void ***v7; // ebx
  int v8; // esi
  char Buffer[128]; // [esp+4h] [ebp-88h] BYREF
  const char *v10; // [esp+84h] [ebp-8h] BYREF

  v4 = a3;
  if ( !a3 )
    return 0;
  if ( !ArgList || (v10 = ArgList, v6 = sub_1014E730(&off_103E83E0, (int)&v10), v6 == 0xFFFF) )
  {
    a3 = (unsigned __int16 *)sub_1014F550();
    v6 = sub_1014F2E0(&off_103E83E0, ArgList, (int *)&a3);
  }
  *v4 = v6;
  if ( v6 >= (unsigned __int16)word_103E83F2 || v6 == 0xFFFF )
    v7 = &off_103E8400;
  else
    v7 = *(void ****)(dword_103E83E4 + 16 * v6 + 12);
  if ( !*((_BYTE *)v7 + 4) )
  {
    sub_10228370(Buffer, 0x80u, "scripts/%s", (char)ArgList);
    v8 = sub_1014D9F0(a1, (char)Buffer, a4);
    if ( !v8 )
      return 0;
    ((void (__thiscall *)(void ***, int, const char *))**v7)(v7, v8, ArgList);
    sub_1022AF00(v8);
  }
  return 1;
}
