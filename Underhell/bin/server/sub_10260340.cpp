char __cdecl sub_10260340(char *String2, int a2)
{
  _DWORD *v2; // esi

  if ( String2 )
  {
    v2 = sub_1012BF20(&dword_1069E3E0, 0, String2, 0, a2, 0, 0);
    if ( v2 && ((*(int (__thiscall **)(_DWORD *))(*v2 + 144))(v2) & 0x10000000) != 0 )
      return (*(int (__thiscall **)(_DWORD *, int))(*v2 + 280))(v2, a2);
    Warning("Master was null or not a master!\n");
  }
  return 1;
}
