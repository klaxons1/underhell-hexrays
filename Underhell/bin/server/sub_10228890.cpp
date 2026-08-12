int __thiscall sub_10228890(_BYTE *this, float a2)
{
  double v3; // st7
  double v4; // st6
  int v5; // eax
  int result; // eax
  double v7; // st7
  bool v8; // zf
  int v9; // eax
  double v10; // st7
  double v11; // st7
  int *v12; // ecx
  float v13; // [esp+0h] [ebp-Ch]
  float v14; // [esp+14h] [ebp+8h]

  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 740))(this);
  v3 = 0.0;
  if ( *((float *)this + 385) <= 0.0 )
    goto LABEL_29;
  v4 = *((float *)this + 385) - a2;
  if ( v4 >= 0.0 )
    v3 = v4;
  v5 = *(_DWORD *)this;
  *((float *)this + 385) = v3;
  result = (*(int (__thiscall **)(_BYTE *))(v5 + 752))(this);
  if ( this[884] )
  {
LABEL_29:
    if ( !*((_DWORD *)this + 244) || !this[884] || this[1532] && sub_1012B040((unsigned int *)this + 382, 0) )
      return sub_1025FAC0(this);
    v7 = 2.5;
    if ( *((float *)this + 226) <= 2.5 )
    {
      v7 = 0.25;
      if ( *((float *)this + 226) >= 0.25 )
        v7 = *((float *)this + 226);
    }
    v8 = this[885] == 0;
    *((float *)this + 226) = v7;
    if ( !v8 )
      return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 732))(this);
    v9 = *((_DWORD *)this + 246);
    if ( v9 )
      v10 = *(float *)(*(_DWORD *)(v9 + 28) + 44);
    else
      v10 = 0.1;
    v13 = v10;
    sub_1041CA70(v13);
    sub_1041EC00(*((_DWORD *)this + 244), *((float *)this + 223));
    v11 = *((float *)this + 226) * a2 + *((float *)this + 223);
    v14 = v11;
    *((float *)this + 223) = v11;
    if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 && *((_DWORD *)this + 222) != LODWORD(v14) )
    {
      if ( this[84] )
      {
        this[88] |= 1u;
        *((float *)this + 222) = v11;
      }
      else
      {
        v12 = (int *)*((_DWORD *)this + 6);
        if ( v12 )
        {
          sub_100194B0(v12, 888);
          v11 = v14;
        }
        *((float *)this + 222) = v11;
      }
    }
    result = sub_1041C800(*((_DWORD *)this + 244));
    if ( (_BYTE)result )
    {
      (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 724))(this, 0, 0);
      return sub_1025FAC0(this);
    }
  }
  return result;
}
