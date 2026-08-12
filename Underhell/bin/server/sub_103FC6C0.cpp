int __thiscall sub_103FC6C0(_DWORD *this)
{
  int result; // eax
  int v3; // esi
  int v4; // ecx
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // [esp+Ch] [ebp-4h]

  while ( 1 )
  {
    result = this[2462];
    v3 = 0;
    v9 = result;
    if ( result <= 0 )
      break;
    while ( 1 )
    {
      v4 = this[2459] + 8 * v3;
      v5 = *(_DWORD *)(v4 + 4);
      if ( v5 == -1
        || off_1061BE18[4 * (*(_DWORD *)(v4 + 4) & 0xFFF) + 2] != v5 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(v4 + 4) & 0xFFF) + 1]
        || *(float *)v4 + 10.0 < *(float *)(dword_106B31C8 + 12) )
      {
        break;
      }
      result = *(_DWORD *)(v4 + 4);
      if ( result == -1
        || (v6 = &off_1061BE18[4 * (*(_DWORD *)(v4 + 4) & 0xFFF) + 1],
            result = (unsigned int)result >> 12,
            v6[1] != result) )
      {
        v7 = 0;
      }
      else
      {
        v7 = *v6;
      }
      v8 = *(_DWORD *)(v7 + 424);
      if ( v8 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
        if ( (_BYTE)result )
          break;
      }
      if ( ++v3 >= v9 )
        return result;
    }
    if ( this[2462] - v3 - 1 > 0 )
      memcpy((void *)(this[2459] + 8 * v3), (const void *)(this[2459] + 8 * v3 + 8), 8 * (this[2462] - v3 - 1));
    --this[2462];
  }
  return result;
}
