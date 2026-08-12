int __thiscall sub_100FA570(void *this, _DWORD *a2)
{
  int v3; // ebx
  int *v4; // ecx

  if ( a2 )
    v3 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  else
    v3 = -1;
  if ( *((_DWORD *)this + 208) != v3 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 832);
    }
    *((_DWORD *)this + 208) = v3;
  }
  (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 76))(this, a2);
  sub_100F9B80((int)this);
  a2[63] |= 0x80u;
  return sub_100D8500(a2);
}
