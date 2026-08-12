void __thiscall sub_102BD0E0(int this)
{
  bool v2; // zf
  int v3; // eax
  double v4; // st6
  double v5; // st5
  double v6; // rt1
  double v7; // st5
  int v8; // ecx
  double v9; // st7
  int *v10; // ecx
  int v11; // eax
  _BYTE v12[12]; // [esp+Ch] [ebp-78h] BYREF
  float v13; // [esp+18h] [ebp-6Ch]
  float v14; // [esp+1Ch] [ebp-68h]
  float v15; // [esp+20h] [ebp-64h]
  float v16[3]; // [esp+60h] [ebp-24h] BYREF
  float v17; // [esp+6Ch] [ebp-18h]
  float v18; // [esp+70h] [ebp-14h]
  float v19; // [esp+74h] [ebp-10h]
  float v20; // [esp+78h] [ebp-Ch] BYREF
  float v21; // [esp+7Ch] [ebp-8h]
  float v22; // [esp+80h] [ebp-4h]
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  j_nullsub_4((void *)this);
  if ( *(_DWORD *)(this + 1288) )
  {
    sub_10112C00(this + 320, 0);
    v2 = (*(_DWORD *)(this + 252) & 0x800) == 0;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(this + 248) & 0x1000) == 0 )
  {
    sub_10112C00(this + 320, 0);
    if ( (*(_DWORD *)(this + 248) & 0x2000) == 0 )
    {
      (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, &v20, 0, 0);
      v3 = *(_DWORD *)(this + 252) >> 11;
      v4 = v20 * -1.0;
      v20 = v4;
      v5 = v21 * -1.0;
      v21 = v5;
      v6 = v5;
      v7 = -1.0 * v22;
      v22 = v7;
      v17 = v4 * 10000.0;
      v18 = v6 * 10000.0;
      v19 = v7 * 10000.0;
      if ( (v3 & 1) != 0 )
        sub_100DAE60(this);
      v8 = *(_DWORD *)(this + 252) >> 11;
      v16[0] = v17 + *(float *)(this + 580);
      v16[1] = *(float *)(this + 584) + v18;
      v16[2] = *(float *)(this + 588) + v19;
      if ( (v8 & 1) != 0 )
        sub_100DAE60(this);
      sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), v16, 131083, this, 0, (int)v12);
      *(float *)(this + 1260) = v13;
      *(float *)(this + 1264) = v14;
      v9 = v15;
      goto LABEL_14;
    }
    v2 = (*(_DWORD *)(this + 252) & 0x800) == 0;
LABEL_11:
    if ( !v2 )
      sub_100DAE60(this);
    *(float *)(this + 1260) = *(float *)(this + 580);
    *(float *)(this + 1264) = *(float *)(this + 584);
    v9 = *(float *)(this + 588);
LABEL_14:
    *(float *)(this + 1268) = v9;
    *(_BYTE *)(this + 1280) = 0;
    if ( *(_BYTE *)(this + 1120) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(this + 24);
        if ( v10 )
          sub_100194B0(v10, 1120);
      }
      *(_BYTE *)(this + 1120) = 0;
    }
    *(_BYTE *)(this + 1281) = 0;
    *(_BYTE *)(this + 1283) = 0;
    return;
  }
  v11 = *(_DWORD *)(this + 252) >> 11;
  *(_WORD *)(this + 1280) = 257;
  *(_BYTE *)(this + 1283) = 0;
  if ( (v11 & 1) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 1260) = *(float *)(this + 580);
  *(float *)(this + 1264) = *(float *)(this + 584);
  *(float *)(this + 1268) = *(float *)(this + 588);
  sub_102BC790(this);
}
