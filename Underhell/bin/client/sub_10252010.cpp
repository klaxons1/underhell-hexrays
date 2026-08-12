int __thiscall sub_10252010(void *this, _BYTE *a2)
{
  int v3; // eax
  _BYTE v5[2048]; // [esp+Ch] [ebp-800h] BYREF

  if ( *a2 == 35 )
  {
    v3 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, a2);
    if ( v3 )
      return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 836))(this, v3);
  }
  (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(dword_1047CA78, a2, v5, 2048);
  return (*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 836))(this, v5);
}
