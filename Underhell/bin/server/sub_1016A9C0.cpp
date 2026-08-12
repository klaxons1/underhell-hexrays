int __thiscall sub_1016A9C0(unsigned __int16 *this)
{
  int result; // eax
  char *v3; // ecx
  char *v4; // eax
  int v5; // eax
  float v6; // [esp+4h] [ebp-1Ch]
  float v7; // [esp+10h] [ebp-10h]
  _BYTE v8[4]; // [esp+1Ch] [ebp-4h] BYREF

  if ( !*((_DWORD *)this + 906) && !*((_DWORD *)this + 907) )
    return sub_1025FAC0(this);
  v3 = *(char **)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 28))(this, v8);
  if ( !v3 )
    v3 = (char *)String;
  v6 = -16.0;
  v7 = 16.0;
  sub_1016A8F0(
    this,
    v3,
    SLOBYTE(v6),
    COERCE_INT(-16.0),
    COERCE_INT(-16.0),
    SLOBYTE(v7),
    COERCE_INT(16.0),
    COERCE_INT(16.0));
  if ( !*((_DWORD *)this + 909) )
    *((_DWORD *)this + 909) = 5;
  if ( *((_DWORD *)this + 910) )
  {
    v4 = (char *)*((_DWORD *)this + 910);
    if ( !v4 )
      v4 = (char *)String;
    v5 = sub_100BDF40((int)this, v4);
    sub_100C1170((int)this, v5);
  }
  result = *((_DWORD *)this + 906);
  *((_DWORD *)this + 908) = result;
  return result;
}
