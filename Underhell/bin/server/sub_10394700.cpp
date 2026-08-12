char __thiscall sub_10394700(int this, int a2, int a3, float *a4, float *a5)
{
  char result; // al
  int v8; // eax
  _DWORD *v9; // edi
  float *v10; // eax
  int v11; // edx
  int v12; // edi
  int v13; // eax
  float *v14; // eax
  float v15; // [esp+Ch] [ebp-18h] BYREF
  float v16; // [esp+10h] [ebp-14h]
  float v17; // [esp+14h] [ebp-10h]
  float v18; // [esp+18h] [ebp-Ch]
  float v19; // [esp+1Ch] [ebp-8h]
  float v20; // [esp+20h] [ebp-4h]
  int savedregs; // [esp+24h] [ebp+0h] BYREF
  char v22; // [esp+3Bh] [ebp+17h]

  result = sub_10038020(a2, a3, (int)a4, (int)a5);
  v22 = result;
  if ( a2 == 1 )
  {
    if ( sub_100697A0((_DWORD *)this, 28, 1)
      && (v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1460))(this, 8), (v9 = (_DWORD *)v8) != 0)
      && (*(_DWORD *)(v8 + 16) & 0x500000) != 0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v10 = (float *)sub_1023CC80(v9);
      v11 = *(_DWORD *)(this + 252) >> 11;
      v15 = *v10 - *(float *)(this + 580);
      v16 = v10[1] - *(float *)(this + 584);
      v17 = v10[2] - *(float *)(this + 588);
      if ( (v11 & 1) != 0 )
        sub_100DAE60(this);
      v12 = (int)a4;
      v18 = *a4 - *(float *)(this + 580);
      v19 = a4[1] - *(float *)(this + 584);
      v20 = a4[2] - *(float *)(this + 588);
      off_10689714();
      off_10689714();
      if ( v18 * v15 + v19 * v16 > 0.0 )
      {
        v22 = 1;
        *a5 = *a5 * 1.5;
      }
    }
    else
    {
      v12 = (int)a4;
    }
    if ( *(_BYTE *)(this + 4449)
      && (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
      && (v13 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this),
          v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 504))(v13),
          sub_10034610((_DWORD *)this, (int)&savedregs, v12, this, v14, &v15)) )
    {
      result = 1;
      *a5 = *a5 * 0.1;
    }
    else
    {
      return v22;
    }
  }
  return result;
}
