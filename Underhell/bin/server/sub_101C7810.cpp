unsigned __int16 *__cdecl sub_101C7810(int a1)
{
  unsigned __int16 *result; // eax

  result = (unsigned __int16 *)(*(_DWORD *)(a1 + 764) >> 4);
  if ( (*(_DWORD *)(a1 + 764) & 0x10) != 0 && dword_106BA7DC )
  {
    result = (unsigned __int16 *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BA7DC + 4))(dword_106BA7DC, a1);
    if ( result )
      return (unsigned __int16 *)sub_101C7750(result, a1);
  }
  return result;
}
