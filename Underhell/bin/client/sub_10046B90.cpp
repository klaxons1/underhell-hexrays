void __thiscall sub_10046B90(float *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // [esp-8h] [ebp-18h]
  float v6[3]; // [esp+4h] [ebp-Ch] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( this == (float *)dword_10407394 )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 860))(this);
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 844))(this) == 4 )
    {
      v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 848))(this);
      __RTDynamicCast(
        v2,
        0,
        (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
        (int)&C_BaseAnimating `RTTI Type Descriptor',
        0);
    }
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 864))(this);
    sub_10046930((int)this);
    sub_1002FF10(this);
  }
  else
  {
    sub_1003BCF0(this, v6);
    v3 = *(_DWORD *)this;
    v5 = (*(int (__thiscall **)(float *, float *))(*(_DWORD *)this + 36))(this, v6);
    v4 = sub_10044110((int)this, (int)&savedregs, (int)this);
    (*(void (__thiscall **)(float *, int, int))(v3 + 992))(this, v4, v5);
    sub_1002FF10(this);
  }
}
