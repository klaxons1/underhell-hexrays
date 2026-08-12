void __thiscall sub_1040F490(int this)
{
  int v2; // edx
  int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int *v6; // ecx
  int v7; // eax
  float v8[3]; // [esp+8h] [ebp-1Ch] BYREF
  float v9[3]; // [esp+14h] [ebp-10h] BYREF
  float v10; // [esp+20h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(this + 320, 2);
  sub_100E0970(this, v2, 4, 0);
  v9[0] = 0.0;
  v9[1] = 0.0;
  v9[2] = 0.0;
  v8[0] = 0.0;
  v8[1] = 0.0;
  v8[2] = 0.0;
  sub_1025F360((_DWORD *)this, (int)v8, (int)v9);
  v3 = *(_DWORD *)(this + 2128);
  v10 = *(float *)(dword_106F0F64 + 44);
  if ( v3 != LODWORD(v10) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 2128);
    }
    *(float *)(this + 2128) = v10;
  }
  v5 = *(_DWORD *)(this + 2112);
  v10 = *(float *)(dword_106F0FAC + 44);
  if ( v5 != LODWORD(v10) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 2112);
    }
    *(float *)(this + 2112) = v10;
  }
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  if ( *(_DWORD *)(this + 220) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 1;
  }
  *(float *)(this + 552) = 1.0;
  v7 = *(_DWORD *)(this + 556);
  v10 = 0.80000001;
  if ( v7 != COERCE_INT(0.80000001) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 696))(this, this + 556);
    *(float *)(this + 556) = 0.80000001;
  }
  sub_100C1170(this, 1);
  *(float *)(this + 2164) = 0.0;
  *(float *)(this + 2168) = 0.0;
  *(float *)(this + 2176) = 0.0;
  sub_100EBE30(this, 22);
}
