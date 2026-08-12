int __thiscall sub_100ADEF0(_DWORD *this)
{
  int result; // eax
  BOOL v3; // ecx
  int v4; // esi
  int v5; // edx
  int v6; // edi
  int *v7; // ecx
  int v8; // eax
  int v9; // [esp+4h] [ebp-8h]
  int *v10; // [esp+8h] [ebp-4h]

  result = this[7];
  if ( result != -1 )
  {
    v3 = this[2] > 0;
    v4 = v3 - 1;
    if ( v3 )
    {
      do
      {
        if ( v4 >= 0 && v4 < this[2] && v4 <= result && sub_100ACBF0(this, v4) != v4 )
        {
          v5 = this[1];
          v6 = 28 * v4;
          v7 = *(int **)(28 * v4 + v5 + 24);
          v8 = 28 * v4 + v5 + 16;
          v9 = v8;
          v10 = v7;
          if ( v7 )
          {
            sub_10068150(v7);
            sub_10184660(v10);
            v8 = v9;
          }
          *(_DWORD *)(v8 + 8) = 0;
          *(_DWORD *)(v6 + this[1] + 4) = this[6];
          *(_DWORD *)(v6 + this[1]) = v4;
          this[6] = v4;
        }
        result = this[7];
        if ( v4 == result )
          break;
        if ( ++v4 < 0 || v4 >= this[2] )
          v4 = -1;
      }
      while ( v4 != -1 );
    }
    this[4] = -1;
    this[5] = 0;
  }
  return result;
}
