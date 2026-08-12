bool __thiscall sub_100D72C0(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  _BYTE v4[4]; // [esp+0h] [ebp-10h] BYREF
  _BYTE v5[4]; // [esp+4h] [ebp-Ch] BYREF
  _BYTE v6[4]; // [esp+8h] [ebp-8h] BYREF
  float v7; // [esp+Ch] [ebp-4h] BYREF

  if ( (this[63] & 0x80000) == 0 )
    return 0;
  v2 = this[106];
  if ( !v2 )
    return 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 152))(v2);
  (*(void (__thiscall **)(int, int, float *, _BYTE *, _BYTE *, _BYTE *))(*(_DWORD *)dword_106BAFF8 + 16))(
    dword_106BAFF8,
    v3,
    &v7,
    v4,
    v5,
    v6);
  return v7 < 1000.0;
}
