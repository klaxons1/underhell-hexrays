void __thiscall sub_10214C40(int this, _DWORD *a2)
{
  __int64 v2; // rdi
  int v3; // eax

  HIDWORD(v2) = this;
  LODWORD(v2) = *a2;
  if ( !*(_BYTE *)(this + 1720) )
  {
    v3 = *(_DWORD *)(this + 1672);
    if ( v3 != 2 && v3 != 1 )
    {
      sub_1011FE20(this, this + 1676, 0, 0);
      sub_1010DD80((_DWORD *)(HIDWORD(v2) + 1600), v2, 0.0);
      sub_102141C0((_DWORD *)HIDWORD(v2), 0);
    }
  }
}
