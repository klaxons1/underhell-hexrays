char __thiscall sub_101D5930(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        int a6)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  unsigned int v8; // edi
  int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // esi
  _WORD *v12; // ebx
  int *v13; // edx
  _WORD *v14; // eax
  _DWORD *v16; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h]
  unsigned int v18; // [esp+18h] [ebp+8h]
  unsigned int v19; // [esp+1Ch] [ebp+Ch]

  v6 = this[1];
  v7 = a2;
  v16 = this;
  if ( a2 >= v6 )
    return 0;
  v8 = a3;
  if ( a3 >= this[2] )
    return 0;
  v9 = a4;
  v10 = v6 - a2;
  if ( a4 >= v10 )
  {
    v11 = v10;
    v19 = v10;
  }
  else
  {
    v11 = a4;
    v19 = a4;
  }
  v18 = 0;
  if ( a5 )
  {
    v17 = 8 * v9;
    v12 = (_WORD *)(a6 + 6);
    do
    {
      if ( v8 >= this[2] )
        break;
      v13 = (int *)(this[5] + v8 * this[3] + 4 * v7);
      if ( v11 )
      {
        v14 = v12;
        do
        {
          *v13++ = ((unsigned __int16)*(v14 - 1) >> 6)
                 | (16 * (((*v14 & 0xFFC0) << 20) | *(v14 - 2) & 0xFFC0 | ((*(v14 - 3) & 0xFFC0) << 10)));
          v14 += 4;
          --v11;
        }
        while ( v11 );
        this = v16;
        v7 = a2;
        v11 = v19;
      }
      v12 = (_WORD *)((char *)v12 + v17);
      ++v8;
      ++v18;
    }
    while ( v18 < a5 );
  }
  return 1;
}
