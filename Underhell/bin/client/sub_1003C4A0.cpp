int __thiscall sub_1003C4A0(_DWORD *this)
{
  _DWORD *v2; // esi
  int result; // eax
  char v4; // [esp+Bh] [ebp-1h] BYREF

  sub_1002E560(&v4, 1, 1);
  v2 = this - 2;
  sub_1003B730(this - 2);
  sub_1002B550();
  if ( this[273] )
    sub_10034EE0(this - 2);
  result = (*(int (__thiscall **)(_DWORD *))(*v2 + 432))(this - 2);
  if ( this != (_DWORD *)8 )
    return (*(int (__thiscall **)(_DWORD *, int))*v2)(this - 2, 1);
  return result;
}
