void __thiscall sub_100AD8A0(_DWORD *this, float a2)
{
  int v3; // eax
  int v4; // edi
  double v5; // st7
  int v6; // esi
  bool v7; // c0
  float *v8; // esi
  float v9; // [esp+18h] [ebp+8h]

  if ( a2 > 0.0 )
  {
    *(float *)(this[1] + 4124) = 400.0;
    (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)this[1] + 996))(
      this[2] + 152,
      *(_DWORD *)(this[1] + 4672),
      LODWORD(a2),
      1);
    v3 = this[1];
    v4 = v3 + 3568;
    v5 = *(float *)(v3 + 3548) * 0.013;
    if ( *(float *)(v3 + 3576) != v5 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(v3 + 3460) + 4))(v3 + 3460, v3 + 3568);
      v9 = v5;
      *(float *)(v4 + 8) = v9;
    }
    v6 = this[1];
    v7 = *(float *)(v6 + 3568) > 8.0;
    v8 = (float *)(v6 + 3568);
    if ( v7 && *v8 != 8.0 )
    {
      (*(void (__thiscall **)(float *, float *))(*((_DWORD *)v8 - 27) + 4))(v8 - 27, v8);
      *v8 = 8.0;
    }
  }
}
