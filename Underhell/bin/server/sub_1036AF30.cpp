void __thiscall sub_1036AF30(int *this, _BYTE *a2)
{
  int (__stdcall *v3)(_BYTE *); // edx
  int v4; // eax
  double v5; // st7

  v3 = *(int (__stdcall **)(_BYTE *))(*this + 1080);
  *((_BYTE *)this + 3657) = 0;
  if ( v3(a2) == 1 )
  {
    v4 = *this;
    if ( (this[64] & 1) != 0 || !a2[225] )
    {
      (*(void (__fastcall **)(int *))(v4 + 2224))(this);
    }
    else
    {
      (*(void (__fastcall **)(int *))(v4 + 2216))(this);
      (*(void (__thiscall **)(int *, _BYTE *))(*this + 2212))(this, a2);
      *((_BYTE *)this + 3658) = 0;
    }
    goto LABEL_10;
  }
  if ( (this[64] & 1) != 0
    || a2[361]
    && (a2[356] & 4) == 0
    && (v5 = *((float *)this + 912), *((_BYTE *)this + 3658) = 1, v5 <= *(float *)(dword_106B31C8 + 12)) )
  {
LABEL_10:
    this[49] = 0;
    sub_100EC3F0(this, (int)sub_10039730, 0.0, 0);
  }
}
