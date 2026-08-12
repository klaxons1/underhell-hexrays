int __thiscall sub_10085E10(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // ebx
  _DWORD *v3; // esi
  __int16 *v4; // edi
  int v5; // eax
  int v6; // ecx
  int i; // eax
  int v8; // edx
  bool v9; // zf
  _DWORD *v10; // edx
  int v11; // eax
  int result; // eax
  int v14; // [esp+Ch] [ebp-4h]

  v1 = this;
  v2 = 0;
  *this = &CAI_Network::`vftable';
  if ( this[2] )
  {
    v14 = 0;
    if ( (int)this[1] > 0 )
    {
      do
      {
        v3 = *(_DWORD **)(v1[2] + 4 * v14);
        if ( (int)v3[21] > 0 )
        {
          do
          {
            v4 = *(__int16 **)(v3[18] + 4 * v2);
            if ( v4 )
            {
              v5 = sub_10074630(v4, v14);
              if ( v5 > v14 && v5 < this[1] )
              {
                v6 = *(_DWORD *)(this[2] + 4 * v5);
                for ( i = 0; i < *(_DWORD *)(v6 + 84); ++i )
                {
                  v8 = *(_DWORD *)(v6 + 72);
                  v9 = *(_DWORD *)(v8 + 4 * i) == (_DWORD)v4;
                  v10 = (_DWORD *)(v8 + 4 * i);
                  if ( v9 )
                    *v10 = 0;
                }
              }
              sub_10184660(v4);
            }
            ++v2;
          }
          while ( v2 < v3[21] );
          v1 = this;
          v2 = 0;
        }
        v3[21] = 0;
        if ( (int)v3[20] >= 0 )
        {
          if ( v3[18] )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v3[18]);
            v3[18] = 0;
          }
          v3[19] = 0;
        }
        v11 = v3[18];
        v3[22] = v11;
        if ( (int)v3[20] >= 0 )
        {
          if ( v11 )
          {
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v11);
            v3[18] = 0;
          }
          v3[19] = 0;
        }
        sub_10184660(v3);
        ++v14;
      }
      while ( v14 < v1[1] );
    }
  }
  result = sub_10184660(v1[2]);
  v1[2] = 0;
  return result;
}
