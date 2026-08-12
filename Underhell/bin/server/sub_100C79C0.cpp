int __cdecl sub_100C79C0(int a1, int a2, int a3, int a4)
{
  int result; // eax

  if ( dword_106966F4 )
  {
    result = 2 * a2;
    *(_DWORD *)(*(_DWORD *)(dword_106966F4 + 4 * a1) + 8 * result + 8) = a3;
    *(_DWORD *)(*(_DWORD *)(dword_106966F4 + 4 * a1) + 8 * result + 12) = a4;
  }
  return result;
}
