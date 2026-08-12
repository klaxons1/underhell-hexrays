char __thiscall sub_100C93E0(_DWORD *this, int a2, float *a3)
{
  char result; // al
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9[20]; // [esp+8h] [ebp-A0h] BYREF
  _DWORD v10[20]; // [esp+58h] [ebp-50h] BYREF

  if ( (*(_BYTE *)(a2 + 64) & 0x10) == 0
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
  {
    sub_1001E4E0(v10, a2);
    v5 = this[64];
    *(float *)&v10[1] = *a3;
    *(float *)&v10[2] = a3[1];
    *(float *)&v10[3] = a3[2];
    if ( (v5 & 0x8000000) != 0
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) )
    {
      v6 = sub_101D0270(this, this[208], v10, 1, 0);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 1060))(this, v6);
      sub_100E1400(this);
      return 1;
    }
    else if ( *((_BYTE *)this + 1669) != 1
           && (*(_BYTE *)(dword_106B3CDC + 12) != 1
            || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 320))(this)
            || (*(int (__thiscall **)(_DWORD *))(*this + 220))(this) == 3
            || (*(int (__thiscall **)(_DWORD *))(*this + 220))(this) == 2) )
    {
      if ( *(_DWORD *)(dword_10698344 + 48) && (*(int (__thiscall **)(_DWORD *))(*this + 220))(this) == 3 )
      {
        v7 = *this;
        if ( *((_BYTE *)this + 1713) )
          (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD *))(v7 + 756))(this, a3, this[435], this + 429);
        else
          (*(void (__thiscall **)(_DWORD *, float *))(v7 + 748))(this, a3);
        sub_100E1400(this);
        return 1;
      }
      else
      {
        v8 = *this;
        if ( *((_BYTE *)this + 1713) )
          return (*(int (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD *))(v8 + 756))(
                   this,
                   a3,
                   this[435],
                   this + 429);
        else
          return (*(int (__thiscall **)(_DWORD *, float *))(v8 + 748))(this, a3);
      }
    }
    else
    {
      result = (*(int (__thiscall **)(_DWORD *))(*this + 992))(this);
      if ( result )
      {
        if ( *((_BYTE *)this + 1713) )
        {
          return (*(int (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD *))(*this + 756))(
                   this,
                   a3,
                   this[435],
                   this + 429);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, float *))(*this + 748))(this, a3);
          sub_100E1400(this);
          return 1;
        }
      }
    }
  }
  else
  {
    sub_1001E4E0(v9, a2);
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60(this);
    (*(void (__thiscall **)(_DWORD *))(this[80] + 4))(this + 80);
    if ( *((_BYTE *)this + 1713) )
      (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD *))(*this + 756))(this, a3, this[435], this + 429);
    else
      (*(void (__thiscall **)(_DWORD *, float *))(*this + 752))(this, a3);
    return 1;
  }
  return result;
}
