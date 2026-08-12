void __thiscall sub_10301D30(int this)
{
  bool v2; // zf
  int v3; // eax
  unsigned int v4; // ebx
  int *v5; // ecx
  int v6; // eax
  float *v7; // edi
  float v8; // edx
  __int64 v9; // [esp-4h] [ebp-2Ch]
  float v10[3]; // [esp+10h] [ebp-18h] BYREF
  float v11[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = *(_BYTE *)(this + 4094) == 0;
  *(_BYTE *)(this + 3652) = 0;
  if ( !v2 )
  {
    *(_BYTE *)(this + 4094) = 0;
    sub_1023B860((_DWORD *)this, (int)"NPC_Antlion.WingsOpen");
    sub_100C1600(this, 1, 0);
  }
  v3 = *(_DWORD *)(this + 248);
  v4 = v3 & 0xFFFFFFFD;
  if ( v3 != (v3 & 0xFFFFFFFD) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 248);
    }
    *(_DWORD *)(this + 248) = v4;
  }
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) & 0xFFFB);
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  sub_101C73D0((unsigned int *)this, 0);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v7 = (float *)v6;
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      sub_100DAE60(v6);
    v11[0] = v7[145] - *(float *)(this + 580);
    v11[1] = v7[146] - *(float *)(this + 584);
    v11[2] = v7[147] - *(float *)(this + 588);
    off_10689714();
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v8 = *(float *)(this + 712);
    v10[0] = *(float *)(this + 704);
    v10[2] = v8;
    v10[1] = sub_10265030(v11);
    sub_100E11A0(this, v10);
  }
  HIDWORD(v9) = this;
  LODWORD(v9) = this;
  sub_1010DD80((_DWORD *)(this + 4016), v9, 0.0);
}
