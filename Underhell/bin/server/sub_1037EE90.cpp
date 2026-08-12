int __thiscall sub_1037EE90(float *this, int a2, float a3)
{
  int v4; // ebx
  int v5; // eax
  float *v6; // edi
  float *v7; // eax
  double v8; // st6
  double v9; // st7
  double v10; // st7
  float v11; // eax
  int result; // eax
  double v13; // st7
  float v14; // [esp+10h] [ebp-38h]
  char v15[12]; // [esp+20h] [ebp-28h] BYREF
  float v16[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  float v17; // [esp+38h] [ebp-10h]
  float v18; // [esp+3Ch] [ebp-Ch]
  float v19; // [esp+40h] [ebp-8h]
  float v20; // [esp+44h] [ebp-4h]

  v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  v6 = (float *)v5;
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  v7 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v4 + 536))(v4, v15);
  v8 = v7[1] + v6[146];
  v9 = v7[2] + v6[147];
  v17 = *v7 + v6[145] - this[145];
  v18 = v8 - this[146];
  v19 = v9 - this[147];
  v10 = off_10689714();
  v11 = *this;
  v20 = v10;
  (*(void (__thiscall **)(float *, float *, _DWORD, _DWORD))(LODWORD(v11) + 528))(this, v16, 0, 0);
  if ( v16[1] * v18 + v17 * v16[0] + v16[2] * v19 < 0.80000001 )
    return 40;
  if ( ((_DWORD)this[63] & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  v14 = this[120] * this[120] + this[119] * this[119] + this[121] * this[121];
  v13 = off_10689708(v14);
  if ( v13 * 0.5 >= v20 )
    return 23;
  result = 39;
  if ( a3 <= 128.0 )
    return 23;
  return result;
}
