bool __thiscall sub_102F6B90(void *this, _DWORD *a2)
{
  float *v3; // edi
  float *v4; // eax
  double v5; // st7
  double v6; // st4
  double v7; // st5
  double v8; // st7
  float v10; // [esp+0h] [ebp-Ch]

  if ( !sub_102F6A60((int)this, a2) )
    return 0;
  v3 = (float *)(*(int (__thiscall **)(_DWORD *))(*a2 + 576))(a2);
  v4 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this);
  v5 = *v4 - *v3;
  v6 = v4[1] - v3[1];
  v7 = v4[2] - v3[2];
  v10 = v7 * v7 + v6 * v6 + v5 * v5;
  v8 = off_10689708(v10);
  if ( v8 > 80.0 )
    return 0;
  if ( !sub_102F40A0((int)this, v8) )
  {
    (*(void (__thiscall **)(void *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
      this,
      "TLK_CANT_INTERACT_NOW",
      0,
      0,
      0,
      0);
    return 0;
  }
  return !sub_102F4670((int)this);
}
