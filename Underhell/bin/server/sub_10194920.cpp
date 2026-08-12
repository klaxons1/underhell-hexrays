void __thiscall sub_10194920(_DWORD *this)
{
  int v2; // eax
  int v3; // [esp+8h] [ebp-4h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  if ( sub_1025FC50() && this[281] == 4 )
  {
    sub_10192560((int)this, (int)&savedregs);
    v2 = this[273];
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 44);
      sub_10194740(v2, (float *)(v2 + 28), &v3, -1.0);
    }
    this[295] = 0;
    this[272] = 0;
    this[275] = 4;
  }
}
