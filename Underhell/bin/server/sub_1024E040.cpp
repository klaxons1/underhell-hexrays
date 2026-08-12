int __thiscall sub_1024E040(_DWORD *this, int *a2)
{
  const char *v2; // eax
  const char *v4; // ecx
  _DWORD *v5; // eax
  int v6; // eax
  int result; // eax
  _BYTE *v8; // [esp+8h] [ebp-5Ch]
  _BYTE v9[80]; // [esp+14h] [ebp-50h] BYREF

  v2 = (const char *)a2[23];
  if ( !v2 )
    v2 = String;
  v4 = (const char *)this[23];
  if ( !v4 )
    v4 = String;
  DevMsg(2, "%s Blocked by %s\n", v4, v2);
  v5 = (_DWORD *)sub_10248110((int)v9, (int)this, (int)this, 1.0, 1, 0);
  sub_100D9E70(a2, (int)this, v5);
  if ( this[235] )
  {
    v8 = (_BYTE *)this[235];
    v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    sub_1023AF30(v6, 6, v8);
  }
  result = this[200];
  if ( result == 2 )
    return (*(int (__thiscall **)(_DWORD *))(*this + 732))(this);
  if ( result == 3 )
    return (*(int (__thiscall **)(_DWORD *))(*this + 728))(this);
  return result;
}
