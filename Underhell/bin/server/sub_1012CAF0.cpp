int __thiscall sub_1012CAF0(_DWORD *this, unsigned int a2)
{
  int result; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // ebx
  int i; // esi
  int v8; // ecx

  result = a2;
  if ( a2 != -1 )
  {
    v4 = &this[4 * (a2 & 0xFFF) + 1];
    result = a2 >> 12;
    if ( v4[1] == a2 >> 12 )
    {
      v5 = *v4;
      if ( v5 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
        v6 = result;
        if ( result )
        {
          for ( i = this[16396] - 1; i >= 0; --i )
          {
            v8 = *(_DWORD *)(this[16393] + 4 * i);
            result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 8))(v8, v6);
          }
        }
      }
    }
  }
  return result;
}
