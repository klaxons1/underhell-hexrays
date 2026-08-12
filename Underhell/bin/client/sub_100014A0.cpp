int __thiscall sub_100014A0(int this, unsigned __int16 a2, unsigned __int16 a3)
{
  int v4; // ebx
  int v5; // eax
  unsigned __int16 v6; // dx
  int v7; // ecx
  int result; // eax

  sub_100013F0((int *)this, a3);
  v4 = *(_DWORD *)this;
  v5 = 1280 * a3;
  *(_WORD *)(v5 + *(_DWORD *)this + 1278) = a2;
  if ( a2 == 0xFFFF )
  {
    v6 = *(_WORD *)(this + 14);
    *(_WORD *)(v5 + v4 + 1276) = v6;
    *(_WORD *)(this + 14) = a3;
  }
  else
  {
    v7 = 1280 * a2;
    v6 = *(_WORD *)(v7 + v4 + 1276);
    *(_WORD *)(v5 + v4 + 1276) = v6;
    *(_WORD *)(v7 + v4 + 1276) = a3;
  }
  result = 0xFFFF;
  if ( v6 == 0xFFFF )
  {
    ++*(_WORD *)(this + 18);
    *(_WORD *)(this + 12) = a3;
  }
  else
  {
    result = v6;
    *(_WORD *)(1280 * v6 + v4 + 1278) = a3;
    ++*(_WORD *)(this + 18);
  }
  return result;
}
