char __thiscall sub_100B8A70(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  unsigned int v5; // eax

  v2 = *(_DWORD *)(this + 3648);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( !sub_101ACC70(v4, 1) && *(_DWORD *)(this + 212) )
  {
    sub_100B8380((_DWORD *)this, *(char **)(this + 212));
    *(_DWORD *)(this + 212) = 0;
  }
  if ( *(_BYTE *)(this + 3695) && !*(_BYTE *)(this + 3692) )
  {
    sub_100B7C30((float *)this);
    LOBYTE(v5) = (unsigned __int8)sub_100B77A0(this);
  }
  else
  {
    v5 = *(_DWORD *)(this + 3644);
    if ( v5 != -1 )
    {
      v5 >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] == v5 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1] )
        {
          sub_100B88D0(this);
          LOBYTE(v5) = sub_100B8490(this);
        }
      }
    }
  }
  return v5;
}
