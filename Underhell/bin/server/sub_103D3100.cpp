int __thiscall sub_103D3100(void *this, int a2)
{
  int result; // eax
  int *v4; // ecx
  int v5; // esi
  __int16 v6; // ax
  int v7; // esi
  unsigned __int16 v8; // ax

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 76))(this, a2);
  *((_BYTE *)this + 1142) = 0;
  if ( *((_BYTE *)this + 1178) )
  {
    result = (int)this;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        result = sub_100194B0(v4, 1178);
    }
    *((_BYTE *)this + 1178) = 0;
  }
  v5 = *((_DWORD *)this + 106);
  if ( v5 )
  {
    v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 76))(*((_DWORD *)this + 106));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 72))(v5, v6 & 0xF7FF);
    v7 = *((_DWORD *)this + 106);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 76))(v7);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 72))(v7, v8 | 0x220);
  }
  return result;
}
