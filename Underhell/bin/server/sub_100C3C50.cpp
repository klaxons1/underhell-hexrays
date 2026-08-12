volatile __int32 *__thiscall sub_100C3C50(int this, int a2, int a3)
{
  int v4; // edi
  DWORD CurrentThreadId; // ecx
  void (*v6)(void); // edx
  int v7; // ebx
  _DWORD *v8; // eax
  bool v9; // zf
  int v10; // ebx
  volatile __int32 *result; // eax
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // edi
  int v15; // edx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  _BYTE v21[2048]; // [esp+40h] [ebp-E34h] BYREF
  _BYTE v22[1544]; // [esp+840h] [ebp-634h] BYREF
  float v23; // [esp+E48h] [ebp-2Ch]
  int v24[4]; // [esp+E4Ch] [ebp-28h] BYREF
  int v25[3]; // [esp+E5Ch] [ebp-18h] BYREF
  int v26; // [esp+E68h] [ebp-Ch]
  int v27; // [esp+E6Ch] [ebp-8h]
  int v28; // [esp+E70h] [ebp-4h]
  int v29; // [esp+E80h] [ebp+Ch]

  v4 = this + 1112;
  v26 = this + 1112;
  CurrentThreadId = GetCurrentThreadId();
  if ( CurrentThreadId != *(_DWORD *)v4
    && _InterlockedCompareExchange((volatile signed __int32 *)v4, CurrentThreadId, 0) )
  {
    _mm_pause();
    CThreadFastMutex::Lock(v4, CurrentThreadId, 0);
  }
  else
  {
    ++*(_DWORD *)(v4 + 4);
  }
  CVProfile::EnterScope(g_VProfCurrentProfile, "CBaseAnimating::SetupBones", 0, "Server Animation", 0, 4);
  v6 = *(void (**)(void))(*(_DWORD *)dword_10700AC8 + 100);
  v27 = dword_10700AC8;
  v6();
  v7 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v8 = *(_DWORD **)(this + 1100);
  if ( !v8 || (v9 = *v8 == 0, v28 = *(_DWORD *)(this + 1100), v9) )
    v28 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
  v10 = v28;
  if ( v28 )
  {
    *(_DWORD *)(this + 252) |= 8u;
    v12 = *(_DWORD *)(this + 252);
    v23 = *(float *)(this + 884);
    if ( (v12 & 0x800) != 0 )
      sub_100DAE60(this);
    v25[0] = *(int *)(this + 580);
    v25[1] = *(int *)(this + 584);
    *(float *)&v25[2] = *(float *)(this + 588) + v23;
    if ( !*(_DWORD *)(dword_1069627C + 48)
      || (v13 = (_DWORD *)sub_100D7680(this)) == 0
      || sub_10023D10(v13, 1)
      || (*(_BYTE *)(this + 1060) & 3) != 0
      || (unsigned __int8)sub_100D7830(this) )
    {
      if ( *(_DWORD *)(this + 888) )
      {
        v15 = *(_DWORD *)(this + 252);
        ++*(_DWORD *)(this + 892);
        memset(v24, 0, sizeof(v24));
        if ( (v15 & 0x800) != 0 )
          sub_100DAE60(this);
        v14 = a3;
        sub_101073B0(
          *(void **)(this + 888),
          v10,
          this + 704,
          (int)v25,
          *(float *)(dword_106B31C8 + 12),
          *(_DWORD *)(this + 892),
          a3);
        (*(void (__thiscall **)(int, int, _BYTE *, _BYTE *, int))(*(_DWORD *)this + 768))(this, v10, v22, v21, a3);
        sub_10106510(v22, v21, a2, v24);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 780))(this, *(float *)(dword_106B31C8 + 12));
        sub_10105210(v22, v21, a2, v24);
      }
      else
      {
        v14 = a3;
        (*(void (__thiscall **)(int, int, _BYTE *, _BYTE *, int))(*(_DWORD *)this + 768))(this, v10, v22, v21, a3);
      }
    }
    else
    {
      v14 = a3;
      sub_101027A0(v10, v22, v21, a3);
    }
    v16 = *(_DWORD *)(this + 308);
    if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] != v16 >> 12 )
      v17 = 0;
    else
      v17 = off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1];
    v18 = __RTDynamicCast(
            v17,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CBaseAnimating `RTTI Type Descriptor',
            0);
    v19 = v18;
    if ( v18 && (v20 = sub_100BFC30(v18), (v29 = v20) != 0) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      {
        sub_100DAE60(this);
        v20 = v29;
      }
      sub_100BEE00((int *)v28, this + 704, (int)v25, (int)v22, (int)v21, a2, v19, v20);
      *(_DWORD *)(this + 252) &= ~8u;
      if ( *(_DWORD *)(dword_106962C4 + 48) )
        sub_100C06C0(this, a2, v14, 1, 0.11, 0);
    }
    else
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_10103010(v28, this + 704, v25, v22, v21, -1, a2, v14);
      if ( *(_DWORD *)(dword_106962C4 + 48) )
        sub_100C06C0(this, a2, v14, 1, 0.11, 0);
      *(_DWORD *)(this + 252) &= ~8u;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 104))(v27);
    CVProfile::ExitScope(g_VProfCurrentProfile);
    result = (volatile __int32 *)v26;
    v9 = (*(_DWORD *)(v26 + 4))-- == 1;
    if ( v9 )
      _InterlockedExchange(result, 0);
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 104))(v27);
    CVProfile::ExitScope(g_VProfCurrentProfile);
    v9 = (*(_DWORD *)(v4 + 4))-- == 1;
    result = *(volatile __int32 **)(v4 + 4);
    if ( v9 )
      _InterlockedExchange((volatile __int32 *)v4, 0);
  }
  return result;
}
