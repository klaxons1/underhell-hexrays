void __thiscall sub_10096130(_DWORD *this, int *a2)
{
  int v3; // eax

  if ( (unsigned __int8)sub_1022E380(4) )
  {
    v3 = this[3] - this[8];
    if ( (this[11] & 1) != 0 )
      sub_1003EE40((_BYTE *)this + 44, a2, (char *)(*this + v3), 1);
    else
      *a2 = *(_DWORD *)(v3 + *this);
    this[3] += 4;
  }
  else
  {
    *a2 = 0;
  }
}
