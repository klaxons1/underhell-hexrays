int __cdecl sub_100EBA20(_DWORD *a1)
{
  char v1; // al
  int result; // eax

  v1 = *(_BYTE *)(*a1 + 6720);
  if ( (v1 & 8) != 0 && ((v1 & 0x20) == 0 || (unsigned __int8)sub_100F1930()) )
    *(_BYTE *)(*a1 + 6720) &= ~8u;
  *(_BYTE *)(*a1 + 6720) &= ~4u;
  if ( (*(_BYTE *)(*a1 + 6720) & 0x10) != 0 )
  {
    sub_101FA6F0(0.0);
    *(_BYTE *)(*a1 + 6720) &= ~0x10u;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 12))(*a1) )
  {
    sub_101FA6F0(flt_10435858);
  }
  result = sub_101FA3E0(*a1 + 16);
  if ( (_BYTE)result )
    *(_BYTE *)(*a1 + 6720) |= 2u;
  return result;
}
