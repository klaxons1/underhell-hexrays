int __stdcall sub_100F6690(int a1)
{
  int result; // eax
  int v2; // esi

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 68))(a1);
  v2 = result;
  if ( result )
  {
    result = sub_100F7460(7);
    if ( (_BYTE)result )
      return sub_100F9A50(a1, v2, 0);
  }
  return result;
}
