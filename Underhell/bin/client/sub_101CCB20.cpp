char __thiscall sub_101CCB20(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  unsigned __int8 (__thiscall *v8)(_BYTE *, int, int, int, int, _BYTE *); // edx
  int v9; // edi
  _BYTE v10[256]; // [esp+50h] [ebp-904h] BYREF
  _BYTE v11[1024]; // [esp+150h] [ebp-804h] BYREF
  _BYTE v12[512]; // [esp+550h] [ebp-404h] BYREF
  _BYTE v13[512]; // [esp+750h] [ebp-204h] BYREF

  if ( this[24] )
    return 0;
  v8 = *(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 176);
  this[24] = 1;
  if ( v8(this, a2, a3, a4, a5, v11) )
  {
    sub_101C6D30(a6, (int)v11, 4 * (unsigned __int8)a5 * (unsigned __int8)a4);
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
    sub_101C6DB0(a6, (int)v12, 4 * (unsigned __int8)a5 * (unsigned __int8)a4);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 184))(
              this,
              a2,
              a3,
              a4,
              a5,
              v13) )
  {
    sub_101C6E60(a6, (int)v13, 4 * (unsigned __int8)a5 * (unsigned __int8)a4);
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
    sub_101C6F30(a6, (int)v10, 4 * v9);
    sub_101C7780(a6, v9);
    result = 1;
  }
  else
  {
    result = 0;
  }
  this[24] = 0;
  return result;
}
