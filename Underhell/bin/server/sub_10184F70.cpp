void __thiscall sub_10184F70(int *this, _DWORD *a2)
{
  __int64 v2; // rdi

  v2 = __PAIR64__((unsigned int)this, (unsigned int)a2);
  if ( sub_10184D10(a2, this[218]) && (*(_BYTE *)(HIDWORD(v2) + 872) & 8) == 0 )
  {
    sub_1010DD80((_DWORD *)(HIDWORD(v2) + 824), v2, 0.0);
    if ( !*(_DWORD *)(HIDWORD(v2) + 876) )
      sub_100DA380((_DWORD *)HIDWORD(v2), (int)a2);
  }
}
