void __thiscall sub_1016C480(_DWORD *this, int a2)
{
  const char *v2; // edi
  bool v3; // bl
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // edi
  double v11; // st7
  int v12; // eax
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  _DWORD *v16; // esi
  int v17; // eax
  int v18; // eax
  char v19; // [esp+24h] [ebp-10h]
  float v20; // [esp+28h] [ebp-Ch]
  bool v22; // [esp+33h] [ebp-1h]

  v2 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 4))(*(_DWORD *)(a2 + 8));
  v22 = strcmp("player_hurt", v2) == 0;
  v3 = strcmp("player_death", v2) == 0;
  v4 = strcmp("round_start", v2);
  v5 = strcmp("round_end", v2);
  if ( v22 || v3 )
  {
    v6 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD))(**(_DWORD **)(a2 + 8) + 24))(
           *(_DWORD *)(a2 + 8),
           "userid",
           0);
    v7 = sub_10261A90(v6);
    v8 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD))(**(_DWORD **)(a2 + 8) + 24))(
           *(_DWORD *)(a2 + 8),
           "attacker",
           0);
    v9 = sub_10261A90(v8);
    v10 = v9;
    if ( v7 )
    {
      if ( v9 == v7 || !v9 )
      {
        v17 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(v7 + 24));
        v16 = this;
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int, _DWORD, _DWORD))(*this + 36))(
          this,
          v17,
          0,
          96,
          20,
          0,
          0);
      }
      else
      {
        if ( v3 && RandomFloat(0.0, 1.0) > 0.33 || v22 && RandomFloat(0.0, 1.0) > 0.66 )
        {
          v11 = 0.30000001;
          v19 = 1;
        }
        else
        {
          v11 = 0.69999999;
          v19 = 0;
        }
        v20 = v11;
        if ( RandomFloat(0.0, 1.0) > v20 )
        {
          v12 = v10;
          v10 = v7;
          v7 = v12;
        }
        v13 = 30;
        if ( RandomFloat(0.0, 1.0) <= 0.5 )
          v13 = -30;
        v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(v10 + 24));
        v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(v7 + 24));
        (*(void (__thiscall **)(_DWORD *, int, int, int, int, int, char))(*this + 36))(
          this,
          v15,
          v14,
          96,
          -20,
          v13,
          v19);
        v16 = this;
      }
      v18 = *(_DWORD *)a2 + (int)(2.0 / *(float *)(dword_106B31C8 + 28) + 0.5);
      if ( v16[13] < v18 )
        v18 = v16[13];
      v16[13] = v18;
    }
  }
  else if ( v4 && v5 )
  {
    DevMsg("No known TV shot for event %s\n", v2);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 24))(this, 0);
  }
}
