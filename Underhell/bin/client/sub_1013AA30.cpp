int __thiscall sub_1013AA30(_DWORD *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // ecx
  int i; // [esp+4h] [ebp-4h]

  result = this[4] - 1;
  for ( i = result; result >= 0; i = result )
  {
    v3 = *(_DWORD *)(this[1] + 4 * result);
    if ( (*(_BYTE *)(v3 + 16) & 8) != 0 )
    {
      v4 = this[4];
      v5 = 0;
      if ( v4 > 0 )
      {
        v6 = (_DWORD *)this[1];
        while ( *v6 != v3 )
        {
          ++v5;
          ++v6;
          if ( v5 >= v4 )
            goto LABEL_12;
        }
        if ( v5 != -1 )
        {
          v7 = v4 - v5 - 1;
          if ( v7 > 0 )
            memcpy((void *)(this[1] + 4 * v5), (const void *)(this[1] + 4 * v5 + 4), 4 * v7);
          --this[4];
        }
      }
LABEL_12:
      sub_10034930(v3);
      result = i;
    }
    --result;
  }
  return result;
}
