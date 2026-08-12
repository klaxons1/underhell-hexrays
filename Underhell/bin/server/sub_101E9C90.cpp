char __cdecl sub_101E9C90(int a1)
{
  int v1; // ecx
  int v3; // [esp+0h] [ebp-4h] BYREF

  if ( !(unsigned __int8)sub_1025EF10(v1) )
    return Msg("You must be a server admin to use mp_disable_autokick\n");
  if ( *(_DWORD *)a1 != 2 )
    return Msg("Usage: mp_disable_autokick <userid>\n");
  v3 = atoi(*(const char **)(a1 + 1036));
  return sub_101E7CA0(&v3);
}
