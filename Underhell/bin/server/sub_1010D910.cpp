unsigned int __thiscall sub_1010D910(_DWORD *this, int a2)
{
  unsigned int *v3; // esi
  unsigned int result; // eax
  int v5; // ecx
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // edi
  int v9; // ecx

  v3 = (unsigned int *)this[1];
  if ( v3 )
  {
    while ( 1 )
    {
      result = *v3;
      if ( *v3 == -1 || (result >>= 12, off_1061BE18[4 * (*v3 & 0xFFF) + 2] != result) )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (*v3 & 0xFFF) + 1];
      if ( v5 == a2 )
        break;
      if ( !v3[1] )
      {
        v7 = (_DWORD *)sub_1042FCC0(8);
        if ( v7 )
        {
          *v7 = -1;
          v8 = v7;
        }
        else
        {
          v8 = 0;
        }
        v3[1] = (unsigned int)v8;
        if ( a2 )
        {
          v9 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
          result = (unsigned int)this;
          *v8 = v9;
        }
        else
        {
          result = (unsigned int)this;
          *v8 = -1;
        }
        *(_DWORD *)(v3[1] + 4) = 0;
        ++*this;
        return result;
      }
      v3 = (unsigned int *)v3[1];
    }
  }
  else
  {
    result = sub_1042FCC0(8);
    if ( result )
    {
      *(_DWORD *)result = -1;
      v6 = (_DWORD *)result;
    }
    else
    {
      v6 = 0;
    }
    this[1] = v6;
    if ( a2 )
    {
      result = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
      *v6 = result;
    }
    else
    {
      *v6 = -1;
    }
    *(_DWORD *)(this[1] + 4) = 0;
    *this = 1;
  }
  return result;
}
