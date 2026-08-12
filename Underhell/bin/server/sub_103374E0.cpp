char __thiscall sub_103374E0(int this, _DWORD *a2)
{
  int v2; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edx
  float *v8; // edi
  _DWORD *v9; // eax
  float *v10; // eax
  double v11; // st7
  int v12; // edi
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // edi
  float *v18; // eax
  bool v19; // zf
  int *v20; // ebx
  int v21; // edi
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  float *v24; // eax
  double v25; // st4
  double v26; // st6
  double v27; // st4
  double v28; // st5
  double v29; // st6
  void (__thiscall *v30)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD); // eax
  double v31; // st7
  long double v32; // st7
  float v34; // [esp+18h] [ebp-24h] BYREF
  float v35; // [esp+1Ch] [ebp-20h]
  float v36; // [esp+20h] [ebp-1Ch]
  float v37; // [esp+24h] [ebp-18h] BYREF
  float v38; // [esp+28h] [ebp-14h]
  float v39; // [esp+2Ch] [ebp-10h]
  float v40; // [esp+30h] [ebp-Ch] BYREF
  float v41; // [esp+34h] [ebp-8h]
  float v42; // [esp+38h] [ebp-4h]
  _DWORD *v43; // [esp+44h] [ebp+8h]

  v2 = *a2 - 12;
  switch ( *a2 )
  {
    case 0xC:
      if ( !sub_100697A0((_DWORD *)this, 99, 1) )
        goto LABEL_4;
      if ( sub_10022C40((_DWORD *)this) )
      {
        v6 = sub_10022C40((_DWORD *)this);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 264))(v6) )
          goto LABEL_4;
      }
      goto LABEL_19;
    case 0x81:
      if ( sub_10333FE0((_DWORD *)this) )
      {
        v4 = *(_DWORD *)this;
        v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 368))(this, 1.0, 0.5, 0.0);
        (*(void (__thiscall **)(int, int))(v4 + 1712))(this, v5);
      }
      goto LABEL_4;
    case 0x99:
      if ( *(_BYTE *)(this + 896) )
        goto LABEL_17;
      if ( !sub_10022C40((_DWORD *)this) )
        goto LABEL_19;
      v8 = (float *)sub_10019640((_DWORD *)this);
      v9 = (_DWORD *)sub_10022C40((_DWORD *)this);
      v10 = (float *)sub_10019640(v9);
      v34 = *v10 - *v8;
      v35 = v10[1] - v8[1];
      v11 = v10[2] - v8[2];
      v36 = v11;
      sub_10018D40(&v34);
      if ( v11 > 180.0 )
        sub_10027CD0((_DWORD *)this, 0);
      goto LABEL_22;
    case 0x9A:
      v15 = sub_100CF460((_DWORD *)this);
      v16 = (_DWORD *)__RTDynamicCast(
                        v15,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&CBaseCombatWeapon `RTTI Type Descriptor',
                        (int)&CWeaponRPG `RTTI Type Descriptor',
                        0);
      v17 = v16;
      v43 = v16;
      if ( !v16 )
      {
        LOBYTE(v2) = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 3);
        return v2;
      }
      if ( !sub_10336DF0(v16) )
      {
        sub_10408BA0(v17);
        LOBYTE(v2) = sub_10027CD0((_DWORD *)this, 0);
        return v2;
      }
      v18 = (float *)sub_10403DB0(v17);
      v19 = *(_BYTE *)(this + 5728) == 0;
      v40 = *v18;
      v41 = v18[1];
      v42 = v18[2];
      if ( !v19 )
        goto LABEL_45;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      {
        if ( sub_10023D10((_DWORD *)this, 13) )
        {
          LOBYTE(v2) = sub_10408BA0(v17);
        }
        else
        {
          if ( !(unsigned __int8)sub_10403DC0(v17) )
            sub_10409420(v17);
          v20 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
          v21 = *v20;
          v22 = sub_10019640((_DWORD *)this);
          (*(void (__thiscall **)(int *, float *, _DWORD *, _DWORD))(v21 + 520))(v20, &v37, v22, 0);
          if ( *(int *)(dword_106B31C8 + 20) <= 1
            && (v23 = (_DWORD *)sub_10261B20()) != 0
            && (v24 = (float *)sub_10019640(v23),
                v25 = v38 - v24[1],
                v26 = v25 * v25,
                v27 = v37 - *v24,
                v28 = v26,
                v29 = v39 - v24[2],
                v27 * v27 + v28 + v29 * v29 < 69696.0) )
          {
            v30 = *(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244);
            *(_BYTE *)(this + 5728) = 1;
            v30(this, "TLK_WATCHOUT", 0, 0, 0, 0);
          }
          else
          {
            v34 = v37 - v40;
            v35 = v38 - v41;
            v36 = v39 - v42;
            v31 = off_10689714();
            if ( v31 > 90.0 )
              v31 = 90.0;
            v40 = v34 * v31 + v40;
            v41 = v35 * v31 + v41;
            v42 = v31 * v36 + v42;
          }
          v17 = v43;
          if ( *(_BYTE *)(this + 5728) )
LABEL_45:
            v42 = v42 + 90.0;
          if ( sub_10022810((float *)this) )
          {
            sub_10408BA0(v17);
            LOBYTE(v2) = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 10);
          }
          else
          {
            v32 = sin(*(float *)(dword_106B31C8 + 12)) * 18.0;
            v40 = v40 + v32;
            v41 = v41 + v32;
            v42 = v32 + v42;
            LOBYTE(v2) = sub_10409300(&v40);
          }
        }
      }
      else
      {
        sub_10408BA0(v17);
        LOBYTE(v2) = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 6);
      }
      return v2;
    case 0x9B:
      LOBYTE(v2) = sub_10043050((void *)this, 0, 0);
      if ( *(_BYTE *)(this + 896) )
        LOBYTE(v2) = sub_10027CD0((_DWORD *)this, 0);
      return v2;
    case 0x9C:
      v2 = sub_100233D0((_DWORD *)this);
      if ( !v2 )
      {
        sub_100E0970(this, v7, 3, 0);
        sub_10020460((_DWORD *)this, 1);
        LOBYTE(v2) = sub_10027CD0((_DWORD *)this, 0);
      }
      return v2;
    case 0x9D:
      if ( *(_BYTE *)(this + 896) )
      {
        sub_10027740(this);
        LOBYTE(v2) = sub_10027CD0((_DWORD *)this, 0);
      }
      return v2;
    case 0x9F:
      if ( *(_BYTE *)(this + 896) )
      {
LABEL_17:
        LOBYTE(v2) = sub_10027CD0((_DWORD *)this, 0);
      }
      else if ( sub_10022C40((_DWORD *)this) )
      {
LABEL_22:
        v12 = *(_DWORD *)(this + 2604);
        v13 = (_DWORD *)sub_10022C40((_DWORD *)this);
        v14 = sub_10019640(v13);
        LOBYTE(v2) = sub_10078720(v12, (int)v14, -1.0);
      }
      else
      {
LABEL_19:
        LOBYTE(v2) = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 1);
      }
      return v2;
    default:
LABEL_4:
      LOBYTE(v2) = sub_103955D0(a2);
      return v2;
  }
}
