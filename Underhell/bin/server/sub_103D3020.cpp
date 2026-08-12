void __thiscall sub_103D3020(int this)
{
  int *v2; // ecx
  int v3; // ebx
  int *v4; // ecx
  float v5; // [esp+8h] [ebp-1Ch]
  int v6; // [esp+Ch] [ebp-18h]
  int v7; // [esp+1Ch] [ebp-8h]

  v6 = off_1067E560;
  v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         0.1)
     + *(float *)(dword_106B31C8 + 12);
  sub_100EC3F0((_DWORD *)this, (int)sub_103D1C60, v5, v6);
  v7 = sub_100BDF40(this, "idle");
  if ( *(_DWORD *)(this + 904) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 904);
    }
    *(float *)(this + 904) = 0.0;
  }
  v3 = dword_106B31C8;
  if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 124);
    }
    *(float *)(this + 124) = *(float *)(v3 + 12);
  }
  sub_100C3330(this, v7);
  sub_100C1A10(this);
}
