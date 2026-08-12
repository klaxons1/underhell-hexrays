void __thiscall sub_101B30B0(int this)
{
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  _BYTE v7[48]; // [esp+14h] [ebp-6Ch] BYREF
  int v8; // [esp+44h] [ebp-3Ch] BYREF
  float v9; // [esp+48h] [ebp-38h]
  float v10; // [esp+4Ch] [ebp-34h]
  int v11; // [esp+50h] [ebp-30h] BYREF
  float v12; // [esp+54h] [ebp-2Ch]
  float v13; // [esp+58h] [ebp-28h]
  int v14[3]; // [esp+5Ch] [ebp-24h] BYREF
  int v15[3]; // [esp+68h] [ebp-18h] BYREF
  int v16[3]; // [esp+74h] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(this + 236) & 0x2C) != 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v2 = *(_DWORD *)(this + 584);
    v3 = *(_DWORD *)(this + 588);
    v16[0] = *(_DWORD *)(this + 580);
    v15[0] = v16[0];
    v14[0] = v16[0];
    v4 = *(_DWORD *)(this + 800);
    v16[2] = v3;
    v15[2] = v3;
    v14[2] = v3;
    v16[1] = v2;
    v15[1] = v2;
    v14[1] = v2;
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
    if ( v5 )
    {
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 192))(v5, v7);
      sub_10421B40(this + 872, v7, v15);
    }
    v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800));
    if ( v6 )
    {
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 192))(v6, v7);
      sub_10421B40(this + 884, v7, v14);
    }
    sub_1011BC50((float *)v15, (float *)v16, 0, 255, 0, 0, 0.0);
    sub_1011BC50((float *)v16, (float *)(this + 860), 128, 128, 128, 0, 0.0);
    sub_1011BC50((float *)(this + 860), (float *)v14, 0, 255, 0, 0, 0.0);
    *(float *)&v11 = 8.0;
    v12 = 8.0;
    v13 = 8.0;
    *(float *)&v8 = -8.0;
    v9 = -8.0;
    v10 = -8.0;
    sub_1011BB20((int)v16, (int)&v8, (int)&v11, 128, 255, 128, 32, 0.0);
    *(float *)&v8 = 8.0;
    v9 = 8.0;
    v10 = 8.0;
    *(float *)&v11 = -8.0;
    v12 = -8.0;
    v13 = -8.0;
    sub_1011BB20(this + 860, (int)&v11, (int)&v8, 255, 128, 128, 32, 0.0);
    if ( (*(_BYTE *)(this + 236) & 0x2C) != 0 )
      sub_101B0600(*(_DWORD *)(this + 800), this);
  }
  sub_100DF330((float *)this);
}
