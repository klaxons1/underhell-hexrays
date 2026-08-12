__int16 __thiscall sub_1022DD30(unsigned __int16 *this, char a2)
{
  int v3; // ebx
  _DWORD *v4; // esi
  unsigned __int16 v5; // ax
  _DWORD *v6; // eax
  unsigned __int16 v8; // [esp+Ch] [ebp-4h]

  (**(void (__thiscall ***)(void *))this)(this);
  v3 = *(unsigned __int16 *)(*((_DWORD *)this + 6) + 10 * this[36]);
  if ( a2 )
    v8 = this[35];
  else
    v8 = this[34];
  v4 = this + 6;
  if ( v3 == 0xFFFF )
  {
    v5 = sub_1022D530((int)(this + 6));
    v3 = v5;
    sub_1022D6C0((_DWORD *)this + 3, v8, 0xFFFFu, v5);
    v6 = (_DWORD *)(*v4 + 12 * v3);
    if ( v6 )
    {
      *v6 = 0x10000;
      v6[1] = 0;
    }
  }
  else
  {
    sub_1022D600((_DWORD *)this + 3, this[36], v3);
    sub_1022D6C0((_DWORD *)this + 3, v8, 0xFFFFu, v3);
  }
  if ( a2 )
    ++*(_WORD *)(*v4 + 12 * (unsigned __int16)v3);
  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 8))(this);
  return v3;
}
