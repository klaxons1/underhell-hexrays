_DWORD *__thiscall sub_101BA320(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // ecx

  *this = a2;
  this[1] = -1;
  if ( a3 )
  {
    v4 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
    v5 = v4;
    this[1] = v4;
    if ( v4 == -1 || (v6 = (_DWORD *)((char *)off_103DCD74 + 16 * (v4 & 0xFFF) + 4), v6[1] != v5 >> 12) )
    {
      MEMORY[0xAC] = *this;
      return this;
    }
    else
    {
      *(_DWORD *)(*v6 + 172) = *this;
      return this;
    }
  }
  else
  {
    this[1] = -1;
    return this;
  }
}
