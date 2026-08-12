int __thiscall sub_10253F70(_BYTE *this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // eax

  (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 1020))(this, 0);
  v2 = 0;
  if ( *((int *)this + 68) > 0 )
  {
    v3 = (_DWORD *)*((_DWORD *)this + 65);
    while ( *((_DWORD *)this + 70) != *v3 )
    {
      ++v2;
      ++v3;
      if ( v2 >= *((_DWORD *)this + 68) )
        goto LABEL_8;
    }
    if ( !this[284] )
      this[285] = 1;
  }
LABEL_8:
  if ( !this[285] )
  {
    v4 = *((_DWORD *)this + 70);
    if ( v4 > 0 )
      *((_DWORD *)this + 70) = v4 - 1;
  }
  if ( !this[341] && this[380] )
  {
    v5 = *((_DWORD *)this + 70);
    if ( v5 < *((_DWORD *)this + 94) )
    {
      if ( v5 < 0 )
        *((_DWORD *)this + 70) = 0;
      *((_DWORD *)this + 94) = *((_DWORD *)this + 70);
    }
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 976))(this);
  }
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 980))(this);
  return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 16))(this);
}
