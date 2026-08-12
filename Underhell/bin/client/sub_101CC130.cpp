char __thiscall sub_101CC130(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  unsigned __int8 (__thiscall *v8)(_BYTE *, int, int, int, int, _BYTE *); // edx
  unsigned int v9; // edi
  _BYTE v10[256]; // [esp+50h] [ebp-F04h] BYREF
  _BYTE v11[1024]; // [esp+150h] [ebp-E04h] BYREF
  _BYTE v12[2048]; // [esp+550h] [ebp-A04h] BYREF
  _BYTE v13[512]; // [esp+D50h] [ebp-204h] BYREF

  if ( this[24] )
    return 0;
  v8 = *(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 172);
  this[24] = 1;
  if ( v8(this, a2, a3, a4, a5, v12) )
  {
    sub_101C7410(a6, (int)v12, 4 * (unsigned __int8)a5 * (unsigned __int8)a4);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 176))(
              this,
              a2,
              a3,
              a4,
              a5,
              v11) )
  {
    sub_101C7480(a6, (int)v11, 4 * (unsigned __int8)a5 * (unsigned __int8)a4);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 180))(
              this,
              a2,
              a3,
              a4,
              a5,
              v13) )
  {
    sub_101C74F0(a6, (int)v13, 4 * (unsigned __int8)a5 * (unsigned __int8)a4);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 188))(
              this,
              a2,
              a3,
              a4,
              a5,
              v10) )
  {
    v9 = (unsigned __int8)a5 * (unsigned __int8)a4;
    sub_101C7560(a6, (int)v10, 4 * v9);
    sub_101C7920(a6, v9);
    result = 1;
  }
  else
  {
    result = 0;
  }
  this[24] = 0;
  return result;
}
