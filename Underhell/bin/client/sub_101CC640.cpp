char __thiscall sub_101CC640(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  int v8; // ebp
  _BYTE v9[256]; // [esp+40h] [ebp-D04h] BYREF
  _BYTE v10[2048]; // [esp+140h] [ebp-C04h] BYREF
  _BYTE v11[512]; // [esp+940h] [ebp-404h] BYREF
  _BYTE v12[512]; // [esp+B40h] [ebp-204h] BYREF

  if ( this[24] )
    return 0;
  v8 = 4 * (unsigned __int8)a5 * (unsigned __int8)a4;
  this[24] = 1;
  sub_101C6D30((int)v10, a6, v8);
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 192))(
         this,
         a2,
         a3,
         a4,
         a5,
         v10)
    || (sub_101C7300((int)v11, *(float *)&a6, v8),
        (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 200))(
          this,
          a2,
          a3,
          a4,
          a5,
          v11))
    || (sub_101C7480((int)v12, a6, v8),
        (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 204))(
          this,
          a2,
          a3,
          a4,
          a5,
          v12))
    || (sub_101C7820(a6, (unsigned __int8)a5 * (unsigned __int8)a4),
        sub_101C7610((int)v9, a6, v8),
        (result = (*(int (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 208))(
                    this,
                    a2,
                    a3,
                    a4,
                    a5,
                    v9)) != 0) )
  {
    result = 1;
  }
  this[24] = 0;
  return result;
}
