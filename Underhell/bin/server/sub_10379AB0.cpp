char __thiscall sub_10379AB0(int this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  float *v8; // eax
  double v9; // st4
  double v10; // rt0
  char v11; // al
  int v12; // ebx
  double v13; // st7
  double v14; // st7
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ebx
  int v19; // [esp+8h] [ebp-28h]
  float v20; // [esp+Ch] [ebp-24h]
  _BYTE v21[12]; // [esp+18h] [ebp-18h] BYREF
  float v22[3]; // [esp+24h] [ebp-Ch] BYREF

  v5 = a5;
  if ( *(float *)&a5 == 0.0
    || !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a5 + 24)) )
  {
    sub_10373280(this, this, &a5);
    v5 = a5;
    if ( !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a5 + 24)) )
      return 1;
  }
  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1080))(this, v5) != 1
    || *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 1672) )
  {
    v11 = *(_BYTE *)(v5 + 306);
    if ( !v11 || v11 == 7 )
    {
      v17 = (_DWORD *)__RTDynamicCast(
                        v5,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                        (int)&CBreakable `RTTI Type Descriptor',
                        0);
      v18 = v17;
      if ( v17 && sub_101486C0(v17) && *((_BYTE *)v18 + 225) == 2 && (int)v18[55] > 0 )
        sub_10373470((void *)this, v5);
    }
    else
    {
      if ( v11 != 6 )
        return 0;
      v12 = *(_DWORD *)(v5 + 424);
      if ( !v12 )
        return 0;
      if ( ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v12 + 76))(*(_DWORD *)(v5 + 424)) & 4) != 0 )
      {
        sub_101FB2A0(v5);
        return 0;
      }
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 40))(v12) )
      {
        *(float *)&a5 = sub_101B4DE0(v5);
        v13 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 424) + 116))(*(_DWORD *)(this + 424))
            * 0.5;
        if ( *(float *)&a5 >= v13 )
          return 1;
        if ( v13 * 0.66600001 > *(float *)&a5
          || (v19 = *(_DWORD *)(this + 1676), a5 = *(int *)(v5 + 352), v14 = sub_100737D0(v19), v14 > *(float *)&a5) )
        {
          if ( *(int *)(v5 + 220) > 0 )
          {
            v15 = __RTDynamicCast(
                    v5,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CBreakableProp `RTTI Type Descriptor',
                    0);
            if ( v15 )
            {
              if ( *(_BYTE *)(v15 + 225) == 2 )
              {
                v16 = *(_DWORD *)(v15 + 220);
                if ( v16 > 0 && v16 <= 50 )
                  sub_10373470((void *)this, v5);
              }
            }
          }
          sub_1001E350((float *)v5, 2.0);
          return 0;
        }
      }
    }
    return 1;
  }
  sub_1023C380((_DWORD *)this, (int)"NPC_Hunter.ChargeHitEnemy", 0.0, 0);
  sub_10373470((void *)this, v5);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 284))(v5) )
  {
    v8 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 904))(this, v21);
    v9 = v8[2];
    v10 = v8[1] * 400.0;
    v22[0] = *v8 * 400.0;
    v22[1] = v10;
    v22[2] = 400.0 * v9 + 200.0;
    sub_100EA150(v5, v22);
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 264))(v5)
    && (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) == v5 )
  {
    sub_100285C0((_DWORD *)this, 0, 1);
  }
  v20 = *(float *)(dword_106B31C8 + 12) + 2.0;
  sub_10031BA0(this, v20);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 264))(v5)
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 284))(v5) )
  {
    return 1;
  }
  sub_10039F40((int *)this, dword_106E84C8);
  return 0;
}
