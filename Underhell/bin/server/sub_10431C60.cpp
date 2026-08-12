int __thiscall sub_10431C60(unsigned __int16 *this, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // edi
  int v9; // [esp+Ch] [ebp-4h]

  v9 = *((_DWORD *)this + 2);
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 2);
    v4 = *((_DWORD *)this + 1);
    if ( v3 <= v4 && v4 - v3 >= a2 )
      break;
    (**(void (__thiscall ***)(unsigned __int16 *))this)(this);
    v5 = *((_DWORD *)this + 6);
    v6 = *(unsigned __int16 *)(v5 + 10 * this[34]);
    if ( v6 == 0xFFFF )
    {
      (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 8))(this);
      return v9 - *((_DWORD *)this + 2);
    }
    sub_101C63C0((_DWORD *)this + 3, this[34], *(_WORD *)(v5 + 10 * this[34]));
    v7 = sub_10431740(this, v6);
    (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 8))(this);
    (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)this + 16))(this, v7);
  }
  return v9 - *((_DWORD *)this + 2);
}
