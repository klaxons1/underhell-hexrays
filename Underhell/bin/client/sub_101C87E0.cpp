char __thiscall sub_101C87E0(_BYTE *this, int a2, int a3, int a4, int a5, _WORD *a6)
{
  char result; // al
  unsigned __int8 (__thiscall *v8)(_BYTE *, int, int, int, int, _BYTE *); // edx
  unsigned int i; // esi
  unsigned int j; // esi
  _WORD *v11; // esi
  int v12; // ebp
  unsigned int k; // esi
  float v14; // [esp+64h] [ebp-20Ch]
  float v15; // [esp+64h] [ebp-20Ch]
  float v16; // [esp+64h] [ebp-20Ch]
  __int16 v17; // [esp+6Ah] [ebp-206h] BYREF
  _BYTE v18[512]; // [esp+6Ch] [ebp-204h] BYREF

  if ( this[24] )
    return 0;
  v8 = *(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 12);
  this[24] = 1;
  if ( v8(this, a2, a3, a4, a5, v18) )
  {
    if ( a6 )
    {
      for ( i = 0; i < 0x40; ++i )
      {
        v14 = *(double *)&v18[8 * i];
        a6[i] = *sub_101C6940(&v17, v14);
      }
    }
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 20))(
              this,
              a2,
              a3,
              a4,
              a5,
              v18) )
  {
    if ( a6 )
    {
      for ( j = 0; j < 0x40; ++j )
        a6[j] = *sub_101C6940(&v17, *(float *)&v18[4 * j]);
    }
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 24))(
              this,
              a2,
              a3,
              a4,
              a5,
              v18) )
  {
    if ( a6 )
    {
      v11 = a6;
      v12 = 64;
      do
      {
        v15 = (double)*(unsigned __int16 *)((char *)v11 + v18 - (_BYTE *)a6) / 65535.0;
        *v11++ = *sub_101C6940(&v17, v15);
        --v12;
      }
      while ( v12 );
    }
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 28))(
              this,
              a2,
              a3,
              a4,
              a5,
              v18) )
  {
    if ( a6 )
    {
      for ( k = 0; k < 0x40; ++k )
      {
        v16 = (double)(unsigned __int8)v18[k] / 255.0;
        a6[k] = *sub_101C6940(&v17, v16);
      }
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  this[24] = 0;
  return result;
}
