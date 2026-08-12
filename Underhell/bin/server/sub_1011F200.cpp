int __thiscall sub_1011F200(_DWORD *this)
{
  const char *v2; // eax
  int v3; // ecx
  int v4; // eax
  const char *v6; // [esp+4h] [ebp-8h]

  sub_100EC3F0(this, 0, *(float *)(dword_106B31C8 + 12), (int)"MovingSound");
  v2 = (const char *)this[248];
  if ( !v2 || (v3 = this[200], v3 == 2) || !v3 )
  {
    v2 = (const char *)this[246];
    if ( !v2 )
      v2 = String;
  }
  v6 = v2;
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  return sub_1023AF30(v4, 6, v6);
}
