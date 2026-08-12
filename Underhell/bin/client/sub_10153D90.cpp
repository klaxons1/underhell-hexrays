int __thiscall sub_10153D90(int this, unsigned __int16 a2, unsigned __int16 a3)
{
  int v4; // ebx
  unsigned __int16 v5; // dx
  int result; // eax

  sub_10153720((int *)this, a3);
  v4 = *(_DWORD *)this;
  *(_WORD *)(*(_DWORD *)this + 48 * a3 + 46) = a2;
  if ( a2 == 0xFFFF )
  {
    v5 = *(_WORD *)(this + 14);
    *(_WORD *)(v4 + 48 * a3 + 44) = v5;
    *(_WORD *)(this + 14) = a3;
  }
  else
  {
    v5 = *(_WORD *)(v4 + 48 * a2 + 44);
    *(_WORD *)(v4 + 48 * a3 + 44) = v5;
    *(_WORD *)(v4 + 48 * a2 + 44) = a3;
  }
  result = 0xFFFF;
  if ( v5 == 0xFFFF )
  {
    ++*(_WORD *)(this + 18);
    *(_WORD *)(this + 12) = a3;
  }
  else
  {
    result = v5;
    *(_WORD *)(v4 + 48 * v5 + 46) = a3;
    ++*(_WORD *)(this + 18);
  }
  return result;
}
