char __thiscall sub_101CA9A0(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  _BYTE v8[512]; // [esp+3Ch] [ebp-204h] BYREF

  if ( this[24] )
    return 0;
  this[24] = 1;
  sub_101C6DB0((int)v8, a6, 64);
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 132))(
         this,
         a2,
         a3,
         a4,
         a5,
         v8)
    || (sub_101C7070((int)v8, a6, 64),
        (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 136))(
          this,
          a2,
          a3,
          a4,
          a5,
          v8))
    || (sub_101C74F0((int)v8, a6, 64),
        (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 144))(
          this,
          a2,
          a3,
          a4,
          a5,
          v8))
    || (sub_101C7680((int)v8, a6, 0x40u),
        (result = (*(int (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 148))(
                    this,
                    a2,
                    a3,
                    a4,
                    a5,
                    v8)) != 0) )
  {
    result = 1;
  }
  this[24] = 0;
  return result;
}
