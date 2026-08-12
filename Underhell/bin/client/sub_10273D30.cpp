int __thiscall sub_10273D30(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx
  _DWORD *i; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // edi
  bool v10; // zf
  int v11; // eax
  int v12; // [esp+4h] [ebp-4h]
  int v13; // [esp+Ch] [ebp+4h]

  result = 0;
  if ( *(_DWORD *)(this[67] + 268) )
  {
    v7 = this[58] - 1;
    v12 = 0;
    if ( v7 < 0 )
    {
LABEL_13:
      v13 = this[58];
      if ( v7 < v13 )
      {
        while ( !(*(unsigned __int8 (__cdecl **)(_DWORD, _DWORD))(this[67] + 268))(
                   *(_DWORD *)(a2 + 216),
                   *(_DWORD *)(*(_DWORD *)(this[55] + 4 * v7) + 216)) )
        {
          if ( *(_DWORD *)(4 * v7 + this[55]) == a2 )
            return v7;
          if ( ++v7 >= v13 )
            return -1;
        }
      }
      return -1;
    }
    else
    {
      while ( 1 )
      {
        v8 = this[55];
        v9 = (v7 + v12) >> 1;
        v10 = *(_DWORD *)(v8 + 4 * v9) == a2;
        v11 = v8 + 4 * v9;
        if ( v10 )
          return (v7 + v12) >> 1;
        if ( (*(unsigned __int8 (__cdecl **)(_DWORD, _DWORD))(this[67] + 268))(
               *(_DWORD *)(*(_DWORD *)v11 + 216),
               *(_DWORD *)(a2 + 216)) )
        {
          v12 = v9 + 1;
        }
        else
        {
          v7 = v9 - 1;
        }
        if ( v12 > v7 )
          goto LABEL_13;
      }
    }
  }
  else
  {
    v4 = this[58];
    if ( v4 <= 0 )
    {
      return -1;
    }
    else
    {
      for ( i = (_DWORD *)this[55]; *i != a2; --i )
      {
        if ( --result >= v4 )
          return -1;
      }
    }
  }
  return result;
}
