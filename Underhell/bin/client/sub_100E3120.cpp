int __stdcall sub_100E3120(int a1)
{
  int result; // eax

  if ( a1 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 120))(a1, 1);
  return result;
}
