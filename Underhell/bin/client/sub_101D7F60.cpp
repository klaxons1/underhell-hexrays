int __thiscall sub_101D7F60(void *this, int a2, int a3, int a4)
{
  unsigned int v5; // eax
  int v6; // ecx
  int result; // eax
  float v8[8]; // [esp+0h] [ebp-60h]
  _BYTE v9[64]; // [esp+20h] [ebp-40h] BYREF

  v5 = 0;
  v6 = a2 + 28;
  do
  {
    v5 += 8;
    v8[v5] = *(float *)(v6 - 16);
    v6 += 128;
    v8[v5 + 1] = *(float *)(v6 - 128);
    v8[v5 + 2] = *(float *)(v6 - 112);
    v8[v5 + 3] = *(float *)(v6 - 96);
    v8[v5 + 4] = *(float *)(v6 - 80);
    v8[v5 + 5] = *(float *)(v6 - 64);
    v8[v5 + 6] = *(float *)(v6 - 48);
    v8[v5 + 7] = *(float *)(v6 - 32);
  }
  while ( v5 < 0x10 );
  result = (*(int (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)this + 48))(this, v9, a3);
  if ( !result )
    return (*(int (__thiscall **)(void *, int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 56))(
             this,
             a2,
             a3 + 8,
             a4,
             0,
             0,
             0.0);
  return result;
}
