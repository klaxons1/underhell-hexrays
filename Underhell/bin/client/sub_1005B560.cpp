int __thiscall sub_1005B560(unsigned __int16 *this)
{
  int result; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  bool v8; // sf
  unsigned __int16 v9; // ax
  int v10; // ecx
  int v11; // eax
  int v12; // [esp+4h] [ebp-Ch]
  __int16 v13; // [esp+8h] [ebp-8h]
  int v14; // [esp+Ch] [ebp-4h]

  result = this[24];
  if ( (_WORD)result )
  {
    v3 = result - 1;
    v13 = -1;
    v12 = v3;
    if ( v3 >= 0 )
    {
      do
      {
        v4 = (unsigned __int16)v3;
        if ( (unsigned __int16)v3 < this[24] )
        {
          v5 = *(_DWORD *)this + 40 * (unsigned __int16)v3;
          v14 = v5;
          if ( *(_WORD *)(v5 + 36) != (_WORD)v4 || *(_WORD *)(v5 + 38) == (_WORD)v4 )
          {
            v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
            v7 = v6;
            if ( v6 )
              (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
            if ( *(_DWORD *)(v14 + 24) )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 316))(v7, *(_DWORD *)(v14 + 24));
            if ( *(_DWORD *)(v14 + 28) )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 316))(v7, *(_DWORD *)(v14 + 28));
            if ( v7 )
            {
              (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
              (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
            }
          }
        }
        v3 = 40 * v4;
        *(_WORD *)(v3 + *(_DWORD *)this + 38) = v13;
        *(_WORD *)(v3 + *(_DWORD *)this + 36) = v4;
        LOWORD(v3) = v12 - 1;
        v8 = v12 - 1 < 0;
        v13 = v4;
        --v12;
      }
      while ( !v8 );
    }
    this[22] = 0;
    v9 = this[12];
    if ( v9 != 0xFFFF )
    {
      v10 = *((_DWORD *)this + 3);
      do
      {
        v11 = 10 * v9;
        *(_WORD *)(v10 + v11) = -1;
        *(_WORD *)(v11 + *((_DWORD *)this + 3) + 2) = -1;
        *(_WORD *)(v11 + *((_DWORD *)this + 3) + 4) = 0;
        v10 = *((_DWORD *)this + 3);
        v9 = *(_WORD *)(v10 + v11 + 8);
      }
      while ( v9 != 0xFFFF );
    }
    result = 0;
    this[23] = 0;
  }
  return result;
}
