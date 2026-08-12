int __thiscall sub_101F8E10(int this)
{
  int result; // eax
  int i; // esi

  result = *(_DWORD *)(this + 64);
  if ( result )
  {
    *(_BYTE *)(this + 6597) = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(result + 316) + 96))(
                                *(_DWORD *)(result + 316),
                                0);
    result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(this + 64) + 316) + 100))(
               *(_DWORD *)(*(_DWORD *)(this + 64) + 316),
               0);
    *(_BYTE *)(this + 6598) = result;
  }
  for ( i = *(_DWORD *)(this + 6008); i; i = *(_DWORD *)(i + 5980) )
    result = sub_101F8E10(i);
  return result;
}
