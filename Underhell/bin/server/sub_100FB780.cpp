int __thiscall sub_100FB780(int *this)
{
  int v2; // edx
  const char *v3; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  sub_100E11A0((int)this, &flt_106F1CB4);
  sub_100E0970((int)this, v2, 7, 0);
  v3 = *(const char **)(*(int (__thiscall **)(int *, _BYTE *))(*this + 28))(this, v5);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(int *, const char *))(*this + 104))(this, v3);
  sub_100EA940(this, 0x1000000);
  return (*(int (__thiscall **)(int *))(*this + 584))(this);
}
