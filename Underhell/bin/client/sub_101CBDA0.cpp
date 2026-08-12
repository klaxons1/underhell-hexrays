char __thiscall sub_101CBDA0(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  unsigned __int8 (__thiscall *v8)(_BYTE *, int, int, int, int, _BYTE *); // edx
  _BYTE v9[1024]; // [esp+28h] [ebp-1004h] BYREF
  _BYTE v10[2048]; // [esp+428h] [ebp-C04h] BYREF
  _BYTE v11[512]; // [esp+C28h] [ebp-404h] BYREF
  _BYTE v12[512]; // [esp+E28h] [ebp-204h] BYREF

  if ( this[24] )
    return 0;
  v8 = *(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 172);
  this[24] = 1;
  if ( v8(this, a2, a3, a4, a5, v10) )
  {
    sub_101C7780((int)v10, (unsigned __int8)a5 * (unsigned __int8)a4);
    sub_101C75A0(a6, (int)v10, 4 * (unsigned __int8)a5 * (unsigned __int8)a4);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 176))(
              this,
              a2,
              a3,
              a4,
              a5,
              v9) )
  {
    sub_101C7820((int)v9, (unsigned __int8)a5 * (unsigned __int8)a4);
    sub_101C7610(a6, (int)v9, 4 * (unsigned __int8)a5 * (unsigned __int8)a4);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 180))(
              this,
              a2,
              a3,
              a4,
              a5,
              v12) )
  {
    sub_101C78E0((int)v12, (unsigned __int8)a5 * (unsigned __int8)a4);
    sub_101C7680(a6, (int)v12, 4 * (unsigned __int8)a5 * (unsigned __int8)a4);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 184))(
              this,
              a2,
              a3,
              a4,
              a5,
              v11) )
  {
    sub_101C7920((int)v11, (unsigned __int8)a5 * (unsigned __int8)a4);
    sub_101C7700(a6, (int)v11, 4 * (unsigned __int8)a5 * (unsigned __int8)a4);
    result = 1;
  }
  else
  {
    result = 0;
  }
  this[24] = 0;
  return result;
}
