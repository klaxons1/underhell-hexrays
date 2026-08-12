void __thiscall sub_10184FC0(int *this, _DWORD *a2, int a3, int a4, float a5)
{
  __int64 v5; // rdi

  v5 = __PAIR64__((unsigned int)this, (unsigned int)a2);
  if ( sub_10184D10(a2, this[218]) && (*(_BYTE *)(HIDWORD(v5) + 872) & 0x10) == 0 )
  {
    sub_1010DD80((_DWORD *)(HIDWORD(v5) + 848), v5, 0.0);
    if ( !*(_DWORD *)(HIDWORD(v5) + 876) )
      sub_100DA450((_DWORD *)HIDWORD(v5), (int)a2, a3, a4, a5);
  }
}
