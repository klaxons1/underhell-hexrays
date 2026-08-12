int __thiscall sub_1032D910(int *this, float a2, float a3)
{
  double v4; // st7
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // ebx
  int v8; // edi
  int v9; // eax
  float *v10; // eax
  bool v11; // zf
  int result; // eax
  char *v13; // eax
  float v14; // ecx
  float v15; // edx
  float *v16; // eax
  float v17; // ecx
  void (__thiscall *v18)(int *, float *, _DWORD, _DWORD); // edx
  double v19; // st7
  int (__thiscall *v20)(int *); // edx
  float *v21; // eax
  float *v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  double v27; // st7
  int v28; // edi
  float *v29; // ebx
  float *v30; // eax
  double v31; // st6
  double v32; // st5
  _DWORD *v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // [esp-8h] [ebp-B8h]
  float *v37; // [esp-4h] [ebp-B4h]
  _DWORD v38[5]; // [esp+Ch] [ebp-A4h] BYREF
  float v39; // [esp+20h] [ebp-90h] BYREF
  float v40; // [esp+24h] [ebp-8Ch]
  float v41; // [esp+2Ch] [ebp-84h]
  float v42; // [esp+30h] [ebp-80h]
  float v43; // [esp+4Ch] [ebp-64h]
  int v44; // [esp+6Ch] [ebp-44h]
  float v45[3]; // [esp+74h] [ebp-3Ch] BYREF
  float v46[3]; // [esp+80h] [ebp-30h] BYREF
  float v47[2]; // [esp+8Ch] [ebp-24h] BYREF
  float v48; // [esp+94h] [ebp-1Ch]
  float v49; // [esp+98h] [ebp-18h]
  float v50; // [esp+9Ch] [ebp-14h]
  float v51; // [esp+A0h] [ebp-10h]
  float v52[3]; // [esp+A4h] [ebp-Ch] BYREF
  int savedregs; // [esp+B0h] [ebp+0h] BYREF
  float v54; // [esp+BCh] [ebp+Ch]
  float v55; // [esp+BCh] [ebp+Ch]

  v4 = ((double (__thiscall *)(int *))*(_DWORD *)(*this + 2240))(this);
  if ( v4 >= a3 )
  {
    if ( a2 < 0.7 )
      return 40;
    v13 = sub_10073710(this[419]);
    v14 = *(float *)v13;
    v15 = *((float *)v13 + 1);
    v48 = *((float *)v13 + 2);
    v36 = this[419];
    v47[0] = v14;
    v47[1] = v15;
    v16 = (float *)sub_10073730(v36);
    v17 = *v16;
    v48 = v47[0];
    v52[1] = v16[1];
    v18 = *(void (__thiscall **)(int *, float *, _DWORD, _DWORD))(*this + 528);
    v52[0] = v17;
    v52[2] = v17;
    v18(this, v46, 0, 0);
    sub_100B8E60(v38, (int)this, 0, (int)this, 0, 1);
    v19 = ((double (__thiscall *)(int *))*(_DWORD *)(*this + 2240))(this);
    v20 = *(int (__thiscall **)(int *))(*this + 576);
    v49 = v46[0] * v19;
    v50 = v46[1] * v19;
    v51 = v19 * v46[2];
    v21 = (float *)v20(this);
    v45[0] = *v21 + v49;
    v45[1] = v21[1] + v50;
    v45[2] = v21[2] + v51;
    v22 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
    sub_10023240(COERCE_FLOAT(&savedregs), (int)this, v22, v45, v47, v52, 33701899, (int)v38, (int)&v39);
    if ( 1.0 != v43 && v44 )
    {
      v23 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      if ( v44 == v23
        || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v44 + 284))(v44)
        || *(_BYTE *)(v44 + 225) == 2
        && __RTDynamicCast(
             v44,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBreakableProp `RTTI Type Descriptor',
             0) )
      {
        return 23;
      }
      v55 = (v41 - v39) * (v41 - v39) + (v42 - v40) * (v42 - v40);
      if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
      {
        v24 = (*(int (__thiscall **)(int *))(*this + 368))(this);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 288))(v24) )
        {
          v25 = (*(int (__thiscall **)(int *))(*this + 368))(this);
          v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 1096))(v25);
          if ( v44 == v26 )
          {
            v27 = ((double (__thiscall *)(int *))*(_DWORD *)(*this + 2240))(this);
            if ( v27 * 0.75 * (v27 * 0.75) > v55 )
              return 23;
          }
        }
      }
      if ( sub_100E8AC0((_DWORD *)v44) )
      {
        v28 = (*(int (__thiscall **)(int *))(*this + 368))(this);
        v29 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
        v30 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v28 + 576))(v28);
        v31 = v30[1] - v29[1];
        v32 = *v30 - *v29;
        if ( v32 * v32 + v31 * v31 > v55 )
          return 75;
      }
      if ( !sub_10079BE0((_DWORD *)v44) )
      {
        if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
        {
          v33 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 368))(this);
          v34 = sub_101C5260(v33);
          if ( v34 == v44 )
            return 23;
        }
      }
    }
    if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
    {
      v35 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 220))(v35) == 6;
LABEL_31:
      result = 23;
      if ( v11 )
        return result;
    }
  }
  else if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
  {
    v5 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
    {
      v6 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      v7 = (_DWORD *)v6;
      if ( !v6 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) )
        v7 = 0;
      v8 = sub_103FB6F0(v7);
      if ( v8 || (v9 = sub_100CF460(v7), (v8 = sub_103FA8C0(v9)) != 0) )
      {
        v37 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
        v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 576))(v8);
        sub_1004BCD0(v10, v37);
        v54 = v4;
        v11 = ((double (__thiscall *)(int *))*(_DWORD *)(*this + 2240))(this) >= v54;
        goto LABEL_31;
      }
    }
  }
  return 39;
}
