int __thiscall sub_1027BE70(int *this)
{
  int result; // eax
  int *v3; // esi
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  bool v7; // zf
  int v8; // ebx
  int v9; // eax
  _DWORD *v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // edi
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  _DWORD *v20; // ebx
  int v21; // [esp+8h] [ebp-14h]
  int v22; // [esp+Ch] [ebp-10h]
  int v23; // [esp+10h] [ebp-Ch]
  int v24; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]

  result = 0;
  v3 = this + 76;
  this[79] = 0;
  v24 = 0;
  if ( this[56] > 0 )
  {
    v21 = 0;
    do
    {
      v4 = this[61];
      v23 = v21 + this[53];
      for ( i = this[79]; v4 != -1; v4 = *(_DWORD *)(this[58] + v22 + 8) )
      {
        v5 = this[58] + 12 * v4;
        v22 = 12 * v4;
        if ( *(_DWORD *)(*(_DWORD *)v5 + 296) == *(_DWORD *)(v21 + this[53]) )
        {
          if ( *(_DWORD *)(v23 + 32) )
          {
            v6 = i;
            v7 = i == this[79];
            if ( i < this[79] )
            {
              do
              {
                if ( (*(unsigned __int8 (__cdecl **)(int *, int, _DWORD))(v23 + 32))(
                       this,
                       v4,
                       *(_DWORD *)(*(_DWORD *)(*v3 + 4 * v6) + 292)) )
                {
                  break;
                }
                ++v6;
              }
              while ( v6 < this[79] );
              v7 = v6 == this[79];
            }
            v8 = this[58];
            if ( v7 )
            {
              v6 = v3[3];
              v9 = v3[1];
              v10 = (_DWORD *)(v22 + v8);
              if ( v6 + 1 > v9 )
                sub_102AA460(v6 - v9 + 1);
            }
            else
            {
              v11 = v3[3];
              v12 = v3[1];
              v10 = (_DWORD *)(v22 + v8);
              if ( v11 + 1 > v12 )
                sub_102AA460(v11 - v12 + 1);
            }
            ++v3[3];
            v13 = *v3;
            v14 = v3[3] - v6 - 1;
            v7 = v3[3] - v6 == 1;
            v3[4] = *v3;
            if ( v14 >= 0 && !v7 )
              memcpy((void *)(v13 + 4 * v6 + 4), (const void *)(v13 + 4 * v6), 4 * v14);
            v15 = (_DWORD *)(*v3 + 4 * v6);
            if ( v15 )
              *v15 = *v10;
          }
          else
          {
            v16 = v3[3];
            v17 = v3[1];
            if ( v16 + 1 > v17 )
              sub_102AA460(v16 - v17 + 1);
            ++v3[3];
            v18 = *v3;
            v19 = v3[3] - v16 - 1;
            v7 = v3[3] - v16 == 1;
            v3[4] = *v3;
            if ( v19 >= 0 && !v7 )
              memcpy((void *)(v18 + 4 * v16 + 4), (const void *)(v18 + 4 * v16), 4 * v19);
            v20 = (_DWORD *)(*v3 + 4 * v16);
            if ( v20 )
              *v20 = *(_DWORD *)v5;
          }
        }
      }
      v21 += 36;
      result = ++v24;
    }
    while ( v24 < this[56] );
  }
  return result;
}
