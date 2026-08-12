char __thiscall sub_101CBBB0(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  int v8; // edi
  _BYTE v9[1024]; // [esp+40h] [ebp-1004h] BYREF
  _BYTE v10[2048]; // [esp+440h] [ebp-C04h] BYREF
  _BYTE v11[512]; // [esp+C40h] [ebp-404h] BYREF
  _BYTE v12[512]; // [esp+E40h] [ebp-204h] BYREF

  if ( this[24] )
    return 0;
  v8 = (unsigned __int8)a5 * (unsigned __int8)a4;
  this[24] = 1;
  sub_101C7560((int)v12, a6, 4 * v8);
  sub_101C7920((int)v12, v8);
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 204))(
         this,
         a2,
         a3,
         a4,
         a5,
         v12)
    || (sub_101C6F30((int)v10, a6, 4 * v8),
        sub_101C7780((int)v10, v8),
        (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 192))(
          this,
          a2,
          a3,
          a4,
          a5,
          v10))
    || (sub_101C71F0((int)v9, a6, 4 * v8),
        sub_101C7820((int)v9, v8),
        (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 196))(
          this,
          a2,
          a3,
          a4,
          a5,
          v9))
    || (sub_101C73B0((int)v11, *(float *)&a6, 4 * v8),
        sub_101C78E0((int)v11, v8),
        (result = (*(int (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 200))(
                    this,
                    a2,
                    a3,
                    a4,
                    a5,
                    v11)) != 0) )
  {
    result = 1;
  }
  this[24] = 0;
  return result;
}
