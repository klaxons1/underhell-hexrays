int __stdcall sub_1011C0D0(int a1, int a2)
{
  int result; // eax

  if ( a1 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 8))(a1, a2);
  return result;
}
