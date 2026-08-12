int __thiscall sub_10276030(_DWORD **this, int a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // esi
  int i; // esi
  bool v8; // cc
  int v9; // eax
  _DWORD *v10; // esi
  int v11; // edx
  int result; // eax
  int v13; // esi
  int v14; // edi
  int v15; // eax

  v3 = (_DWORD *)this[53][3 * a2];
  v4 = v3[53];
  v5 = (_DWORD *)v3[67];
  if ( v4 >= 0 && v4 < v5[54] && v4 <= v5[60] )
  {
    v6 = v5[53];
    if ( *(_DWORD *)(v6 + 12 * v4 + 4) != v4 || *(_DWORD *)(v6 + 12 * v4 + 8) == v4 )
    {
      for ( i = *(_DWORD *)(v6 + 12 * v4); i; i = *(_DWORD *)(v11 + 12 * v9) )
      {
        if ( !*(_BYTE *)(i + 240) )
        {
          v8 = *(_DWORD *)(i + 232) < 1;
          *(_BYTE *)(i + 240) = 1;
          if ( v8
            && ((*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(i + 268) + 964))(
                  *(_DWORD *)(i + 268),
                  *(_DWORD *)(i + 208)),
                *(int *)(i + 232) < 1) )
          {
            *(_BYTE *)(i + 240) = 0;
            *(_BYTE *)(i + 264) = 0;
          }
          else
          {
            (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(i + 256) + 108))(*(_DWORD *)(i + 256), "-");
            sub_10275150(i);
          }
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(i + 268) + 244))(*(_DWORD *)(i + 268), 0, 0);
        }
        v9 = *(_DWORD *)(i + 212);
        v10 = *(_DWORD **)(i + 268);
        if ( v9 < 0 )
          break;
        if ( v9 >= v10[54] )
          break;
        if ( v9 > v10[60] )
          break;
        v11 = v10[53];
        if ( *(_DWORD *)(v11 + 12 * v9 + 4) == v9 && *(_DWORD *)(v11 + 12 * v9 + 8) != v9 )
          break;
      }
    }
  }
  ((void (__thiscall *)(_DWORD **))(*this)[127])(this);
  result = (*(int (__thiscall **)(_DWORD *))(*this[63] + 128))(this[63]);
  if ( (_BYTE)result )
  {
    v13 = sub_102744A0(v3) - 1;
    v14 = (*(int (__thiscall **)(_DWORD *))(*this[63] + 788))(this[63]);
    v15 = (*(int (__thiscall **)(_DWORD *))(*this[63] + 772))(this[63]);
    if ( v13 >= v15 )
    {
      if ( v13 + 1 <= v14 + v15 )
        return ((int (__thiscall *)(_DWORD **, _DWORD, _DWORD))(*this)[61])(this, 0, 0);
      v13 = v13 - v14 + 1;
    }
    (*(void (__thiscall **)(_DWORD *, int))(*this[63] + 768))(this[63], v13);
    return ((int (__thiscall *)(_DWORD **, _DWORD, _DWORD))(*this)[61])(this, 0, 0);
  }
  return result;
}
