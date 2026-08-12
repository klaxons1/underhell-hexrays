void __thiscall sub_102DB670(int this)
{
  int v2; // eax
  int (__thiscall *v3)(int); // edx
  int v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  int v8; // eax
  int v9; // [esp+8h] [ebp-18h] BYREF
  float v10; // [esp+Ch] [ebp-14h]
  float v11; // [esp+10h] [ebp-10h]
  int v12; // [esp+14h] [ebp-Ch] BYREF
  float v13; // [esp+18h] [ebp-8h]
  float v14; // [esp+1Ch] [ebp-4h]

  sub_101E3D70((float *)this);
  if ( (*(_BYTE *)(this + 236) & 4) != 0 )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4))(this + 320);
    v12 = *(int *)v2;
    v13 = *(float *)(v2 + 4);
    v3 = *(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 8);
    v14 = *(float *)(v2 + 8);
    v4 = v3(this + 320);
    v5 = *(float *)v4;
    v9 = *(int *)v4;
    v6 = *(float *)(v4 + 4);
    v10 = *(float *)(v4 + 4);
    v7 = *(float *)(v4 + 8);
    v8 = *(_DWORD *)(this + 252);
    v11 = v7;
    *(float *)&v12 = *(float *)&v12 * 0.7;
    v13 = v13 * 0.7;
    *(float *)&v9 = v5 * 0.7;
    v10 = 0.7 * v6;
    if ( (v8 & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1011BB20(this + 580, (int)&v12, (int)&v9, 255, 0, 0, 100, 0.0);
  }
}
