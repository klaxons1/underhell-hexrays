void __thiscall sub_1031C710(_BYTE *this, int a2, int a3)
{
  float v4; // [esp+8h] [ebp-Ch]

  sub_100DA500(this, a2, a3);
  sub_1031C450((int)this);
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    v4 = *(float *)(a3 + 36) * *(float *)(a3 + 36)
       + *(float *)(a3 + 32) * *(float *)(a3 + 32)
       + *(float *)(a3 + 40) * *(float *)(a3 + 40);
    if ( off_10689708(v4) > 400.0
      && !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
            dword_106B31D0,
            *(_DWORD *)(*(_DWORD *)(a3 + 108) + 24)) )
    {
      sub_1023C380(this, (int)"NPC_AttackHelicopterGrenade.HardImpact", 0.0, 0);
    }
  }
}
