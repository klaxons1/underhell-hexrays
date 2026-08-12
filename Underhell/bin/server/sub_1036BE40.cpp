int __usercall sub_1036BE40@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int result; // eax
  double v4; // st7

  if ( *(_BYTE *)(a1 + 3672) )
    return sub_1036B580(a1, a2);
  result = 1;
  if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
    return result;
  if ( sub_10023D10((_DWORD *)a1, 17) || sub_10023D10((_DWORD *)a1, 18) )
  {
    a2 = *(float *)(a1 + 3688);
    if ( a2 <= *(float *)(dword_106B31C8 + 12) && sub_100BDCE0(a1, 62) != -1 )
    {
      v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             1.0,
             3.0);
      result = 22;
      *(float *)(a1 + 3688) = v4 + *(float *)(dword_106B31C8 + 12);
      return result;
    }
  }
  if ( !*(_BYTE *)(a1 + 3681) )
    return sub_1036B580(a1, a2);
  if ( (*(_BYTE *)(a1 + 2716) & 2) == 0 )
    return 27;
  *(_BYTE *)(a1 + 3681) = 0;
  result = 93;
  *(float *)(a1 + 3684) = *(float *)(dword_106B31C8 + 12);
  return result;
}
