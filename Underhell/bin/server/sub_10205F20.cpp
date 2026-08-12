bool __stdcall sub_10205F20(_DWORD *a1)
{
  int v1; // eax
  bool result; // al

  result = 1;
  if ( a1[77] != -1 && off_1061BE18[4 * (a1[77] & 0xFFF) + 2] == a1[77] >> 12 )
  {
    if ( off_1061BE18[4 * (a1[77] & 0xFFF) + 1] )
    {
      v1 = (*(int (**)(void))(*a1 + 288))();
      if ( !v1 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v1 + 1088))(v1) )
        return 0;
    }
  }
  return result;
}
