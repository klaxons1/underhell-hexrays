int __thiscall sub_100C6520(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // [esp+8h] [ebp-8h]
  int v12; // [esp+Ch] [ebp-4h]
  int v13; // [esp+18h] [ebp+8h]

  result = a2;
  v3 = 0;
  if ( a2 >= 0 )
  {
    v5 = this[283];
    if ( a2 < v5 )
    {
      result = 76 * a2;
      v12 = 76 * a2;
      if ( (*(_BYTE *)(76 * a2 + this[280]) & 1) != 0 )
      {
        v13 = 0;
        if ( v5 > 0 )
        {
          do
          {
            v6 = this[280];
            v7 = v3 + v6;
            if ( (*(_BYTE *)(v3 + v6) & 1) != 0 && *(_DWORD *)(v3 + v6 + 60) > *(_DWORD *)(v6 + v12 + 60) )
            {
              v8 = *(_DWORD *)(v7 + 60) - 1;
              v11 = v8;
              v9 = *(_DWORD *)(v7 + 72);
              if ( v9 )
              {
                if ( *(_BYTE *)(v9 + 84) )
                {
                  *(_BYTE *)(v9 + 88) |= 1u;
                }
                else
                {
                  v10 = *(_DWORD **)(v9 + 24);
                  if ( v10 )
                  {
                    *v10 |= 0x101u;
                    *(_WORD *)(sub_10153460(v10) + 2) = 0;
                    v8 = v11;
                  }
                }
              }
              *(_DWORD *)(v7 + 60) = v8;
            }
            v3 += 76;
            ++v13;
          }
          while ( v13 < this[283] );
          result = v12;
        }
        return sub_100C5C50((float *)(result + this[280]), (int)this);
      }
    }
  }
  return result;
}
