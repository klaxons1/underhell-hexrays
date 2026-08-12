void __thiscall sub_103C6000(int *this)
{
  _DWORD *v2; // eax
  float *i; // ecx
  _DWORD *v4; // eax
  __int64 v5; // [esp-8h] [ebp-14h]
  unsigned __int8 v6[4]; // [esp+8h] [ebp-4h] BYREF

  if ( *(_DWORD *)(dword_106EBDC4 + 48) || *((_BYTE *)this + 3656) )
  {
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( fabs(*((float *)this + 147) - *((float *)this + 927)) > 1.0 || sub_10262560(this[6]) )
    {
      v2 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 1868))(this);
      for ( i = (float *)sub_10077AB0(v2, v6); i; i = (float *)sub_10077340(v4, v6) )
      {
        if ( *(float *)(dword_106B31C8 + 12) - 7.0 > i[7] )
          *i = NAN;
        v4 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 1868))(this);
      }
      sub_100397D0(this);
      if ( (*(int (__thiscall **)(int *))(*this + 368))(this) && sub_10023D10(this, 10) )
      {
        this[916] = *(int *)(dword_106B31C8 + 12);
      }
      else if ( *(float *)(dword_106B31C8 + 12) - *((float *)this + 916) >= 7.0 )
      {
        HIDWORD(v5) = this;
        LODWORD(v5) = this;
        sub_1010DD80(this + 905, v5, 0.0);
        *((float *)this + 916) = 3.4028235e38;
        return;
      }
      *((_BYTE *)this + 3692) = sub_10023D10(this, 10);
      if ( (*(int (__thiscall **)(int *))(*this + 368))(this)
        && *((_BYTE *)this + 3692)
        && (*(_DWORD *)(dword_106EBDC4 + 48) || *((_BYTE *)this + 3656))
        && *(float *)(dword_106B31C8 + 12) > (double)*((float *)this + 915) )
      {
        (*(void (__thiscall **)(int *))(*this + 2208))(this);
      }
    }
  }
}
