void __thiscall sub_1036D900(int this, int a2, float a3, _DWORD *a4)
{
  int v5; // edi
  int *v6; // ecx
  double v7; // st7
  float v8[3]; // [esp+34h] [ebp-18h] BYREF
  float v9; // [esp+40h] [ebp-Ch]
  float v10; // [esp+44h] [ebp-8h]
  float v11; // [esp+48h] [ebp-4h]

  sub_101C73D0((unsigned int *)this, 0);
  v5 = *(_DWORD *)(this + 248) | 4;
  if ( *(_DWORD *)(this + 248) != v5 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 248);
    }
    *(_DWORD *)(this + 248) = v5;
  }
  if ( *(_DWORD *)(this + 2336) != 2 )
    *(_DWORD *)(this + 2336) = 2;
  if ( a4 )
  {
    sub_100285C0((_DWORD *)this, a4, 1);
    if ( (a4[63] & 0x800) != 0 )
      sub_100DAE60((int)a4);
    (*(void (__thiscall **)(int, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)this + 1876))(this, a4, a4 + 145, 0);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 17);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 400))(this);
  *(float *)(*(_DWORD *)(this + 2604) + 20) = *(float *)(a2 + 4);
  v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         -1.0,
         1.0);
  v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -1.0,
          1.0);
  v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.5,
          1.0);
  v7 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 20, 50) * a3;
  v8[0] = v9 * v7;
  v8[1] = v10 * v7;
  v8[2] = v7 * v11;
  sub_100DD660(this, v8);
  *(_BYTE *)(this + 3657) = 0;
  *(_DWORD *)(this + 196) = sub_1036BF10;
}
