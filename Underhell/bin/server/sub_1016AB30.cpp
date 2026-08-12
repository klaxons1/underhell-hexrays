int __thiscall sub_1016AB30(unsigned __int16 *this)
{
  char *v2; // ecx
  float v4; // [esp+4h] [ebp-1Ch]
  float v5; // [esp+10h] [ebp-10h]
  _BYTE v6[4]; // [esp+1Ch] [ebp-4h] BYREF

  v2 = *(char **)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 28))(this, v6);
  if ( !v2 )
    v2 = (char *)String;
  v4 = -16.0;
  v5 = 16.0;
  return sub_1016A8F0(
           this,
           v2,
           SLOBYTE(v4),
           COERCE_INT(-16.0),
           COERCE_INT(0.0),
           SLOBYTE(v5),
           COERCE_INT(16.0),
           COERCE_INT(72.0));
}
