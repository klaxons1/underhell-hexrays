int __thiscall sub_10297650(int *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int result; // eax
  _DWORD *v6; // eax

  v3 = this[278];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[278] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    result = 0;
  else
    result = *v4;
  if ( result == a2 )
  {
    if ( a2 )
    {
      v6 = (_DWORD *)(*(int (__cdecl **)(int))(*(_DWORD *)a2 + 8))(-1);
      return sub_1002A0F0(this + 313, *v6, a2, (int)this);
    }
    else
    {
      return sub_1002A0F0(this + 313, -1, 0, (int)this);
    }
  }
  return result;
}
