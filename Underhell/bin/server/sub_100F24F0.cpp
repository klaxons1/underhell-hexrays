int __thiscall sub_100F24F0(void *this)
{
  const char *v2; // ecx
  float v4; // [esp+4h] [ebp-1Ch]
  float v5; // [esp+10h] [ebp-10h]
  _BYTE v6[4]; // [esp+1Ch] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 28))(this, v6);
  if ( !v2 )
    v2 = String;
  v4 = -16.0;
  v5 = 16.0;
  return sub_100F03A0(
           (int)this,
           v2,
           SLOBYTE(v4),
           COERCE_INT(-16.0),
           COERCE_INT(0.0),
           SLOBYTE(v5),
           COERCE_INT(16.0),
           COERCE_INT(72.0));
}
