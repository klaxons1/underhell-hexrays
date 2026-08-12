char __thiscall sub_103153B0(int this, float *a2, float *a3)
{
  int v4; // eax
  double v5; // st7
  char result; // al
  int v7; // eax
  float *v8; // edi
  float *v9; // eax
  double v10; // st6
  double v11; // st5
  double v12; // st4
  double v13; // st7
  double v14; // st7
  double v15; // st7
  float v16; // [esp+0h] [ebp-10h]
  float v17; // [esp+4h] [ebp-Ch]
  float v18; // [esp+Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 4120) == 4 && ((v4 = *(_DWORD *)(this + 4212), v4 == 4) || v4 == 6) )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_AttackHelicopter.ChargeGun", 0.0, 0);
    v5 = *(float *)(dword_106E389C + 44) + *(float *)(dword_106B31C8 + 12);
    result = 1;
    *(_DWORD *)(this + 4076) = 1;
    *(float *)(this + 4080) = v5;
    *(float *)(this + 4116) = 350.0;
  }
  else
  {
    if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 1672) )
      return 0;
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      return 0;
    v18 = sub_10314220((void *)this);
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
    v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
    v10 = v9[1] - v8[1];
    v11 = v9[2] - v8[2];
    v12 = *v9 - *v8;
    if ( v18 * v18 < v12 * v12 + v10 * v10 + v11 * v11 )
      return 0;
    v13 = *(float *)(dword_106E34F4 + 44) * 0.5;
    if ( v13 < 15.0 )
      v13 = 15.0;
    if ( cos(v13 * 0.017444445) <= a2[1] * a3[1] + *a2 * *a3 + a2[2] * a3[2] )
    {
      if ( *(_DWORD *)(this + 4240) == 3 )
      {
        v14 = *(float *)(dword_106B31C8 + 12);
      }
      else
      {
        sub_1023C380((_DWORD *)this, (int)"NPC_AttackHelicopter.ChargeGun", 0.0, 0);
        v15 = *(float *)(dword_106E389C + 44);
        v17 = 0.1 * v15 + v15;
        v16 = v15 - 0.1 * v15;
        v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                LODWORD(v16),
                LODWORD(v17))
            + *(float *)(dword_106B31C8 + 12);
      }
      *(float *)(this + 4080) = v14;
      result = 1;
      *(_DWORD *)(this + 4076) = 1;
      *(float *)(this + 4132) = 0.0;
      *(float *)(this + 4136) = 0.0;
      *(float *)(this + 4140) = 0.0;
      *(float *)(this + 4144) = 0.0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
