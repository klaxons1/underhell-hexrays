unsigned int __thiscall sub_101D8340(void *this, int a2, int a3)
{
  int v4; // edi
  int v5; // ecx
  unsigned int result; // eax
  double v7; // st7
  float v8[12]; // [esp+0h] [ebp-70h]
  _BYTE v9[60]; // [esp+30h] [ebp-40h] BYREF
  int v10; // [esp+6Ch] [ebp-4h]

  (*(void (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)this + 88))(this, v9, a3);
  v4 = v10;
  (*(void (__thiscall **)(void *, int, int, _DWORD))(*(_DWORD *)this + 96))(this, v10, a3 + 8, 0);
  v5 = v4 + 28;
  for ( result = 0; result < 0x10; *(float *)(v5 - 32) = v8[result + 6] )
  {
    v7 = v8[result + 7];
    result += 8;
    *(float *)(v5 - 16) = v7;
    v5 += 128;
    *(float *)(v5 - 128) = v8[result];
    *(float *)(v5 - 112) = v8[result + 1];
    *(float *)(v5 - 96) = v8[result + 2];
    *(float *)(v5 - 80) = v8[result + 3];
    *(float *)(v5 - 64) = v8[result + 4];
    *(float *)(v5 - 48) = v8[result + 5];
  }
  return result;
}
