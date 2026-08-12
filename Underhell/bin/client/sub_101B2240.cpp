void __thiscall sub_101B2240(int this, float a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  char v6; // bl
  int v7; // edi
  void (__stdcall *v8)(_DWORD); // edx
  double v9; // st7
  long double v10; // st7
  double v11; // st7
  float v12; // [esp+4Ch] [ebp-24h]
  float v13; // [esp+5Ch] [ebp-14h]
  int v14; // [esp+60h] [ebp-10h] BYREF
  float v15; // [esp+64h] [ebp-Ch]
  int v16; // [esp+68h] [ebp-8h] BYREF
  char v17; // [esp+6Fh] [ebp-1h]

  v13 = *(float *)(dword_1044EDBC + 44) * 0.5;
  if ( *(_DWORD *)(this + 256) == -1 )
  {
    v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
    *(_DWORD *)(this + 256) = v3;
    (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
      dword_1047CA6C,
      v3,
      "vgui/icons/tick_long",
      1,
      0);
    v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
    *(_DWORD *)(this + 260) = v4;
    (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
      dword_1047CA6C,
      v4,
      "vgui/icons/tick_short",
      1,
      0);
  }
  v5 = sub_102374F0(this + 44);
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(dword_1047CA6C, 255, 255, 255, 255);
  v15 = -180.0;
  v6 = 1;
  v7 = v5 >> 1;
  do
  {
    v8 = *(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_1047CA6C + 128);
    if ( v6 )
    {
      v8(*(_DWORD *)(this + 256));
      (*(void (__thiscall **)(int, _DWORD, int *, int *))(*(_DWORD *)dword_1047CA6C + 132))(
        dword_1047CA6C,
        *(_DWORD *)(this + 256),
        &v16,
        &v14);
      v6 = 0;
    }
    else
    {
      v8(*(_DWORD *)(this + 260));
      (*(void (__thiscall **)(int, _DWORD, int *, int *))(*(_DWORD *)dword_1047CA6C + 132))(
        dword_1047CA6C,
        *(_DWORD *)(this + 260),
        &v16,
        &v14);
      v6 = 1;
    }
    v17 = v6;
    v9 = sub_10076760(a2, v15);
    if ( fabs(v9) <= v13 )
    {
      v12 = v9;
      v10 = sub_101B21C0((char *)this, v12);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
        dword_1047CA6C,
        (int)v10 - (v16 >> 1),
        v7,
        (int)v10 - (v16 >> 1) + v16,
        v7 + v14);
      v6 = v17;
    }
    v11 = v15 + 22.5;
    v15 = v11;
  }
  while ( v11 <= 180.0 );
}
