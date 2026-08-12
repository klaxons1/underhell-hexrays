signed int __thiscall sub_1021A300(void *this, int a2)
{
  _DWORD v4[8]; // [esp+4h] [ebp-20h] BYREF

  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
    return sub_1021A200((int)this);
  memset(v4, 0, sizeof(v4));
  (*(void (__thiscall **)(int, _DWORD, int, _DWORD *))(*(_DWORD *)dword_106B31D0 + 164))(dword_106B31D0, 0, a2, v4);
  return sub_10219E80(this, v4);
}
