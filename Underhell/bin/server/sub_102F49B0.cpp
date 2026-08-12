unsigned int __thiscall sub_102F49B0(_DWORD *this, unsigned int *a2)
{
  unsigned int result; // eax
  int *v5; // ecx
  unsigned int v6; // edi
  int v7; // ecx
  _DWORD *v8; // edi
  int v9; // esi
  int v10; // esi
  _DWORD *v11; // eax
  unsigned int *v12; // [esp+Ch] [ebp+8h]
  unsigned int v13; // [esp+Ch] [ebp+8h]

  result = this[581];
  if ( result == 2 || result == 1 )
  {
    result = *a2;
    if ( *a2 != -1 )
    {
      v5 = &off_1061BE18[4 * (*a2 & 0xFFF) + 1];
      v6 = result >> 12;
      if ( off_1061BE18[4 * (*a2 & 0xFFF) + 2] == *a2 >> 12 )
      {
        result = *v5;
        if ( *v5 )
        {
          v12 = a2 + 1;
          result = a2[1];
          if ( result != -1 )
          {
            result >>= 12;
            if ( off_1061BE18[4 * (a2[1] & 0xFFF) + 2] == result )
            {
              if ( off_1061BE18[4 * (a2[1] & 0xFFF) + 1] )
              {
                v7 = v5[1] == v6 ? *v5 : 0;
                result = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 288))(v7);
                v8 = (_DWORD *)result;
                if ( result )
                {
                  result = sub_1026A890(v12);
                  v13 = result;
                  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
                  {
                    v9 = sub_10261B20();
                    result = v13;
                  }
                  else
                  {
                    v9 = 0;
                  }
                  if ( (_DWORD *)result == this
                    || result == v9
                    && (result = (*(int (__thiscall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v9 + 548))(
                                   v9,
                                   v8,
                                   16449,
                                   0),
                        (_BYTE)result)
                    && (result = (*(int (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 548))(this, v9, 16449, 0),
                        (_BYTE)result) )
                  {
                    v10 = *this;
                    v11 = sub_10019640(v8);
                    return (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD *, _DWORD *))(v10 + 1876))(
                             this,
                             v8,
                             v11,
                             this);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
