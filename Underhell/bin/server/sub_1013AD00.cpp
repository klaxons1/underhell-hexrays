int __thiscall sub_1013AD00(float *this, int a2, int a3, int a4, int a5, int a6)
{
  double v8; // st7
  void (__thiscall *v9)(int, float *, _BYTE *, int, int); // eax
  _BYTE v10[12]; // [esp+8h] [ebp-18h] BYREF
  float v11[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)a3 + 264))(a3, v10, 0) )
    return 0;
  v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 116))(a3) * 0.40000001 + 1.0;
  v9 = *(void (__thiscall **)(int, float *, _BYTE *, int, int))(*(_DWORD *)a3 + 248);
  v11[0] = this[1] * v8;
  v11[1] = this[2] * v8;
  v11[2] = v8 * this[3];
  v9(a3, v11, v10, a5, a6);
  return 2;
}
