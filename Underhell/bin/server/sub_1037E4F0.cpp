void __thiscall sub_1037E4F0(int this)
{
  int v2; // edx
  int *v3; // ecx
  float v4[3]; // [esp+4h] [ebp-18h] BYREF
  float v5[3]; // [esp+10h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, char *))(*(_DWORD *)this + 104))(this, off_1067424C[0]);
  sub_100E0970(this, v2, 5, 2);
  v5[0] = 1.0;
  v5[1] = 1.0;
  v5[2] = 1.0;
  v4[0] = -1.0;
  v4[1] = -1.0;
  v4[2] = -1.0;
  sub_1025F360((_DWORD *)this, (int)v4, (int)v5);
  sub_10112C00(this + 320, 2);
  *(float *)(this + 552) = 0.050000001;
  sub_100EBE30(this, 13);
  sub_101C6CC0((float *)this);
  *(_DWORD *)(this + 196) = sub_1037D460;
  if ( *(_DWORD *)(this + 848) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 848) = 1;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 848);
      *(_DWORD *)(this + 848) = 1;
    }
  }
}
