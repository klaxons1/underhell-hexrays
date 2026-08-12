int __cdecl sub_100384E0(int a1)
{
  int v1; // esi
  int v2; // eax

  if ( a1 )
    v1 = a1 - 24;
  else
    v1 = 0;
  v2 = ((int (__thiscall *)(int (***)(), const char *))(*off_103E4FC0)[2])(off_103E4FC0, "ge_entglow");
  return (*(int (__thiscall **)(int, bool))(*(_DWORD *)v2 + 16))(v2, *(_DWORD *)(*(_DWORD *)(v1 + 28) + 48) != 0);
}
