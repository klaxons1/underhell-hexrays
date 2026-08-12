int *__thiscall sub_1013FB00(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int *result; // eax
  int *v5; // edi
  double v6; // st7
  int v7; // edx
  int v8; // edx
  int v9; // ebx
  int *v10; // ecx
  int v11; // esi
  int *v12; // ecx
  float v13; // [esp+8h] [ebp-7Ch]
  _BYTE v14[12]; // [esp+20h] [ebp-64h] BYREF
  int v15; // [esp+2Ch] [ebp-58h]
  float v16; // [esp+30h] [ebp-54h]
  float v17; // [esp+34h] [ebp-50h]
  int v18; // [esp+74h] [ebp-10h] BYREF
  float v19; // [esp+78h] [ebp-Ch]
  float v20; // [esp+7Ch] [ebp-8h]
  int v21; // [esp+80h] [ebp-4h]
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  v2 = *(_DWORD *)(this + 800);
  if ( v2 == -1
    || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1], result = (int *)(v2 >> 12),
                                                                       (int *)v3[1] != result)
    || !*v3 )
  {
    v5 = (int *)(this + 248);
    if ( (*(_BYTE *)(this + 248) & 0x10) != 0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v18 = *(int *)(this + 580);
      v19 = *(float *)(this + 584);
      v6 = *(float *)(this + 588);
    }
    else
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v7 = *(_DWORD *)(this + 252);
      v18 = *(int *)(this + 580);
      v19 = *(float *)(this + 584);
      v20 = *(float *)(this + 588) - 1024.0;
      if ( (v7 & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), (float *)&v18, 16387, this, 0, (int)v14);
      v18 = v15;
      v19 = v16;
      v6 = v17;
    }
    v8 = *v5;
    v20 = v6;
    v9 = v8 | 4;
    v21 = v8;
    if ( v8 != (v8 | 4) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(this + 24);
        if ( v10 )
          sub_100194B0(v10, 248);
      }
      *v5 = v9;
    }
    v13 = (float)*(int *)(this + 220);
    sub_1013F6E0(this, (float *)&v18, *(float *)(this + 824), *(float *)(this + 848), v13, *v5, *(_DWORD *)(this + 808));
    result = (int *)sub_1013F870(this);
    v11 = v21;
    if ( *v5 != v21 )
    {
      result = v5 - 62;
      if ( *((_BYTE *)v5 - 164) )
      {
        *((_BYTE *)result + 88) |= 1u;
        *v5 = v11;
      }
      else
      {
        v12 = (int *)result[6];
        if ( v12 )
          result = (int *)sub_100194B0(v12, 248);
        *v5 = v11;
      }
    }
  }
  return result;
}
