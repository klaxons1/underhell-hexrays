int __thiscall sub_103872B0(int *this)
{
  double v2; // st7
  int v3; // eax
  _BYTE v5[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( *((_BYTE *)this + 3854) )
  {
    if ( (this[62] & 2) == 0 )
      sub_10385ED0((int)this);
    sub_100C1600((int)this, 1, 1);
    (*(void (__thiscall **)(int *, _BYTE *, _DWORD))(*this + 540))(this, v5, 0);
    sub_100EA940(this, 1024);
    return (*(int (__thiscall **)(int *, int))(*this + 1416))(this, 26);
  }
  else
  {
    v2 = sub_10260720(400.0);
    v3 = *this;
    *((float *)this + 138) = v2;
    return (*(int (__thiscall **)(int *, int))(v3 + 1416))(this, 1);
  }
}
