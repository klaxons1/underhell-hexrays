bool __stdcall sub_10080F40(int a1)
{
  bool result; // al

  if ( *(_DWORD *)(a1 + 80) != (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 108))(dword_10413168) )
    return 1;
  result = sub_10042310();
  if ( result )
    return 1;
  return result;
}
