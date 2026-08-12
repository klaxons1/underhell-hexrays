char __thiscall sub_101CB010(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  int v8; // edi
  unsigned int i; // edi
  unsigned int j; // ecx
  double v11; // st5
  unsigned int k; // ecx
  double v13; // st5
  __int16 v14; // [esp+3Ch] [ebp-28Ah] BYREF
  int v15; // [esp+3Eh] [ebp-288h]
  _BYTE v16[512]; // [esp+42h] [ebp-284h] BYREF
  _WORD v17[64]; // [esp+242h] [ebp-84h] BYREF

  if ( this[24] )
    return 0;
  this[24] = 1;
  sub_101C6D30((int)v16, a6, 64);
  v8 = a4;
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 132))(
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
      v15 = *(int *)(a6 + 4 * i);
      v17[i] = *sub_101C6940(&v14, *(float *)&v15);
    }
    v8 = a4;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _WORD *))(*(_DWORD *)this + 140))(
         this,
         a2,
         a3,
         v8,
         a5,
         v17) )
  {
    goto LABEL_4;
  }
  if ( a6 )
  {
    for ( j = 0; j < 0x40; *(_WORD *)&v16[2 * j + 510] = v15 )
    {
      v11 = *(float *)(a6 + 4 * j++);
      v15 = (int)(v11 * 65535.0 + 0.5);
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _WORD *))(*(_DWORD *)this + 144))(
         this,
         a2,
         a3,
         v8,
         a5,
         v17) )
  {
    goto LABEL_4;
  }
  if ( a6 )
  {
    for ( k = 0; k < 0x40; v16[k + 511] = v15 )
    {
      v13 = *(float *)(a6 + 4 * k++);
      v15 = (int)(v13 * 255.0 + 0.5);
    }
  }
  result = (*(int (__thiscall **)(_BYTE *, int, int, int, int, _WORD *))(*(_DWORD *)this + 148))(
             this,
             a2,
             a3,
             v8,
             a5,
             v17);
  if ( result )
LABEL_4:
    result = 1;
  this[24] = 0;
  return result;
}
