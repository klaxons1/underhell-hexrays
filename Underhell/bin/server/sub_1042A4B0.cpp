int __stdcall sub_1042A4B0(int a1, int a2, int a3, int a4)
{
  int result; // eax

  result = a4;
  if ( a4 > 0 )
  {
    do
    {
      if ( a1 )
        result = (*(int (__thiscall **)(int, const char *, int, int))(*(_DWORD *)a1 + 4))(a1, "\t", 1, a2);
      if ( a3 )
        result = sub_1042DD00("\t", 1u);
      --a4;
    }
    while ( a4 );
  }
  return result;
}
