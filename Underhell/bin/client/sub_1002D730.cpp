int __thiscall sub_1002D730(int this, float a2, float a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  float *v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v16; // [esp+8h] [ebp-34h]
  float v17; // [esp+Ch] [ebp-30h]
  float v18; // [esp+10h] [ebp-2Ch]
  float v19; // [esp+10h] [ebp-2Ch]
  int v20[2]; // [esp+20h] [ebp-1Ch] BYREF
  int v21; // [esp+28h] [ebp-14h]
  int v22; // [esp+2Ch] [ebp-10h]
  float v23; // [esp+30h] [ebp-Ch]
  int v24; // [esp+34h] [ebp-8h]
  int v25; // [esp+38h] [ebp-4h] BYREF

  v25 = 0;
  if ( sub_1002C2D0(this, (int)v20, a2, a3, &v25) )
  {
    if ( LOBYTE(v20[0]) )
    {
      v4 = *(unsigned __int16 *)(this + 14);
      v5 = *(unsigned __int16 *)(this + 12);
      v24 = v4 + v22;
      if ( v4 + v22 >= v5 )
        v24 = v4 + v22 - v5;
      v6 = v4 + v21;
      if ( v4 + v21 >= v5 )
        v6 -= v5;
      v7 = v20[1] + v4;
      if ( v7 >= v5 )
        v7 -= v5;
      sub_1002C580(
        this,
        *(_DWORD *)(this + 4),
        v23,
        *(_DWORD *)(this + 8) + 12 * v7,
        (float *)(*(_DWORD *)(this + 8) + 12 * v6),
        *(_DWORD *)(this + 8) + 12 * v24,
        0);
    }
    else
    {
      v8 = v22;
      if ( v22 == v21
        && (v9 = v22 + 1, v24 = v22 + 1, byte_10433C4C)
        && v9 >= 0
        && v9 < *(unsigned __int16 *)(this + 16)
        && 0.0 != *(float *)sub_10027610((unsigned __int16 *)(this + 8), v22 + 1)
        && a3 > 0.000001
        && *(float *)(this + 24) >= (double)flt_10433C50 )
      {
        v18 = *(float *)(dword_10433C74 + 44);
        v17 = a2 - a3;
        v16 = sub_10027610((unsigned __int16 *)(this + 8), v8);
        v10 = (float *)sub_10027610((unsigned __int16 *)(this + 8), v24);
        sub_1002C000((unsigned __int8 *)this, *(_DWORD *)(this + 4), v10, v16, v17, v18);
      }
      else
      {
        v11 = *(unsigned __int16 *)(this + 14);
        v12 = *(unsigned __int16 *)(this + 12);
        v13 = v11 + v8;
        if ( v11 + v8 >= v12 )
          v13 -= v12;
        v14 = v21 + v11;
        if ( v14 >= v12 )
          v14 -= v12;
        sub_1002BC80(
          this,
          *(float **)(this + 4),
          v23,
          (float *)(*(_DWORD *)(this + 8) + 12 * v14),
          *(_DWORD *)(this + 8) + 12 * v13);
      }
    }
    v19 = a2 - a3 - 0.050000001;
    sub_1002BF90(this, v19);
  }
  return v25;
}
