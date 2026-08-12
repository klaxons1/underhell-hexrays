__int64 __thiscall sub_102114C0(int this)
{
  bool v1; // zf
  int v2; // ecx

  v1 = *(_BYTE *)(this + 94) == 0;
  v2 = *(_DWORD *)(this + 76);
  if ( v1 )
    return 1LL << v2;
  else
    return ~((1LL << v2) - 1);
}
