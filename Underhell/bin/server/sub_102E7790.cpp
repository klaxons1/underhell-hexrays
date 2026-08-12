void __thiscall sub_102E7790(int this)
{
  int v2; // edx
  double v3; // st7
  int v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  float v8; // [esp+14h] [ebp-24h]
  float v9[3]; // [esp+28h] [ebp-10h] BYREF
  float v10; // [esp+34h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  j_nullsub_4((void *)this);
  sub_10112C00(this + 320, 0);
  sub_100E0970(this, v2, 0, 0);
  sub_100EAB80((_DWORD *)this, 16);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/leech.mdl");
  sub_100EC3F0((_DWORD *)this, (int)sub_102E6A20, 0.0, 0);
  v8 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v8, 0);
  v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.5,
         1.5);
  v4 = *(_DWORD *)(this + 864);
  v10 = v3;
  if ( v4 != LODWORD(v10) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 864);
    }
    *(float *)(this + 864) = v10;
  }
  v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.0,
          0.89999998);
  if ( *(_DWORD *)(this + 904) != LODWORD(v10) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 904);
    }
    *(float *)(this + 904) = v10;
  }
  v9[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.0,
            360.0);
  sub_100E0EA0(this, v9);
  *(_DWORD *)(this + 1120) = 1;
  if ( *(_BYTE *)(this + 119) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 119) = 1;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 116);
      *(_BYTE *)(this + 119) = 1;
    }
  }
}
