int __thiscall sub_103775A0(int *this, float a2, float a3)
{
  int v4; // eax
  int v5; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // ebx
  int v14; // edi
  int v15; // eax
  float *v16; // eax
  char *v17; // eax
  float v18; // ecx
  float v19; // edx
  float *v20; // eax
  float v21; // ecx
  void (__thiscall *v22)(int *, float *, _DWORD, _DWORD); // edx
  int (__thiscall *v23)(int *); // edx
  float *v24; // eax
  float *v25; // eax
  int v26; // eax
  _DWORD *v27; // ecx
  _DWORD *v28; // eax
  int v29; // eax
  float *v30; // [esp+0h] [ebp-A0h]
  int v31; // [esp+4h] [ebp-9Ch]
  _BYTE v32[44]; // [esp+10h] [ebp-90h] BYREF
  float v33; // [esp+3Ch] [ebp-64h]
  int v34; // [esp+5Ch] [ebp-44h]
  float v35[3]; // [esp+64h] [ebp-3Ch] BYREF
  float v36[3]; // [esp+70h] [ebp-30h] BYREF
  float v37; // [esp+7Ch] [ebp-24h]
  float v38; // [esp+80h] [ebp-20h]
  float v39; // [esp+84h] [ebp-1Ch]
  float v40[3]; // [esp+88h] [ebp-18h] BYREF
  float v41[2]; // [esp+94h] [ebp-Ch] BYREF
  float v42; // [esp+9Ch] [ebp-4h]
  int savedregs; // [esp+A0h] [ebp+0h] BYREF

  v4 = (*(int (__thiscall **)(int *))(*this + 368))(this);
  if ( !v4 )
    return 0;
  if ( (*(_DWORD *)(v4 + 192) & 0x20) != 0 )
    return 0;
  v5 = *(_DWORD *)(v4 + 92);
  if ( v5 == dword_106E8514
    || v5 == dword_106E8510
    || *((float *)this + 1139) > (double)*(float *)(dword_106B31C8 + 12)
    && (this[1145] <= 0 || *((float *)this + 1147) <= (double)*(float *)(dword_106B31C8 + 12)) )
  {
    return 0;
  }
  v7 = (*(int (__thiscall **)(int *))(*this + 368))(this);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 220))(v7) == 3 )
    return 0;
  if ( a3 <= 80.0 )
  {
    if ( a2 < 0.7 )
      return 40;
    v17 = sub_10073710(this[419]);
    v18 = *(float *)v17;
    v19 = *((float *)v17 + 1);
    v42 = *((float *)v17 + 2);
    v31 = this[419];
    v41[0] = v18;
    v41[1] = v19;
    v20 = (float *)sub_10073730(v31);
    v21 = *v20;
    v42 = v41[0];
    v40[1] = v20[1];
    v22 = *(void (__thiscall **)(int *, float *, _DWORD, _DWORD))(*this + 528);
    v40[0] = v21;
    v40[2] = v21;
    v22(this, v36, 0, 0);
    v23 = *(int (__thiscall **)(int *))(*this + 576);
    v37 = v36[0] * 80.0;
    v38 = v36[1] * 80.0;
    v39 = 80.0 * v36[2];
    v24 = (float *)v23(this);
    v35[0] = v37 + *v24;
    v35[1] = v24[1] + v38;
    v35[2] = v24[2] + v39;
    v25 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
    sub_100231A0((int)&savedregs, (int)this, v25, v35, v41, v40, 33701899, (int)this, 0, (int)v32);
    if ( 1.0 == v33 || !v34 )
      return 39;
    v26 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    if ( v34 != v26 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v34 + 284))(v34) )
    {
      v27 = (_DWORD *)v34;
      if ( *(_BYTE *)(v34 + 225) == 2 )
      {
        if ( __RTDynamicCast(
               v34,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CBreakableProp `RTTI Type Descriptor',
               0) )
        {
          return 23;
        }
        v27 = (_DWORD *)v34;
      }
      if ( sub_10079BE0(v27) )
        return 39;
      if ( !(*(int (__thiscall **)(int *))(*this + 368))(this) )
        return 39;
      v28 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 368))(this);
      v29 = sub_101C5260(v28);
      if ( v29 != v34 )
        return 39;
    }
    return 23;
  }
  if ( !(*(int (__thiscall **)(int *))(*this + 368))(this) )
    return 39;
  v8 = (*(int (__thiscall **)(int *))(*this + 368))(this);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 288))(v8);
  v10 = v9;
  if ( v9 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 1088))(v9) )
    return sub_10377420(this, v10, a2);
  v11 = (*(int (__thiscall **)(int *))(*this + 368))(this);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 320))(v11) )
    return 39;
  v12 = (*(int (__thiscall **)(int *))(*this + 368))(this);
  v13 = (_DWORD *)sub_1001F4B0(v12);
  v14 = sub_103FB6F0(v13);
  if ( !v14 )
  {
    v15 = sub_100CF460(v13);
    v14 = sub_103FA8C0(v15);
    if ( !v14 )
      return 39;
  }
  v30 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
  v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 576))(v14);
  sub_1004BCD0(v16, v30);
  return 23;
}
