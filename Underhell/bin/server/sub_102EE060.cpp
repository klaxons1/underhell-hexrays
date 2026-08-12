int __thiscall sub_102EE060(int this)
{
  const char *v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // ebx
  int *v6; // ecx
  double v7; // st7
  int v8; // eax
  int *v9; // ecx
  int result; // eax
  int *v11; // ecx
  int *v12; // ecx
  float v13; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  j_nullsub_4((void *)this);
  v2 = *(const char **)(*(int (__thiscall **)(int, float *))(*(_DWORD *)this + 28))(this, &v13);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  sub_100E0970(this, v3, 0, 0);
  sub_10112C00(this + 320, 6);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  v4 = sub_100BDF40(this, "Idle");
  sub_100C3330(this, v4);
  sub_100C1600(this, 1, 1);
  *(float *)(this + 1128) = *(float *)(dword_106B31C8 + 12);
  v5 = dword_106B31C8;
  if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 124);
    }
    *(float *)(this + 124) = *(float *)(v5 + 12);
  }
  v7 = 0.0;
  v8 = *(_DWORD *)(this + 864);
  v13 = 0.0;
  if ( v8 != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
      {
        sub_100194B0(v9, 864);
        v7 = 0.0;
      }
    }
    *(float *)(this + 864) = v7;
  }
  result = *(_DWORD *)(this + 904);
  v13 = v7;
  if ( result != LODWORD(v13) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 904) = v7;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
      {
        result = sub_100194B0(v11, 904);
        v7 = 0.0;
      }
      *(float *)(this + 904) = v7;
    }
  }
  if ( *(_BYTE *)(this + 225) != 1 )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 1;
  }
  v13 = 3.5533266e22;
  if ( *(_DWORD *)(this + 771) != 1693501540 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 771) = 1693501540;
    }
    else
    {
      v12 = *(int **)(this + 24);
      if ( v12 )
        result = sub_100194B0(v12, 771);
      *(_DWORD *)(this + 771) = 1693501540;
    }
  }
  return result;
}
