int __thiscall sub_1007CA90(int this, unsigned __int16 a2)
{
  int result; // eax

  result = 0xFFFF;
  if ( a2 != 0xFFFF )
  {
    sub_1007C520(this, a2);
    result = 2 * a2;
    *(_WORD *)(*(_DWORD *)(this + 4) + 8 * result) = a2;
    *(_WORD *)(*(_DWORD *)(this + 4) + 8 * result + 2) = *(_WORD *)(this + 20);
    --*(_WORD *)(this + 18);
    *(_WORD *)(this + 20) = a2;
  }
  return result;
}
