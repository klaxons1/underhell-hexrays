int __thiscall sub_100FB900(void *this)
{
  int v2; // edx
  const char *v3; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  sub_100E11A0((int)this, &flt_106F1CB4);
  sub_100E0970((int)this, v2, 0, 0);
  sub_10112C00(0);
  v3 = *(const char **)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 28))(this, v5);
  if ( !v3 )
    v3 = String;
  return (*(int (__thiscall **)(void *, const char *))(*(_DWORD *)this + 104))(this, v3);
}
