void __thiscall sub_1002B1F0(int this)
{
  float v2; // ecx
  float v3; // edx
  float *v4; // ebx
  float *v5; // eax
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  int v9; // [esp-Ch] [ebp-74h]
  int v10; // [esp-4h] [ebp-6Ch]
  _BYTE v11[44]; // [esp+4h] [ebp-64h] BYREF
  float v12; // [esp+30h] [ebp-38h]
  char v13; // [esp+3Bh] [ebp-2Dh]
  float v14[2]; // [esp+58h] [ebp-10h] BYREF
  float v15; // [esp+60h] [ebp-8h]
  float *v16; // [esp+64h] [ebp-4h]
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  if ( *(_BYTE *)(this + 3544) && *(_DWORD *)(this + 2124) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v2 = *(float *)(this + 580);
    v3 = *(float *)(this + 584);
    v15 = *(float *)(this + 588);
    v9 = *(_DWORD *)(this + 1676);
    v14[0] = v2;
    v15 = v15 + 1.0;
    v14[1] = v3;
    v4 = (float *)sub_10073730(v9);
    v5 = (float *)sub_10073710(*(_DWORD *)(this + 1676));
    v6 = *(_DWORD *)(this + 252) >> 11;
    v16 = v5;
    if ( (v6 & 1) != 0 )
      sub_100DAE60(this);
    sub_100231A0((int)&savedregs, this, (float *)(this + 580), v14, v16, v4, 33570827, this, 0, (int)v11);
    if ( !v13 && 1.0 == v12 && *(_BYTE *)(this + 3544) )
    {
      v10 = sub_10073730(*(_DWORD *)(this + 1676));
      v7 = sub_10073710(*(_DWORD *)(this + 1676));
      sub_1025F360(this, v7, v10);
      v8 = *(_DWORD *)(this + 424) == 0;
      *(_BYTE *)(this + 3544) = 0;
      if ( !v8 )
        sub_10027740(this);
    }
  }
}
