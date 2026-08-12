int __thiscall sub_10137EA0(int *this)
{
  const char *v2; // eax
  int v3; // edi
  int v4; // eax
  int result; // eax
  const char *v6; // esi
  _BYTE v7[4]; // [esp+4h] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(int *, _BYTE *))(*this + 28))(this, v7);
  if ( !v2 )
    v2 = String;
  v3 = *this;
  v4 = sub_100E8220(*this, v2);
  result = (*(int (__thiscall **)(int *, int))(v3 + 32))(this, v4);
  v6 = (const char *)this[244];
  if ( v6 )
    return sub_100E8220(v3, v6);
  return result;
}
