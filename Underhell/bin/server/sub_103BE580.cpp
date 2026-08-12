void __thiscall sub_103BE580(int this)
{
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // ecx
  float v8; // [esp+4h] [ebp-Ch]

  sub_10025DD0((_DWORD *)this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  v8 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
  sub_100EC4A0((int *)this, v8, 0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106EBBEC);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 264))(v2) )
      sub_100285C0((_DWORD *)this, 0, 1);
  }
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    sub_100AC080(*(_DWORD *)(this + 2404), 1500);
    v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1480))(this);
    if ( v3 )
      sub_100285C0((_DWORD *)this, v3, 1);
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
      v5 = *(float *)(dword_106B31C8 + 12) + 0.5;
    else
      v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
    *(float *)(this + 3632) = v5;
    *(float *)(this + 3636) = 0.0;
    sub_100EC3F0((_DWORD *)this, (int)sub_103BD880, 0.0, 0);
    v6 = *(_DWORD *)(this + 3656);
    if ( v6 )
    {
      sub_1005C620((_BYTE *)(v6 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v6 + 116)));
      sub_10242820(*(_DWORD *)(this + 3656), 164, 0.1);
      sub_102428B0(*(_DWORD *)(this + 3656), 0.40000001, 0.1);
    }
    sub_1023C380((_DWORD *)this, (int)"NPC_CeilingTurret.Active", 0.0, 0);
  }
  else if ( *(float *)(this + 3636) >= (double)*(float *)(dword_106B31C8 + 12) )
  {
    v7 = *(_DWORD *)(this + 252) >> 11;
    *(float *)(this + 3644) = 15.0;
    if ( (v7 & 1) != 0 )
      sub_100DAE60(this);
    *(float *)(this + 3648) = sin(*(float *)(dword_106B31C8 + 12) + *(float *)(dword_106B31C8 + 12)) * 45.0
                            + *(float *)(this + 708);
    sub_103BD400((_DWORD *)this);
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3640) )
    {
      sub_1023C380((_DWORD *)this, (int)"NPC_CeilingTurret.Ping", 0.0, 0);
      sub_103BE320(this, 1);
      *(float *)(this + 3640) = *(float *)(dword_106B31C8 + 12) + 1.0;
    }
  }
  else
  {
    *(float *)(this + 3636) = 0.0;
    sub_100EC3F0((_DWORD *)this, (int)sub_103BEE80, 0.0, 0);
  }
}
