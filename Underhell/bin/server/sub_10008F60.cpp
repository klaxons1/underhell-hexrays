int __cdecl sub_10008F60(int a1, int a2)
{
  int result; // eax

  if ( dword_10690174 )
  {
    dword_105FD560 = a2;
    result = sub_10244E30(a1, a2);
    ++dword_10690178;
  }
  return result;
}
