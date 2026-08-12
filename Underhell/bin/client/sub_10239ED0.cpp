void __thiscall sub_10239ED0(_WORD *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax

  if ( (this[40] & 1) == 0 )
  {
    this[40] |= 1u;
    this[40] &= ~0x40u;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047CA74 + 28))(dword_1047CA74) )
    {
      v2 = dword_1047CA74;
      v3 = *(_DWORD *)dword_1047CA74;
      v4 = (**(int (__thiscall ***)(_WORD *))this)(this);
      (*(void (__thiscall **)(int, int))(v3 + 68))(v2, v4);
    }
    else
    {
      (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)this + 120))(this, 1);
    }
  }
}
