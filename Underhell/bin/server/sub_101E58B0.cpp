int __thiscall sub_101E58B0(float *this, int a2)
{
  float *v3; // ebx
  int result; // eax
  int *v5; // edi
  _DWORD *v6; // eax
  _BYTE v7[80]; // [esp+7Ch] [ebp-68h] BYREF
  _BYTE v8[12]; // [esp+CCh] [ebp-18h] BYREF
  float v9[3]; // [esp+D8h] [ebp-Ch] BYREF

  if ( this && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 320))(this) )
    v3 = this;
  else
    v3 = 0;
  v9[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -5.0,
            -10.0);
  v9[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            5.0,
            10.0);
  v9[2] = 0.0;
  sub_100F7A60(this, v9);
  sub_1023D4B0(16, a2 + 12, 400, 0.2, (int)v3, 0, 0);
  result = sub_101E3110(v3, 4u, 0, 4u);
  v5 = *(int **)(a2 + 76);
  if ( v5 )
  {
    sub_100F5A30(v3, (int)v8, 0, 0);
    off_10689714();
    sub_10248110((int)this, (int)this, 20.0, 8, 0);
    if ( v3 && (*(unsigned __int8 (__thiscall **)(int *))(*v5 + 284))(v5) )
    {
      sub_1023C380((int)"HL2Player.kick_body", 0.0, 0);
      (*(void (__thiscall **)(int *, _DWORD, int, _DWORD, _DWORD))(*v5 + 808))(v5, 10.0, 1, 0.0, 0);
    }
    else
    {
      sub_1023C380((int)"HL2Player.kick_wall", 0.0, 0);
    }
    v6 = (_DWORD *)sub_10248110((int)this, (int)this, 20.0, 10, 0);
    sub_100D9E70(v5, (int)this, v6);
    result = (*(int (__thiscall **)(int *))(*v5 + 288))(v5);
    if ( result )
      return (*(int (__thiscall **)(int, float *, int, const char *, _BYTE *))(*(_DWORD *)off_10627F88 + 120))(
               off_10627F88,
               v3,
               1,
               "weapon_flare_hit",
               v7);
  }
  return result;
}
