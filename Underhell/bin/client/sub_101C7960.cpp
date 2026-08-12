char __thiscall sub_101C7960(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  unsigned __int8 (__thiscall *v8)(_BYTE *, int, int, int, int, _DWORD *); // edx
  unsigned int i; // ecx
  double v10; // st5
  unsigned int j; // ecx
  double v12; // st5
  _DWORD v13[128]; // [esp+50h] [ebp-204h] BYREF

  if ( this[24] )
    return 0;
  v8 = *(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _DWORD *))(*(_DWORD *)this + 12);
  this[24] = 1;
  if ( v8(this, a2, a3, a4, a5, v13) )
  {
    if ( a6 )
    {
      for ( i = 0; i < 0x40; *(_BYTE *)(i + a6 - 1) = (int)(v10 * 255.0 + 0.5) )
        v10 = *(double *)&v13[2 * i++];
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _DWORD *))(*(_DWORD *)this + 20))(
            this,
            a2,
            a3,
            a4,
            a5,
            v13) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _DWORD *))(*(_DWORD *)this + 16))(
             this,
             a2,
             a3,
             a4,
             a5,
             v13) )
      {
        sub_101C7680(a6, (int)v13, 0x40u);
        result = 1;
      }
      else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _DWORD *))(*(_DWORD *)this + 24))(
                  this,
                  a2,
                  a3,
                  a4,
                  a5,
                  v13) )
      {
        sub_101C7700(a6, (int)v13, 0x40u);
        result = 1;
      }
      else
      {
        result = 0;
      }
      goto LABEL_18;
    }
    if ( a6 )
    {
      for ( j = 0; j < 0x40; *(_BYTE *)(j + a6 - 1) = (int)(v12 * 255.0 + 0.5) )
        v12 = *(float *)&v13[j++];
      result = 1;
      goto LABEL_18;
    }
  }
  result = 1;
LABEL_18:
  this[24] = 0;
  return result;
}
