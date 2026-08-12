char __thiscall sub_103A53B0(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // esi
  int v6; // esi
  int v7; // ebx
  void (__thiscall *v8)(int, int); // eax
  float v9; // edx
  float v10; // eax
  float v12[3]; // [esp+Ch] [ebp-18h] BYREF
  float v13[2]; // [esp+18h] [ebp-Ch] BYREF
  float v14; // [esp+20h] [ebp-4h]

  v3 = *(_DWORD *)(this + 312);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 312) & 0xFFF) + 1], v3 >>= 12, v4[1] != v3) )
    v5 = 0;
  else
    v5 = *v4;
  if ( v5 )
  {
    while ( *(char **)(v5 + 92) != "combine_mine" )
    {
      LOBYTE(v3) = sub_100D6240((_DWORD *)v5, "combine_mine");
      if ( (_BYTE)v3 )
        break;
      v3 = *(_DWORD *)(v5 + 316);
      if ( v3 == -1 || (v3 >>= 12, off_1061BE18[4 * (*(_DWORD *)(v5 + 316) & 0xFFF) + 2] != v3) )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (*(_DWORD *)(v5 + 316) & 0xFFF) + 1];
      if ( !v5 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v6 = sub_101811E0("combine_mine", -1);
    if ( *(_BYTE *)(this + 3968) && (v7 = sub_100BEF30(this, "claw"), v7 > -1) )
    {
      sub_100BCCA0((void *)this, v7, (int)v13, (int)v12);
      sub_100E0D20(v6, v13);
      sub_100E0EA0(v6, v12);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 76))(v6, this);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 140))(v6, this, v7);
      v8 = *(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416);
      *(_BYTE *)(this + 3969) = 1;
      v8(this, 76);
      LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 96))(v6);
    }
    else
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v9 = *(float *)(this + 580);
      v10 = *(float *)(this + 584);
      v14 = *(float *)(this + 588);
      v13[0] = v9;
      v14 = v14 - 32.0;
      v13[1] = v10;
      sub_100E0D20(v6, v13);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_100E0EA0(v6, (float *)(this + 704));
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 76))(v6, this);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 140))(v6, this, -1);
      LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 96))(v6);
    }
  }
  return v3;
}
