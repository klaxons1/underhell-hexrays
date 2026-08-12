char __thiscall sub_100F1460(
        volatile signed __int32 *this,
        int a2,
        int a3,
        Concurrency::details::SchedulingRing *a4,
        void *a5)
{
  char *v6; // eax
  int v7; // eax
  const char *v8; // esi
  const char *v9; // eax
  char result; // al
  const char *v11; // esi
  const char *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  _DWORD *v17; // eax
  double v18; // st7
  const char *v19; // [esp+4h] [ebp-10h]
  const char *v20; // [esp+4h] [ebp-10h]
  float v21; // [esp+4h] [ebp-10h]
  int v22; // [esp+28h] [ebp+14h]
  float v23; // [esp+28h] [ebp+14h]
  float v24; // [esp+28h] [ebp+14h]

  v6 = (char *)sub_104183D0(a4);
  v7 = sub_100BDF40((int)this, v6);
  *(_DWORD *)(a2 + 24) = v7;
  *(_DWORD *)(a2 + 16) = -1;
  if ( v7 >= 0 )
  {
    if ( sub_100EFD10((void *)this, a3, (int)a4, 0) || (unsigned __int8)sub_10418690(a4) )
    {
      v13 = Concurrency::details::SchedulingRing::Id(a4);
      *(_DWORD *)(a2 + 20) = sub_1041EF20(v13);
      v14 = sub_100ED810(this, a3);
      v15 = sub_100C71D0(this, *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 20) + v14);
      *(_DWORD *)(a2 + 16) = v15;
      sub_100C4F40(this, v15, 1);
      sub_100C6460(this, *(_DWORD *)(a2 + 16), 0.0);
      v16 = dword_10700AC8;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
      if ( !*((_DWORD *)this + 275) && sub_100D7240((void *)this) )
        sub_100BD750(this);
      v17 = (_DWORD *)*((_DWORD *)this + 275);
      if ( !v17 || (v22 = *((_DWORD *)this + 275), !*v17) )
        v22 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 104))(v16);
      if ( (sub_100BA270(v22, *(_DWORD *)(a2 + 24)) & 1) != 0 )
      {
        sub_100C4EE0(this, *(_DWORD *)(a2 + 16), 1.0);
      }
      else
      {
        v23 = sub_1041CA40(a3);
        v18 = v23 - sub_10418510(a4);
        v24 = v18;
        sub_10019B30(this, *(_DWORD *)(a2 + 24));
        v21 = v24 / v18 - (double)(int)(v24 / v18);
        sub_100C6320(this, *(_DWORD *)(a2 + 16), v21, v21);
        sub_100C4EE0(this, *(_DWORD *)(a2 + 16), 0.0);
      }
      if ( (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*this + 296))(this) )
      {
        result = 1;
        *(float *)(a2 + 32) = 0.0;
      }
      else
      {
        result = 1;
        *(float *)(a2 + 32) = 1.0;
      }
    }
    else
    {
      v11 = (const char *)*((_DWORD *)this + 65);
      if ( !v11 )
        v11 = String;
      v20 = (const char *)sub_104183D0(a4);
      v12 = (const char *)sub_10018D60(a5);
      Warning("CSceneEntity %s :\"%s\" failed to start sequence \"%s\"\n", v11, v12, v20);
      return 0;
    }
  }
  else
  {
    v8 = (const char *)*((_DWORD *)this + 65);
    if ( !v8 )
      v8 = String;
    v19 = (const char *)sub_104183D0(a4);
    v9 = (const char *)sub_10018D60(a5);
    Warning("CSceneEntity %s :\"%s\" unable to find sequence \"%s\"\n", v8, v9, v19);
    return 0;
  }
  return result;
}
