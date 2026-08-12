int __stdcall sub_100748B0(int a1)
{
  int result; // eax

  result = a1;
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10439968 + 20))(dword_10439968, a1);
      return sub_100AE240();
    }
  }
  return result;
}
