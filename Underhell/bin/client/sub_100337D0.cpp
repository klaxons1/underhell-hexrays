int __thiscall sub_100337D0(int this)
{
  int v2; // edi
  int result; // eax

  sub_10039ED0(this);
  v2 = sub_1000BAC0((_DWORD *)this);
  result = sub_100422D0();
  if ( v2 == result )
    *(_BYTE *)(this + 2116) = 1;
  return result;
}
