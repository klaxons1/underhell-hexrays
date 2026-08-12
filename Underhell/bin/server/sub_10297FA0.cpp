void __thiscall sub_10297FA0(int this, int *a2)
{
  int v2; // eax
  int v4; // edi
  _DWORD *v5; // eax
  float *v6; // eax
  _DWORD *v7; // eax
  float *v8; // edi
  float *v9; // eax
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st6
  void (__thiscall *v15)(int, _DWORD); // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // edi
  float *v21; // eax
  _DWORD *v22; // edi
  float *v23; // eax
  char *v24; // eax
  int v25; // ecx
  float *v26; // [esp-8h] [ebp-84h]
  float *v27; // [esp+0h] [ebp-7Ch]
  char *v28; // [esp+0h] [ebp-7Ch]
  char *v29; // [esp+4h] [ebp-78h]
  _BYTE v30[84]; // [esp+1Ch] [ebp-60h] BYREF
  _DWORD v31[3]; // [esp+70h] [ebp-Ch] BYREF
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF

  v2 = *a2;
  if ( *a2 <= 100000 )
  {
    if ( *a2 != 100000 )
    {
      if ( v2 == 129 )
      {
        if ( !(unsigned __int8)sub_1004B510((void *)this, 100000, 1) || sub_10296970((_DWORD *)this) )
        {
          if ( *(_DWORD *)(dword_106DB0DC + 48) == 1 )
          {
            if ( sub_100519F0((_DWORD *)this) )
            {
              v4 = *(_DWORD *)(this + 4);
              v5 = (_DWORD *)sub_100519F0((_DWORD *)this);
              v26 = (float *)sub_10019640(v5);
              v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
              sub_1011BC50(v6, v26, 0, 255, 0, 1, 0.2);
            }
          }
          sub_1004B450((_BYTE *)this, (int)a2);
        }
        else
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 8))(this, 4);
        }
        return;
      }
LABEL_29:
      sub_1004B450((_BYTE *)this, (int)a2);
      return;
    }
    if ( *(_BYTE *)(this + 28) && *(_BYTE *)(*(_DWORD *)(this + 4) + 896) && *(_BYTE *)(this + 64) )
    {
      sub_10295C30((int *)this);
      *(_BYTE *)(this + 64) = 0;
    }
    if ( sub_10295D00((_DWORD *)this) )
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
      {
        if ( !sub_1004C220((_DWORD **)this, 13) )
        {
          v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
          v8 = (float *)sub_10019640(v7);
          v9 = (float *)sub_1004BF30((_DWORD *)this);
          v10 = v9[1] - v8[1];
          v11 = v10 * v10;
          v12 = *v9 - *v8;
          v13 = v11;
          v14 = v9[2] - v8[2];
          if ( v12 * v12 + v13 + v14 * v14 < 32400.0 )
          {
            v15 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12);
            *(float *)(this + 44) = *(float *)(dword_106B31C8 + 12);
            v15(this, 0);
            return;
          }
        }
      }
    }
    sub_10043050(*(void **)(this + 4), 0, 0);
    if ( sub_10296970((_DWORD *)this) && !sub_10022810(*(float **)(this + 4)) )
    {
      v16 = __RTDynamicCast(
              *(_DWORD *)(this + 4),
              0,
              (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
              (int)&CAI_PlayerAlly `RTTI Type Descriptor',
              0);
      if ( v16 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 2332))(v16);
      if ( sub_1004C220((_DWORD **)this, 100000) )
      {
        sub_10295E70(this);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      }
      return;
    }
LABEL_42:
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
    return;
  }
  v17 = v2 - 100001;
  if ( !v17 )
  {
    sub_10043050(*(void **)(this + 4), 0, 0);
    if ( sub_10296970((_DWORD *)this) && !*(_BYTE *)(*(_DWORD *)(this + 4) + 896) )
      return;
    goto LABEL_42;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    if ( v18 != 4 )
      goto LABEL_29;
    if ( sub_10022810(*(float **)(this + 4)) )
    {
      sub_10265570(v31, *(_DWORD *)(this + 4), 0);
      v19 = *(_DWORD *)(this + 4);
      v31[0] = &CTraceFilterOnlyNPCsAndPlayer::`vftable';
      if ( (*(_DWORD *)(v19 + 252) & 0x800) != 0 )
        sub_100DAE60(v19);
      v20 = *(_DWORD *)(this + 4);
      if ( (*(_DWORD *)(v20 + 252) & 0x800) != 0 )
        sub_100DAE60(*(_DWORD *)(this + 4));
      v27 = (float *)sub_10073730(0);
      v21 = (float *)sub_10073710(0);
      sub_10023240(
        COERCE_FLOAT(&savedregs),
        this,
        (float *)(v20 + 580),
        (float *)(v19 + 580),
        v21,
        v27,
        33701899,
        (int)v31,
        (int)v30);
      if ( v30[55] )
      {
        sub_10022750(*(float **)(this + 4), 1.0, 0.0);
      }
      else
      {
        v22 = *(_DWORD **)(this + 4);
        v29 = sub_10073730(0);
        v28 = sub_10073710(0);
        v23 = (float *)sub_10019640(v22);
        v24 = sub_10129A00(v23, (int)v28, (int)v29, (int)v22, 1);
        sub_1010C7F0((float *)dword_10614CA8, (int)v24, "Kill", 1.0, *(_DWORD *)(this + 4), *(_DWORD *)(this + 4), 0);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      }
    }
  }
  else
  {
    sub_10043050(*(void **)(this + 4), 0, 0);
    v25 = *(_DWORD *)(this + 4);
    if ( *(_BYTE *)(v25 + 896) )
    {
      *(_BYTE *)(this + 38) = 0;
      sub_100EA9A0((int *)v25, 1024);
      sub_10296DE0(this);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
    }
  }
}
