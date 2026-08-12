char __thiscall sub_1004C2F0(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx

  v3 = this[212];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[212] & 0xFFF) + 1];
    if ( v4[1] == v3 >> 12 )
    {
      if ( *v4 )
        return 0;
    }
  }
  if ( a2 )
    this[212] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[212] = -1;
  return 1;
}
