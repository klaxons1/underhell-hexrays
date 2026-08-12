void __thiscall sub_103BE7A0(int this)
{
  int v2; // eax
  void (__thiscall *v3)(int, int); // edx
  double v4; // st7
  __int64 v5; // [esp+4h] [ebp-14h]
  int v6; // [esp+14h] [ebp-4h] BYREF

  sub_10025DD0((_DWORD *)this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 3644) = *(float *)(this + 704);
  *(float *)(this + 3648) = *(float *)(this + 708);
  *(float *)(this + 3652) = *(float *)(this + 712);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  v2 = *(_DWORD *)(this + 3656);
  if ( v2 )
  {
    sub_1005C620((_BYTE *)(v2 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v2 + 116)));
    sub_10242820(*(_DWORD *)(this + 3656), 164, 0.1);
    sub_102428B0(*(_DWORD *)(this + 3656), 0.40000001, 0.1);
  }
  if ( *(_DWORD *)(this + 2372) != dword_106EBBF4 )
  {
    v3 = *(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416);
    *(_BYTE *)(this + 3629) = 1;
    v3(this, dword_106EBBF4);
    sub_1023C380((_DWORD *)this, (int)"NPC_CeilingTurret.Deploy", 0.0, 0);
    HIDWORD(v5) = this;
    LODWORD(v5) = 0;
    sub_1010DD80((_DWORD *)(this + 3660), v5, 0.0);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
  {
    sub_103BDDC0((char *)this, 64.0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106EBBEC);
    v4 = *(float *)(dword_106B31C8 + 12) + 1.0;
    v6 = 0;
    *(float *)(this + 3632) = v4;
    sub_1002AB40((float *)(this + 864), &v6);
    sub_100EC3F0((_DWORD *)this, (int)sub_103BE580, 0.0, 0);
    sub_1023C380((_DWORD *)this, (int)"NPC_CeilingTurret.Move", 0.0, 0);
  }
  if ( (*(_DWORD *)(this + 248) & 0x80) != 0 )
    *(float *)(this + 3636) = 3.4028235e38;
  else
    *(float *)(this + 3636) = *(float *)(dword_106B31C8 + 12) + 5.0;
}
