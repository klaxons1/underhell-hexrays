int __thiscall sub_1022DC80(unsigned __int16 *this, int a2)
{
  int v3; // edi
  int v4; // eax
  _WORD *v5; // ecx
  int v6; // edi

  (**(void (__thiscall ***)(void *))this)(this);
  v3 = (unsigned __int16)(a2 - 1);
  if ( (unsigned __int16)v3 < this[30]
    && ((v4 = 12 * v3, v5 = (_WORD *)(12 * v3 + *((_DWORD *)this + 3)), v5[4] != (_WORD)v3) || v5[5] == (_WORD)v3)
    && v5[1] == HIWORD(a2)
    && (_WORD)a2 )
  {
    if ( !*v5 )
    {
      sub_1022D600((_DWORD *)this + 3, this[34], v3);
      sub_1022D6C0((_DWORD *)this + 3, this[34], 0xFFFFu, v3);
      v4 = 12 * v3;
    }
    v6 = *(_DWORD *)(*((_DWORD *)this + 3) + v4 + 4);
    (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 8))(this);
    return v6;
  }
  else
  {
    (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 8))(this);
    return 0;
  }
}
