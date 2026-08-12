bool __stdcall sub_1015DCF0(int a1, char ArgList)
{
  bool result; // al

  result = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 320))(a1) )
  {
    sub_10272250();
    if ( (unsigned __int8)sub_10272460(a1, ArgList) )
      return 1;
  }
  return result;
}
