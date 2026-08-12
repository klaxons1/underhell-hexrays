int __cdecl sub_10034E30(const char *a1)
{
  int v1; // eax
  int result; // eax

  v1 = sub_100797E0();
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v1 + 12))(v1, a1);
  if ( !result )
  {
    Warning("Can't find factory for entity: %s\n", a1);
    return 0;
  }
  return result;
}
