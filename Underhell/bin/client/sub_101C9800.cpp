char __thiscall sub_101C9800(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  unsigned __int8 (__thiscall *v8)(_BYTE *, int, int, int, int, _BYTE *); // edx
  _BYTE v9[256]; // [esp+54h] [ebp-104h] BYREF

  if ( this[24] )
    return 0;
  v8 = *(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 60);
  this[24] = 1;
  if ( v8(this, a2, a3, a4, a5, v9) )
  {
    sub_101C6D30(a6, (int)v9, 64);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 56))(
              this,
              a2,
              a3,
              a4,
              a5,
              v9) )
  {
    sub_101C6DB0(a6, (int)v9, 64);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 64))(
              this,
              a2,
              a3,
              a4,
              a5,
              v9) )
  {
    sub_101C6E60(a6, (int)v9, 64);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 68))(
              this,
              a2,
              a3,
              a4,
              a5,
              v9) )
  {
    sub_101C6F30(a6, (int)v9, 64);
    result = 1;
  }
  else
  {
    result = 0;
  }
  this[24] = 0;
  return result;
}
