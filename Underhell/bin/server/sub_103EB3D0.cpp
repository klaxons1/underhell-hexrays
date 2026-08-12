void __thiscall sub_103EB3D0(int this)
{
  float v2; // ecx
  float v3; // edx
  double v4; // st7
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st7
  double v9; // st6
  int v10; // ebx
  int v11[3]; // [esp+28h] [ebp-40h] BYREF
  int v12[3]; // [esp+34h] [ebp-34h] BYREF
  float v13; // [esp+40h] [ebp-28h]
  float v14; // [esp+44h] [ebp-24h]
  float v15; // [esp+48h] [ebp-20h]
  float v16[3]; // [esp+4Ch] [ebp-1Ch] BYREF
  float v17; // [esp+58h] [ebp-10h] BYREF
  float v18; // [esp+5Ch] [ebp-Ch]
  float v19; // [esp+60h] [ebp-8h]
  float v20; // [esp+64h] [ebp-4h]

  sub_100BEFA0((void *)this, "Muzzle", this + 1748, (int)v11);
  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1728) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v2 = *(float *)(this + 580);
    v3 = *(float *)(this + 584);
    v15 = *(float *)(this + 588);
    v13 = v2;
    v14 = v3;
    (*(void (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)this + 528))(this, &v17, v16, 0);
    v4 = sub_10144FB0((_DWORD **)(this + 1124));
    v20 = v4;
    if ( fabs(v4) > 120.0 )
    {
      v5 = sub_10418240(this + 1124);
      if ( 0.0 != v5 )
      {
        v6 = v16[0] * v5 * 0.5;
        v7 = v16[1] * v5 * 0.5;
        v8 = v5 * v16[2] * 0.5;
        if ( v20 <= 0.0 )
        {
          v17 = v17 - v6;
          v18 = v18 - v7;
          v19 = v19 - v8;
        }
        else
        {
          v17 = v6 + v17;
          v18 = v7 + v18;
          v19 = v8 + v19;
        }
        off_10689714();
      }
      v9 = v20 * 1.1;
      *(float *)v12 = v17 * v9 + v13;
      *(float *)&v12[1] = v18 * v9 + v14;
      *(float *)&v12[2] = v9 * v19 + v15;
      v10 = (int)(0.4 * v20);
      sub_1023D4B0(536870920, (float *)v12, v10, 0.25, this, 0, 0);
      sub_1023D4B0(536871936, (float *)v12, v10, 0.25, this, 1, 0);
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1023D4B0(536870916, (float *)(this + 580), 800, 0.25, this, 0, 0);
    *(float *)(this + 1728) = *(float *)(dword_106B31C8 + 12) + 0.1;
  }
}
