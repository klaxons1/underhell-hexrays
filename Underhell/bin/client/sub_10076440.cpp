int __cdecl sub_10076440(int a1)
{
  int result; // eax

  if ( a1 != -1 )
  {
    sub_1007B040(a1);
    result = 2 * (unsigned __int16)a1;
    *(_WORD *)(dword_103DC874 + 16 * (unsigned __int16)a1 + 14) = word_103DC884;
    word_103DC884 = a1;
  }
  return result;
}
