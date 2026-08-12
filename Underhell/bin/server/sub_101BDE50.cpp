int __thiscall sub_101BDE50(char **this)
{
  _DWORD *v2; // eax
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  v2 = (_DWORD *)(*((int (__thiscall **)(char **, _BYTE *))*this + 7))(this, v4);
  sub_10213890(*v2);
  if ( this[545] )
    sub_1023B8B0(this[545]);
  return sub_100CAEC0(this);
}
