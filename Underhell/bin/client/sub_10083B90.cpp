void __thiscall sub_10083B90(_BYTE *this, int a2, int a3)
{
  int v4; // edi

  if ( !this[210] && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 104))(a2) )
  {
    v4 = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
    if ( (_WORD)v4 != 0xFFFF )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 108))(a2, 1);
      (*(void (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 92))(this, v4, a3);
    }
  }
}
