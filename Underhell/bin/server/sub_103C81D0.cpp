int __thiscall sub_103C81D0(float *this, float a2, float a3)
{
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  float *v7; // edi
  float *v8; // eax
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  float *v15; // edi
  float *v16; // eax
  double v17; // st4
  double v18; // st7
  double v19; // st4
  double v20; // st5
  char Buffer[128]; // [esp+4h] [ebp-80h] BYREF
  float v22; // [esp+90h] [ebp+Ch]
  float v23; // [esp+90h] [ebp+Ch]

  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
    || this[418] > (double)*(float *)(dword_106B31C8 + 12)
    || sub_100697A0(this, 62, 1) )
  {
    return 0;
  }
  if ( a3 < 32.0 )
    return 38;
  if ( ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 1984))(this) < a3 )
    return 39;
  if ( a2 < 0.65 )
    return 40;
  v5 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  if ( !sub_102FCD60(v5) )
    return 21;
  v22 = sub_102FB400();
  v6 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  v7 = (float *)sub_10019640(v6);
  v8 = (float *)sub_10019640(this);
  v9 = *v8 - *v7;
  v10 = v9 * v9;
  v11 = v8[1] - v7[1];
  v12 = v8[2] - v7[2];
  if ( v22 * v22 > v12 * v12 + v11 * v11 + v10 )
    return 38;
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    return 21;
  v13 = (_DWORD *)sub_10261B20();
  if ( !v13 )
    return 21;
  v23 = sub_102FB400();
  v14 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  v15 = (float *)sub_10019640(v14);
  v16 = (float *)sub_10019640(v13);
  v17 = *v16 - *v15;
  v18 = v17 * v17;
  v19 = v16[1] - v15[1];
  v20 = v16[2] - v15[2];
  if ( v23 * v23 <= v20 * v20 + v19 * v19 + v18 )
    return 21;
  sub_10092C10(Buffer, "antlion_worker:true");
  (*(void (__thiscall **)(float *, const char *, char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
    this,
    "TLK_DANGER",
    Buffer,
    0,
    0,
    0);
  return 0;
}
