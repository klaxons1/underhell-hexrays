int __thiscall sub_100C4A30(int this, const char *a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // ebx
  int *v10; // ecx
  int v12; // [esp+Ch] [ebp-4h]

  v12 = dword_10700AC8;
  (*(void (**)(void))(*(_DWORD *)dword_10700AC8 + 100))();
  sub_100BD870((_DWORD *)this);
  if ( *a2 )
  {
    v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31F0 + 8))(dword_106B31F0, a2);
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, v3);
    if ( v4 )
    {
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 36))(dword_106B31F0, v4) != 3 )
      {
        v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 36))(dword_106B31F0, v4);
        Msg("Setting CBaseAnimating to non-studio model %s  (type:%i)\n", a2, v5);
      }
    }
  }
  sub_10101200(*(_DWORD *)(this + 1056));
  *(_DWORD *)(this + 1056) = 0;
  sub_10264670(this, a2);
  v6 = *(_DWORD *)(this + 1100);
  if ( v6 )
  {
    nullsub_4(*(_DWORD *)(this + 1100));
    if ( *(_DWORD *)(v6 + 84) )
      sub_10184660(*(_DWORD *)(v6 + 84));
    sub_101C7570(v6 + 96);
    sub_101C8650(v6 + 96);
    sub_102375F0(v6 + 64);
    sub_102375F0(v6 + 44);
    sub_102375F0(v6 + 8);
    sub_10184660(v6);
    *(_DWORD *)(this + 1100) = 0;
  }
  v7 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v8 = *(_DWORD **)(this + 1100);
  if ( v8 && *v8 )
    v9 = *(_DWORD *)(this + 1100);
  else
    v9 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
  if ( v9 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 800))(this);
    if ( *(_DWORD *)(this + 908) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(this + 24);
        if ( v10 )
          sub_100194B0(v10, 908);
      }
      *(_DWORD *)(this + 908) = 0;
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 792))(this);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 104))(v12);
}
