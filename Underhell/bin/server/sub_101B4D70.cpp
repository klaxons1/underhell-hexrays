int __stdcall sub_101B4D70(int a1)
{
  int result; // eax
  int v2; // esi

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 68))(a1);
  v2 = result;
  if ( result )
  {
    result = sub_101C4640(7);
    if ( (_BYTE)result )
      return sub_101C7850(a1, v2, 0);
  }
  return result;
}
