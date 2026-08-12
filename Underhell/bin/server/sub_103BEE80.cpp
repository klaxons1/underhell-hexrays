void __thiscall sub_103BEE80(int *this)
{
  int v2; // eax
  int v3; // eax
  void (__thiscall *v4)(int, int); // edx
  int v5; // eax
  __int64 v6; // [esp+4h] [ebp-10h]
  float v7; // [esp+8h] [ebp-Ch]

  sub_10025DD0(this);
  (*(void (__thiscall **)(int *))(*this + 728))(this);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  this[911] = this[176];
  this[912] = this[177];
  this[913] = this[178];
  sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
  if ( this[593] == dword_106EBBF0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 732))(this) )
    {
      sub_103BDDC0((char *)this, 24.0);
      v3 = *this;
      *((float *)this + 909) = 0.0;
      v4 = *(void (__thiscall **)(int, int))(v3 + 1416);
      *((_BYTE *)this + 3629) = 0;
      v4((int)this, dword_106EBBE8);
      if ( *((_BYTE *)this + 3628) )
      {
        sub_100EC3F0(this, (int)sub_103BE970, 0.0, 0);
        v7 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
        sub_100EC4A0(this, v7, 0);
      }
      else
      {
        v5 = this[914];
        if ( v5 )
        {
          sub_1005C620((_BYTE *)(v5 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v5 + 116)));
          sub_102428B0(this[914], 0.1, 1.0);
          sub_10242820(this[914], 0, 1.0);
        }
        sub_100EC3F0(this, (int)nullsub_4, 0.0, 0);
      }
    }
  }
  else
  {
    v2 = this[914];
    if ( v2 )
    {
      sub_1005C620((_BYTE *)(v2 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v2 + 116)));
      sub_102428B0(this[914], 0.1, 0.5);
      sub_10242820(this[914], 64, 0.5);
    }
    (*(void (__thiscall **)(int *, int))(*this + 1416))(this, dword_106EBBEC);
    if ( !sub_103BD400(this) )
    {
      (*(void (__thiscall **)(int *, int))(*this + 1416))(this, dword_106EBBF0);
      sub_1023C380(this, (int)"NPC_CeilingTurret.Retire", 0.0, 0);
      HIDWORD(v6) = this;
      LODWORD(v6) = 0;
      sub_1010DD80(this + 921, v6, 0.0);
    }
  }
}
