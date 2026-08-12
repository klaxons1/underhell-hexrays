__int16 *__cdecl sub_100F9A50(int a1, int a2, int a3)
{
  __int16 *result; // eax

  result = (__int16 *)(*(_DWORD *)(a2 + 1132) >> 7);
  if ( (*(_DWORD *)(a2 + 1132) & 0x80) != 0 && dword_10436008 )
  {
    result = (__int16 *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436008 + 4))(dword_10436008, a2);
    if ( result )
      return (__int16 *)sub_100F99F0(result, a1, a2, a3);
  }
  return result;
}
