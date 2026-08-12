void __cdecl sub_101319B0(int a1, char a2)
{
  int v2; // edi
  int i; // esi
  unsigned int v4; // eax
  int v5; // ecx

  if ( a2 )
  {
    v2 = dword_106AF128;
    for ( i = 0; i < v2; ++i )
    {
      v4 = *(_DWORD *)(dword_106AF11C + 4 * i);
      if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(dword_106AF11C + 4 * i) & 0xFFF) + 2] != v4 >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (*(_DWORD *)(dword_106AF11C + 4 * i) & 0xFFF) + 1];
      sub_10131920(v5, a1, a2);
    }
  }
}
