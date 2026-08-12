char __thiscall sub_101D5870(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        _DWORD *a6)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  unsigned int v8; // edi
  int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // esi
  _DWORD *v13; // eax
  _DWORD *v14; // edx
  int v16; // [esp+8h] [ebp-4h]
  unsigned int v17; // [esp+14h] [ebp+8h]
  unsigned int v18; // [esp+18h] [ebp+Ch]

  v6 = this[1];
  v7 = a2;
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
    v18 = v10;
  }
  else
  {
    v11 = a4;
    v18 = a4;
  }
  v17 = 0;
  if ( a5 )
  {
    v16 = 4 * v9;
    do
    {
      if ( v8 >= this[2] )
        break;
      v13 = (_DWORD *)(this[5] + v8 * this[3] + 4 * v7);
      if ( v11 )
      {
        v14 = a6;
        do
        {
          *v13++ = *v14++;
          --v11;
        }
        while ( v11 );
        v7 = a2;
        v11 = v18;
      }
      a6 = (_DWORD *)((char *)a6 + v16);
      ++v8;
      ++v17;
    }
    while ( v17 < a5 );
  }
  return 1;
}
