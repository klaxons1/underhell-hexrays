unsigned int __thiscall sub_101FE7F0(_DWORD *this, int a2)
{
  unsigned int result; // eax
  signed int v4; // ebx
  int *v5; // ecx
  int v6; // edi
  int v7; // ecx
  signed int i; // [esp+8h] [ebp-4h]

  result = this[207];
  v4 = 0;
  for ( i = result; v4 < i; ++v4 )
  {
    result = *(_DWORD *)(this[204] + 4 * v4);
    if ( result != -1 )
    {
      v5 = &off_1061BE18[4 * (*(_DWORD *)(this[204] + 4 * v4) & 0xFFF) + 1];
      result >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this[204] + 4 * v4) & 0xFFF) + 2] == result )
      {
        v6 = *v5;
        if ( *v5 )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 320))(*v5);
          if ( (_BYTE)result )
            result = (unsigned int)sub_101EE850(v6);
        }
      }
    }
  }
  this[207] = 0;
  if ( (int)this[206] < 0 )
  {
    this[208] = this[204];
  }
  else
  {
    result = this[204];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[204]);
      this[204] = 0;
    }
    v7 = this[204];
    this[205] = 0;
    this[208] = v7;
  }
  return result;
}
