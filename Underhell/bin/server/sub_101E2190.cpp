bool __stdcall sub_101E2190(int a1, int a2)
{
  int v2; // eax
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 144))(a1);
    if ( (v2 & 0xF0) != 0 && (a2 & v2) == a2 )
      return 1;
  }
  return result;
}
