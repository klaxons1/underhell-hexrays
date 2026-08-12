char __thiscall sub_101CA3E0(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  int v8; // edi
  unsigned int v9; // edi
  int i; // eax
  float v11; // [esp+3Ch] [ebp-210h]
  __int16 v12; // [esp+46h] [ebp-206h] BYREF
  _BYTE v13[512]; // [esp+48h] [ebp-204h] BYREF

  if ( this[24] )
    return 0;
  this[24] = 1;
  sub_101C6E60((int)v13, a6, 64);
  v8 = a4;
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 132))(
         this,
         a2,
         a3,
         a4,
         a5,
         v13) )
  {
    goto LABEL_4;
  }
  sub_101C7120((int)v13, a6, 64);
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 136))(
         this,
         a2,
         a3,
         a4,
         a5,
         v13) )
  {
    goto LABEL_4;
  }
  if ( a6 )
  {
    v9 = 0;
    for ( i = a6 - (_DWORD)v13; ; i = a6 - (_DWORD)v13 )
    {
      v11 = (double)*(unsigned __int16 *)&v13[2 * v9 + i] / 65535.0;
      *(_WORD *)&v13[2 * v9++] = *sub_101C6940(&v12, v11);
      if ( v9 >= 0x40 )
        break;
    }
    v8 = a4;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 140))(
         this,
         a2,
         a3,
         v8,
         a5,
         v13)
    || (sub_101C7700((int)v13, a6, 0x40u),
        (result = (*(int (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 148))(
                    this,
                    a2,
                    a3,
                    v8,
                    a5,
                    v13)) != 0) )
  {
LABEL_4:
    result = 1;
  }
  this[24] = 0;
  return result;
}
