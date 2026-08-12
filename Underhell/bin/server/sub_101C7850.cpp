unsigned __int16 *__cdecl sub_101C7850(int a1, int a2, int a3)
{
  unsigned __int16 *result; // eax

  result = (unsigned __int16 *)(*(_DWORD *)(a2 + 764) >> 7);
  if ( (*(_DWORD *)(a2 + 764) & 0x80) != 0 && dword_106BA7E8 )
  {
    result = (unsigned __int16 *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BA7E8 + 4))(dword_106BA7E8, a2);
    if ( result )
      return (unsigned __int16 *)sub_101C77B0(result, a1, a2, a3);
  }
  return result;
}
