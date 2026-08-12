int __thiscall sub_101C3620(_DWORD *this)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax
  _DWORD v6[4]; // [esp+8h] [ebp-60h] BYREF
  _BYTE v7[56]; // [esp+18h] [ebp-50h] BYREF
  float v8[3]; // [esp+50h] [ebp-18h] BYREF
  float v9[3]; // [esp+5Ch] [ebp-Ch] BYREF

  this[9] = 0;
  sub_101C32F0(v6, (int)this);
  v2 = this[4] - 1;
  if ( v2 >= 0 )
  {
    v3 = 16 * v2;
    do
    {
      v4 = *(_DWORD *)(v3 + this[1]);
      if ( *(_BYTE *)(v4 + 361) && (*(_BYTE *)(v4 + 356) & 4) == 0 && (*(_BYTE *)(v4 + 356) & 0x20) == 0 )
      {
        sub_10111910((_BYTE *)(v4 + 320), (float *)(v4 + 328), (float *)(v4 + 340), v8, v9);
        (*(void (__thiscall **)(int, int, float *, float *, _DWORD, _DWORD *))(*(_DWORD *)dword_106B31EC + 48))(
          dword_106B31EC,
          16,
          v8,
          v9,
          0,
          v6);
      }
      v3 -= 16;
      --v2;
    }
    while ( v2 >= 0 );
  }
  return sub_102375F0(v7);
}
