char __thiscall sub_101C9140(_BYTE *this, int a2, int a3, int a4, int a5, int a6)
{
  char result; // al
  unsigned __int8 (__thiscall *v8)(_BYTE *, int, int, int, int, _BYTE *); // edx
  _BYTE v9[512]; // [esp+54h] [ebp-284h] BYREF
  _BYTE v10[128]; // [esp+254h] [ebp-84h] BYREF

  if ( this[24] )
    return 0;
  v8 = *(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 32);
  this[24] = 1;
  if ( v8(this, a2, a3, a4, a5, v9) )
  {
    sub_101C6FF0(a6, (int)v9, 64);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 36))(
              this,
              a2,
              a3,
              a4,
              a5,
              v10) )
  {
    sub_101C7070(a6, (int)v10, 64);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 44))(
              this,
              a2,
              a3,
              a4,
              a5,
              v10) )
  {
    sub_101C7120(a6, (int)v10, 64);
    result = 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, int, int, _BYTE *))(*(_DWORD *)this + 48))(
              this,
              a2,
              a3,
              a4,
              a5,
              v10) )
  {
    sub_101C71F0(a6, (int)v10, 64);
    result = 1;
  }
  else
  {
    result = 0;
  }
  this[24] = 0;
  return result;
}
