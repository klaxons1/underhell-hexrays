int __thiscall sub_1022D8D0(void *this, unsigned __int16 a2)
{
  int result; // eax
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // [esp+4h] [ebp-4h]

  result = 0;
  if ( a2 != 0xFFFF )
  {
    v4 = *((_DWORD *)this + 3) + 12 * a2;
    v5 = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 20))(this, *(_DWORD *)(v4 + 4));
    v6 = *((_DWORD *)this + 2);
    if ( v5 > v6 )
    {
      if ( dword_1047A4A4 < 1 )
      {
        Warning("Data manager 'used' memory incorrect\n");
        ++dword_1047A4A4;
      }
      v6 = *((_DWORD *)this + 2);
      v5 = v6;
    }
    *((_DWORD *)this + 2) = v6 - v5;
    v7 = *(_DWORD *)(v4 + 4);
    ++*(_WORD *)(v4 + 2);
    *(_DWORD *)(v4 + 4) = 0;
    v8 = v7;
    sub_1022D6C0((_DWORD *)this + 3, *((_WORD *)this + 36), 0xFFFFu, a2);
    return v8;
  }
  return result;
}
