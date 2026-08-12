char __thiscall sub_101C8600(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  unsigned __int8 (__thiscall *v8)(_BYTE *, int, int, int, int, _BYTE *); // edx
  unsigned int i; // ecx
  double v10; // st5
  unsigned int k; // ecx
  double v12; // st5
  unsigned int j; // eax
  __int16 v14; // cx
  __int16 v15; // dx
  _BYTE v16[512]; // [esp+50h] [ebp-204h] BYREF

  if ( this[24] )
    return 0;
  v8 = *(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 72);
  this[24] = 1;
  if ( v8(this, a2, a3, a4, a5, v16) )
  {
    if ( a6 )
    {
      for ( i = 0; i < 0x40; *(_WORD *)(a6 + 2 * i - 2) = (int)(v10 * 65535.0 + 0.5) )
        v10 = *(double *)&v16[8 * i++];
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 80))(
            this,
            a2,
            a3,
            a4,
            a5,
            v16) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 76))(
             this,
             a2,
             a3,
             a4,
             a5,
             v16) )
      {
        sub_101C74F0(a6, (int)v16, 64);
        result = 1;
      }
      else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 88))(
                  this,
                  a2,
                  a3,
                  a4,
                  a5,
                  v16) )
      {
        if ( a6 )
        {
          for ( j = 0; j < 0x40; *(_WORD *)(a6 + 2 * j - 2) = v14 | v15 )
          {
            v14 = (unsigned __int8)v16[j];
            LOBYTE(v15) = 0;
            HIBYTE(v15) = v16[j++];
          }
        }
        result = 1;
      }
      else
      {
        result = 0;
      }
      goto LABEL_21;
    }
    if ( a6 )
    {
      for ( k = 0; k < 0x40; *(_WORD *)(a6 + 2 * k - 2) = (int)(v12 * 65535.0 + 0.5) )
        v12 = *(float *)&v16[4 * k++];
      result = 1;
      goto LABEL_21;
    }
  }
  result = 1;
LABEL_21:
  this[24] = 0;
  return result;
}
