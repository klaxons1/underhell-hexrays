void __thiscall sub_10056280(int this, int a2, int a3)
{
  int v4; // eax
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  if ( this == 1424 )
    v4 = 0;
  else
    v4 = this - 232;
  if ( (unsigned __int8)sub_100F0010(this - 228, v4) )
  {
    *(_DWORD *)(this + 308) = sub_100F0C50(this + 12);
    sub_10055E80(this - 1424, (int)&savedregs);
    *(_BYTE *)(this + 304) = 1;
  }
}
