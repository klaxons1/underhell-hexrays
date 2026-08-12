_DWORD *__thiscall sub_101C32F0(_DWORD *this, int a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // ebx
  int v12; // edi
  int v13; // ebx
  int v14; // eax
  _DWORD *v15; // ecx
  int v17; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]
  int v19; // [esp+18h] [ebp+8h]

  this[1] = a2;
  *this = &CPushBlockerEnum::`vftable';
  this[3] = &CTraceFilterAgainstEntityList::`vftable';
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[2] = sub_100E99F0(**(_DWORD ***)(this[1] + 4));
  ++dword_106BA510;
  v3 = this[1];
  this[17] = 0;
  v4 = *(_DWORD *)(v3 + 16) - 1;
  v19 = v4;
  if ( v4 >= 0 )
  {
    v5 = 16 * v4;
    v18 = 16 * v4;
    do
    {
      v6 = *(_DWORD *)(v5 + *(_DWORD *)(this[1] + 4));
      v17 = v6;
      if ( *(_BYTE *)(v6 + 361) && (*(_BYTE *)(v6 + 356) & 4) == 0 )
      {
        v7 = this[7];
        v8 = this[5];
        if ( v7 + 1 > v8 )
        {
          sub_102ABFC0(v7 - v8 + 1);
          v6 = v17;
        }
        ++this[7];
        v9 = this[4];
        v10 = this[7] - v7 - 1;
        this[8] = v9;
        if ( v10 > 0 )
        {
          memcpy((void *)(v9 + 4 * v7 + 4), (const void *)(v9 + 4 * v7), 4 * v10);
          v6 = v17;
        }
        v11 = (_DWORD *)(this[4] + 4 * v7);
        if ( v11 )
          *v11 = v6;
        v12 = this[17];
        v13 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this[1] + 4) + v18) + 420);
        v14 = 0;
        if ( v12 <= 0 )
        {
LABEL_15:
          if ( (unsigned int)v12 < 8 )
          {
            this[v12 + 9] = v13;
            ++this[17];
          }
        }
        else
        {
          v15 = this + 9;
          while ( *v15 != v13 )
          {
            ++v14;
            ++v15;
            if ( v14 >= v12 )
              goto LABEL_15;
          }
        }
        v4 = v19;
      }
      --v4;
      v5 = v18 - 16;
      v19 = v4;
      v18 -= 16;
    }
    while ( v4 >= 0 );
  }
  return this;
}
