int __thiscall sub_1007E7B0(_DWORD *this, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx

  v3 = *(_DWORD *)(this[1] + 1676);
  v4 = this[8];
  if ( a3 < 0 || a3 >= *(_DWORD *)(v4 + 4) )
  {
    ++dword_10691DE0;
    sub_1008D160(a2, v3);
    return a2;
  }
  else
  {
    sub_1008D160(a2, v3);
    return a2;
  }
}
