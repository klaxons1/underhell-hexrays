int __thiscall sub_1007B870(int this, unsigned __int16 a2, unsigned __int16 a3)
{
  int v4; // ebx
  unsigned __int16 v5; // dx
  int result; // eax

  sub_1007B040((int *)this, a3);
  v4 = *(_DWORD *)this;
  *(_WORD *)(*(_DWORD *)this + 16 * a3 + 14) = a2;
  if ( a2 == 0xFFFF )
  {
    v5 = *(_WORD *)(this + 14);
    *(_WORD *)(v4 + 16 * a3 + 12) = v5;
    *(_WORD *)(this + 14) = a3;
  }
  else
  {
    v5 = *(_WORD *)(v4 + 16 * a2 + 12);
    *(_WORD *)(v4 + 16 * a3 + 12) = v5;
    *(_WORD *)(v4 + 16 * a2 + 12) = a3;
  }
  result = 0xFFFF;
  if ( v5 == 0xFFFF )
  {
    ++*(_WORD *)(this + 18);
    *(_WORD *)(this + 12) = a3;
  }
  else
  {
    *(_WORD *)(v4 + 16 * v5 + 14) = a3;
    ++*(_WORD *)(this + 18);
  }
  return result;
}
