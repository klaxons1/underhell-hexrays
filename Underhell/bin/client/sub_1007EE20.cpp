int __thiscall sub_1007EE20(int this, int a2, int a3)
{
  int result; // eax
  unsigned __int16 v5; // cx
  unsigned __int16 *v6; // edx

  sub_1007E410((int *)this, a3);
  result = *(_DWORD *)this;
  *(_WORD *)(*(_DWORD *)this + 8 * a3 + 6) = a2;
  if ( a2 == 0xFFFF )
  {
    v5 = *(_WORD *)(this + 16);
    *(_WORD *)(result + 8 * a3 + 4) = v5;
    *(_DWORD *)(this + 16) = a3;
  }
  else
  {
    v6 = (unsigned __int16 *)(result + 8 * a2 + 4);
    v5 = *v6;
    *(_WORD *)(result + 8 * a3 + 4) = *v6;
    *v6 = a3;
  }
  if ( v5 == 0xFFFF )
  {
    ++*(_DWORD *)(this + 24);
    *(_DWORD *)(this + 12) = a3;
  }
  else
  {
    *(_WORD *)(result + 8 * v5 + 6) = a3;
    ++*(_DWORD *)(this + 24);
  }
  return result;
}
