int __thiscall sub_10431690(unsigned __int16 *this, int a2)
{
  int v3; // edi
  _WORD *v4; // ecx
  _WORD *v5; // eax
  int v6; // edx
  int v8; // [esp+14h] [ebp+8h]

  (**(void (__thiscall ***)(void *))this)(this);
  v3 = (unsigned __int16)(a2 - 1);
  if ( (unsigned __int16)v3 < this[30]
    && ((v4 = (_WORD *)(12 * v3 + *((_DWORD *)this + 3)), v4[4] != (_WORD)v3) || v4[5] == (_WORD)v3)
    && v4[1] == HIWORD(a2)
    && (_WORD)a2
    && *v4 )
  {
    v5 = (_WORD *)(*((_DWORD *)this + 3) + 12 * v3);
    v6 = (unsigned __int16)*v5;
    *v5 = 0;
    v8 = v6;
    sub_101C63C0((_DWORD *)this + 3, this[35], v3);
    sub_10431540((_DWORD *)this + 3, this[34], 0xFFFFu, v3);
    (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 8))(this);
    return v8;
  }
  else
  {
    (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 8))(this);
    return 0;
  }
}
