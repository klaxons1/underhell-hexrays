int __thiscall sub_1019EFF0(_DWORD *this, char a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // edi
  _DWORD *v7; // esi
  _DWORD *v8; // [esp+4h] [ebp-4h]

  if ( (a2 & 2) != 0 )
  {
    result = (int)(this - 1);
    v4 = *(this - 1);
    v5 = 9 * v4;
    v6 = v4 - 1;
    v8 = this - 1;
    v7 = &this[v5];
    if ( v6 >= 0 )
    {
      do
      {
        v7 -= 9;
        sub_1018EC70(v7);
        if ( (int)v7[2] >= 0 )
        {
          if ( *v7 )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v7);
            *v7 = 0;
          }
          v7[1] = 0;
        }
        --v6;
      }
      while ( v6 >= 0 );
      result = (int)v8;
    }
    if ( (a2 & 1) != 0 )
    {
      sub_10184660(result);
      return (int)v8;
    }
  }
  else
  {
    sub_1018EC70(this);
    if ( (int)this[2] >= 0 )
    {
      if ( *this )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
        *this = 0;
      }
      this[1] = 0;
    }
    if ( (a2 & 1) != 0 )
      sub_10184660((int)this);
    return (int)this;
  }
  return result;
}
