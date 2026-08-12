char __thiscall sub_1029DBF0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx

  v2 = *(_DWORD *)(this + 24);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1];
    v2 >>= 12;
    if ( v3[1] == v2 )
    {
      if ( *v3 )
      {
        LOBYTE(v2) = sub_1029D950(this);
        if ( (_BYTE)v2 )
          LOBYTE(v2) = (unsigned __int8)sub_10023CB0(*(char **)(this + 4), 2);
      }
    }
  }
  return v2;
}
