int __thiscall sub_1017AC30(_BYTE *this, int a2)
{
  bool v2; // zf
  int v4; // eax
  int v5; // esi
  int result; // eax
  double v7; // st7
  double v8; // st7
  _BYTE v9[84]; // [esp+14h] [ebp-58h] BYREF
  _BYTE *v10; // [esp+68h] [ebp-4h]
  float v11; // [esp+74h] [ebp+8h]

  v2 = (this[376] & 2) == 0;
  v10 = this;
  if ( v2 )
    sub_100E8860((int)(this + 260));
  v4 = *(_DWORD *)(a2 + 4);
  v5 = *(_DWORD *)(v4 + 8);
  result = v4 + 4;
  if ( v5 != result )
  {
    for ( *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 4); ; *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 4) )
    {
      v11 = *(float *)(a2 + 8);
      (*(void (__stdcall **)(int, int, _DWORD, float, _BYTE *))(*((_DWORD *)v10 + 65) + 20))(
        v5 + 12,
        v5 + 24,
        0,
        COERCE_FLOAT(LODWORD(v11)),
        v9);
      if ( (v10[376] & 1) != 0 )
      {
        v7 = 1.0 - *((float *)v10 + 95) * v11;
        if ( v7 < 0.0 )
          v7 = 0.0;
        *(float *)(v5 + 24) = *(float *)(v5 + 24) * v7;
        *(float *)(v5 + 28) = *(float *)(v5 + 28) * v7;
        *(float *)(v5 + 32) = v7 * *(float *)(v5 + 32);
      }
      v8 = *(float *)(v5 + 44) + v11;
      *(float *)(v5 + 44) = v8;
      if ( v8 >= *(float *)(v5 + 40) )
        sub_100EB9C0(*(_DWORD *)a2, (_DWORD *)v5);
      v5 = *(_DWORD *)(a2 + 16);
      result = *(_DWORD *)(a2 + 4) + 4;
      if ( v5 == result )
        break;
    }
  }
  return result;
}
