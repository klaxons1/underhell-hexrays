unsigned int __thiscall sub_1000CFE0(int *this)
{
  unsigned int result; // eax
  _DWORD *v3; // ecx
  _BYTE *v4; // ebx
  double v5; // st7
  float v6; // edx
  unsigned __int8 (__thiscall *v7)(_DWORD); // eax
  void (__thiscall *v8)(_DWORD); // eax
  double v9; // [esp+18h] [ebp-Ch] BYREF
  char v10; // [esp+23h] [ebp-1h]

  result = this[490];
  if ( result == -1 )
    return result;
  v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[490] & 0xFFF) + 4);
  result >>= 12;
  if ( v3[1] != result )
    return result;
  v4 = (_BYTE *)*v3;
  if ( !*v3 )
    return result;
  result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 512))(*v3);
  if ( !(_BYTE)result )
    return result;
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 504))(v4);
  if ( !(_BYTE)result )
    return result;
  if ( (v4[4048] & 1) != 0 )
    v5 = *((float *)this + 518) + *((float *)off_103DC81C + 4);
  else
    v5 = 0.0;
  v6 = *(float *)this;
  *((float *)this + 518) = v5;
  if ( (*(unsigned __int8 (__thiscall **)(int *))(LODWORD(v6) + 1184))(this) )
    (*(void (__thiscall **)(int *))(*this + 964))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 780))(this) )
    (*(void (__thiscall **)(int *))(*this + 960))(this);
  v7 = *(unsigned __int8 (__thiscall **)(_DWORD))(*this + 1348);
  v10 = 0;
  if ( (v7(this) || (*(unsigned __int8 (__thiscall **)(int *))(*this + 1352))(this)) && !*((_BYTE *)this + 1984) )
  {
    v8 = *(void (__thiscall **)(_DWORD))(*this + 944);
    v10 = 1;
    v8(this);
  }
  if ( (*((_DWORD *)v4 + 1012) & 0x800) != 0 && *((float *)off_103DC81C + 3) >= (double)*((float *)this + 494) )
  {
    if ( this[509] < 0 || sub_1000A5F0(v4, this[509]) > 0 )
    {
      if ( v4[320] != 3 || *((_BYTE *)this + 2049) )
      {
        if ( !v10 )
        {
          (*(void (__thiscall **)(int *))(*this + 984))(this);
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 1188))(this) )
          {
            if ( this[511] < 1 )
            {
              sub_1000A590(v4, 1, this[509]);
              ++this[511];
            }
          }
        }
        goto LABEL_47;
      }
      goto LABEL_35;
    }
    if ( *((float *)off_103DC81C + 3) > (double)*((float *)this + 499) )
    {
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1044))(this, 0, 0.0);
      *((float *)this + 499) = *((float *)off_103DC81C + 3) + 0.5;
      if ( this[494] != this[499] )
        this[494] = this[499];
    }
  }
  if ( v10 || (v4[4048] & 1) == 0 || *((float *)off_103DC81C + 3) < (double)*((float *)this + 493) )
    goto LABEL_47;
  if ( sub_1000AB70((__int16 *)this)
    || (!(*(unsigned __int8 (__thiscall **)(int *))(*this + 1184))(this) || this[510] > 0)
    && ((*(unsigned __int8 (__thiscall **)(int *))(*this + 1184))(this) || sub_1000A5F0(v4, this[508]) > 0) )
  {
    if ( v4[320] != 3 || *((_BYTE *)this + 2048) )
    {
      if ( ((v4[4040] & 1) != 0 || (*((_DWORD *)v4 + 1011) & 0x800) != 0) && this[493] != *((_DWORD *)off_103DC81C + 3) )
        this[493] = *((int *)off_103DC81C + 3);
      (*(void (__thiscall **)(int *))(*this + 980))(this);
      goto LABEL_47;
    }
LABEL_35:
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1044))(this, 0, 0.0);
    v9 = *((float *)off_103DC81C + 3) + 0.2;
    return sub_1018BD00(&v9);
  }
  (*(void (__thiscall **)(int *))(*this + 948))(this);
LABEL_47:
  if ( (*((_DWORD *)v4 + 1012) & 0x2000) != 0
    && (*(unsigned __int8 (__thiscall **)(int *))(*this + 1184))(this)
    && !*((_BYTE *)this + 1984) )
  {
    (*(void (__thiscall **)(int *))(*this + 976))(this);
    *((float *)this + 518) = 0.0;
  }
  result = *((_DWORD *)v4 + 1012);
  if ( (result & 1) == 0 && (result & 0x2800) == 0 )
  {
    result = (*(int (__thiscall **)(int *))(*this + 920))(this);
    if ( !(_BYTE)result && !*((_BYTE *)this + 1984) )
      return (*(int (__thiscall **)(int *))(*this + 944))(this);
  }
  return result;
}
