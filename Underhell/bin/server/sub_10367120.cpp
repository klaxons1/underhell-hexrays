int __thiscall sub_10367120(float *this, float a2, float a3)
{
  int v5; // eax
  int v6; // ebx
  float *v7; // edi
  float *v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5
  int (__thiscall *v12)(float *); // eax
  double v13; // st5
  float *v14; // eax
  int v15; // edx
  double v16; // st7
  int (__thiscall *v17)(float *); // eax
  float *v18; // eax
  char v19[44]; // [esp+4h] [ebp-84h] BYREF
  float v20; // [esp+30h] [ebp-58h]
  float v21[3]; // [esp+58h] [ebp-30h] BYREF
  float v22[3]; // [esp+64h] [ebp-24h] BYREF
  float v23[3]; // [esp+70h] [ebp-18h] BYREF
  float v24; // [esp+7Ch] [ebp-Ch]
  float v25; // [esp+80h] [ebp-8h]
  float v26; // [esp+84h] [ebp-4h]
  int savedregs; // [esp+88h] [ebp+0h] BYREF

  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
    || ((_BYTE)this[64] & 1) == 0
    || this[418] > (double)*(float *)(dword_106B31C8 + 12) )
  {
    return 0;
  }
  if ( fabs(*(float *)((*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) + 724) - this[181]) > 128.0
    || a3 > ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 1984))(this) )
  {
    return 39;
  }
  if ( a3 < 200.0 )
    return 0;
  if ( a2 < 0.8 )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 296))(this) )
    return 0;
  v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  if ( v5 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, float *))(*(_DWORD *)v5 + 876))(v5, this) )
      return 0;
  }
  v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  v7 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
  v9 = *v8 - *v7;
  v10 = v8[1] - v7[1];
  v11 = v8[2];
  v12 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 576);
  v13 = v11 - v7[2];
  v23[0] = -16.0;
  v23[1] = -16.0;
  v23[2] = -16.0;
  v21[0] = 16.0;
  v21[1] = 16.0;
  v21[2] = 16.0;
  v24 = v9 * 0.5;
  v25 = v10 * 0.5;
  v26 = 0.5 * v13;
  v14 = (float *)v12(this);
  v22[0] = *v14 + v24;
  v15 = *(_DWORD *)this;
  v22[1] = v14[1] + v25;
  v16 = v14[2] + v26;
  v17 = *(int (__thiscall **)(float *))(v15 + 576);
  v22[2] = v16;
  v18 = (float *)v17(this);
  sub_100231A0((int)&savedregs, (int)this, v18, v22, v23, v21, 33701899, (int)this, 0, (int)v19);
  if ( 1.0 != v20 )
    return 0;
  return 21;
}
