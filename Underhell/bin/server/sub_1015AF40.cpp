void __thiscall sub_1015AF40(_DWORD *this, float a2)
{
  int v3; // eax
  int v4; // edi
  double v5; // st7
  int v6; // edi
  bool v7; // c0
  float *v8; // edi
  char v9; // al
  float v10; // [esp+10h] [ebp-4h]

  if ( a2 > 0.0 )
  {
    *(float *)(this[1] + 4124) = 400.0;
    (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)this[1] + 1284))(
      this[2] + 152,
      *(_DWORD *)(this[1] + 4508),
      LODWORD(a2),
      1);
    v3 = this[1];
    v4 = v3 + 2304;
    v5 = *(float *)(v3 + 2292) * 0.013;
    if ( *(float *)(v3 + 2312) != v5 )
    {
      (**(void (__thiscall ***)(int, int))(v3 + 2192))(v3 + 2192, v3 + 2304);
      v10 = v5;
      *(float *)(v4 + 8) = v10;
    }
    v6 = this[1];
    v7 = *(float *)(v6 + 2304) > 8.0;
    v8 = (float *)(v6 + 2304);
    if ( v7 && *v8 != 8.0 )
    {
      (**((void (__thiscall ***)(int, float *))v8 - 28))((int)(v8 - 28), v8);
      *v8 = 8.0;
    }
    v9 = 18;
    if ( a2 <= 0.85000002 )
      v9 = 19;
    sub_101E3110(v9, 0, 0);
  }
}
