char __thiscall sub_10375A40(int this, int a2, int a3)
{
  int *v4; // esi
  double v5; // st7
  int v6; // eax
  int v8; // eax
  float v9; // [esp+14h] [ebp-10h]
  float v10; // [esp+30h] [ebp+Ch]

  if ( !sub_102654D0(a2, a3) || !sub_10265430(a3, a2, *(_DWORD *)(this + 4)) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2) )
    return 1;
  v4 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  if ( !v4 )
    return 1;
  if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD, int))(*v4 + 68))(v4, *(_DWORD *)(this + 8), a3) )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B3CDC + 112))(
          dword_106B3CDC,
          *(_DWORD *)(this + 8),
          v4[105]) )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v4 + 284))(v4) && *((_BYTE *)v4 + 306) == 6 )
  {
    v5 = sub_101B4DE0((int)v4);
    if ( v5 < *(float *)(this + 12) )
    {
      if ( *(float *)(this + 12) * 0.66600001 > v5 )
        return 0;
      v10 = *((float *)v4 + 88);
      v6 = sub_10265000(*(_DWORD *)(this + 4));
      if ( sub_100737D0(*(_DWORD *)(v6 + 1676)) > v10 )
        return 0;
    }
  }
  if ( (*(int (__thiscall **)(int *))(*v4 + 220))(v4) != 4 )
    return 1;
  v8 = sub_10265000(*(_DWORD *)(this + 4));
  v9 = (float)v4[55];
  sub_10370AF0(v8, v4, v9);
  return 0;
}
