BOOL __thiscall sub_1004BBC0(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  BOOL result; // eax

  *this = a2;
  if ( a4 )
    v4 = a4 + 4;
  else
    v4 = 0;
  result = 0;
  if ( (unsigned __int8)sub_1007DAB0(a3, v4) )
  {
    v5 = a4 ? a4 + 28 : 0;
    if ( (unsigned __int8)sub_1007DAB0(a3 + 8, v5) )
    {
      v6 = a4 ? a4 + 52 : 0;
      if ( (unsigned __int8)sub_1007DAB0(a3 + 16, v6) )
        return 1;
    }
  }
  return result;
}
