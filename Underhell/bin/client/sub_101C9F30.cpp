char __thiscall sub_101C9F30(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  unsigned int i; // eax
  __int16 v9; // cx
  __int16 v10; // dx
  int v11; // edi
  unsigned int j; // edi
  float v13; // [esp+50h] [ebp-20Ch]
  __int16 v14; // [esp+56h] [ebp-206h] BYREF
  _WORD v15[256]; // [esp+58h] [ebp-204h] BYREF

  if ( this[24] )
    return 0;
  this[24] = 1;
  if ( a6 )
  {
    for ( i = 0; i < 0x40; v15[i - 1] = v9 | v10 )
    {
      v9 = *(unsigned __int8 *)(i + a6);
      LOBYTE(v10) = 0;
      HIBYTE(v10) = *(_BYTE *)(i + a6);
      ++i;
    }
  }
  v11 = a4;
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _WORD *))(*(_DWORD *)this + 164))(
         this,
         a2,
         a3,
         a4,
         a5,
         v15) )
  {
    goto LABEL_7;
  }
  sub_101C6F30((int)v15, a6, 64);
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _WORD *))(*(_DWORD *)this + 152))(
         this,
         a2,
         a3,
         a4,
         a5,
         v15) )
  {
    goto LABEL_7;
  }
  sub_101C71F0((int)v15, a6, 64);
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _WORD *))(*(_DWORD *)this + 156))(
         this,
         a2,
         a3,
         a4,
         a5,
         v15) )
  {
    goto LABEL_7;
  }
  if ( a6 )
  {
    for ( j = 0; j < 0x40; ++j )
    {
      v13 = (double)*(unsigned __int8 *)(j + a6) / 255.0;
      v15[j] = *sub_101C6940(&v14, v13);
    }
    v11 = a4;
  }
  result = (*(int (__thiscall **)(_BYTE *, int, int, int, int, _WORD *))(*(_DWORD *)this + 160))(
             this,
             a2,
             a3,
             v11,
             a5,
             v15);
  if ( result )
LABEL_7:
    result = 1;
  this[24] = 0;
  return result;
}
