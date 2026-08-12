char __thiscall sub_101CB5F0(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  int v8; // edi
  unsigned int i; // edi
  unsigned int j; // ecx
  double v11; // st5
  unsigned int k; // ecx
  double v13; // st5
  __int16 v14; // [esp+3Ch] [ebp-10Ah] BYREF
  int v15; // [esp+3Eh] [ebp-108h]
  _WORD v16[128]; // [esp+42h] [ebp-104h] BYREF

  if ( this[24] )
    return 0;
  this[24] = 1;
  sub_101C6FF0((int)v16, a6, 64);
  v8 = a4;
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _WORD *))(*(_DWORD *)this + 116))(
         this,
         a2,
         a3,
         a4,
         a5,
         v16) )
  {
    goto LABEL_4;
  }
  if ( a6 )
  {
    for ( i = 0; i < 0x40; ++i )
    {
      *(float *)&v15 = *(double *)(a6 + 8 * i);
      v16[i] = *sub_101C6940(&v14, *(float *)&v15);
    }
    v8 = a4;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _WORD *))(*(_DWORD *)this + 120))(
         this,
         a2,
         a3,
         v8,
         a5,
         v16) )
  {
    goto LABEL_4;
  }
  if ( a6 )
  {
    for ( j = 0; j < 0x40; v16[j - 1] = v15 )
    {
      v11 = *(double *)(a6 + 8 * j++);
      v15 = (int)(v11 * 65535.0 + 0.5);
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _WORD *))(*(_DWORD *)this + 124))(
         this,
         a2,
         a3,
         v8,
         a5,
         v16) )
  {
    goto LABEL_4;
  }
  if ( a6 )
  {
    for ( k = 0; k < 0x40; *((_BYTE *)&v15 + k + 3) = v15 )
    {
      v13 = *(double *)(a6 + 8 * k++);
      v15 = (int)(v13 * 255.0 + 0.5);
    }
  }
  result = (*(int (__thiscall **)(_BYTE *, int, int, int, int, _WORD *))(*(_DWORD *)this + 128))(
             this,
             a2,
             a3,
             v8,
             a5,
             v16);
  if ( result )
LABEL_4:
    result = 1;
  this[24] = 0;
  return result;
}
