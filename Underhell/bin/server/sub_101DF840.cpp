void __thiscall sub_101DF840(int this)
{
  int v2; // edx
  int v3; // ebx
  _BYTE *v4; // ebx
  int v5; // ebx
  int v6; // eax
  int *v7; // ecx
  const char *v8; // eax
  bool v9; // zf
  _BYTE v10[4]; // [esp+Ch] [ebp-4h] BYREF

  *(float *)(this + 920) = *(float *)(dword_106C1D1C + 44);
  *(float *)(this + 924) = *(float *)(dword_106C1D64 + 44);
  *(float *)(this + 928) = *(float *)(dword_106C1DAC + 44);
  sub_101488E0((_DWORD *)this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v3 = *(_DWORD *)(this + 220);
  if ( v3 <= 0 )
    v3 = 1;
  if ( *(_DWORD *)(this + 216) != v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *(_DWORD *)(this + 216) = v3;
  }
  v4 = (_BYTE *)(this + 225);
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    if ( *v4 != 1 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
      *v4 = 1;
    }
    v5 = *(_DWORD *)(this + 248) | 0x400;
    if ( *(_DWORD *)(this + 248) != v5 )
    {
      v6 = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 248) = v5;
        goto LABEL_22;
      }
LABEL_17:
      v7 = *(int **)(v6 + 24);
      if ( v7 )
        sub_100194B0(v7, this + 248 - v6);
      *(_DWORD *)(this + 248) = v5;
    }
  }
  else if ( *(_DWORD *)(this + 220) )
  {
    if ( *v4 != 2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
      *v4 = 2;
    }
  }
  else
  {
    if ( *v4 != 1 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
      *v4 = 1;
    }
    v5 = *(_DWORD *)(this + 248) | 0x400;
    if ( *(_DWORD *)(this + 248) != v5 )
    {
      v6 = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 248) = v5;
        goto LABEL_22;
      }
      goto LABEL_17;
    }
  }
LABEL_22:
  sub_100E0970(this, v2, 0, 0);
  sub_100DD660(this, &flt_106F1CA8);
  v8 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v10);
  if ( !v8 )
    v8 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v8);
  sub_10112C00(this + 320, 6);
  if ( (*(_DWORD *)(this + 248) & 0x4000) != 0 )
    sub_100EBE30(this, 1);
  if ( (*(_DWORD *)(this + 248) & 0x40000) != 0 )
    *(_DWORD *)(this + 252) |= 0x200000u;
  if ( *(_BYTE *)(this + 1008) )
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  *(_DWORD *)(this + 1204) = -1;
  v9 = (*(_BYTE *)(this + 248) & 1) == 0;
  *(_DWORD *)(this + 196) = sub_101499C0;
  if ( !v9 )
    *(_DWORD *)(this + 196) = 0;
  if ( 0.0 == *(float *)(this + 868) )
    *(float *)(this + 868) = 1.0;
}
