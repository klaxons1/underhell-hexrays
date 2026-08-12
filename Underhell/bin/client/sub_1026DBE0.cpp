int __thiscall sub_1026DBE0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx

  result = a2 - 89;
  if ( a2 == 89 )
  {
    v8 = 1;
    if ( (int)this[56] > 1 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(this[53] + 4 * v8);
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 916))(v9);
        if ( (_BYTE)result )
          break;
        if ( ++v8 >= this[56] )
          return result;
      }
      v10 = *(_DWORD *)(this[53] + 4 * v8);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 952))(v10);
      v11 = *(_DWORD *)(this[53] + 4 * v8 - 4);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 952))(v11);
    }
  }
  else
  {
    result = a2 - 91;
    if ( a2 == 91 )
    {
      result = this[56] - 1;
      v4 = 0;
      if ( result > 0 )
      {
        while ( 1 )
        {
          v5 = *(_DWORD *)(this[53] + 4 * v4);
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 916))(v5);
          if ( (_BYTE)result )
            break;
          if ( ++v4 >= this[56] - 1 )
            return result;
        }
        v6 = *(_DWORD *)(this[53] + 4 * v4);
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 952))(v6);
        v7 = *(_DWORD *)(this[53] + 4 * v4 + 4);
        return (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 952))(v7);
      }
    }
  }
  return result;
}
