int __thiscall sub_10121100(void *this, int a2, int a3, int a4)
{
  _BYTE *v5; // eax
  int result; // eax
  float v9; // [esp+4Ch] [ebp+10h]

  v5 = *(_BYTE **)(a4 + 4);
  if ( v5
    && (sub_10227EE0(v5, ".wav") || sub_10227EE0(*(_DWORD *)(a4 + 4), ".mp3") || (v5 = *(_BYTE **)(a4 + 4), *v5 == 33)) )
  {
    v9 = 1.0;
    if ( *(_DWORD *)(dword_104017E4 + 48) )
      v9 = *(float *)(dword_1040182C + 44);
    if ( *(_BYTE *)(a4 + 38) && sub_10227EE0(*(_DWORD *)(a4 + 4), ".wav") )
      sub_101207B0(*(char **)(a4 + 4), "Emitsound");
    (*(void (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)dword_10413194 + 16))(
      dword_10413194,
      a2,
      a3,
      *(_DWORD *)a4,
      *(_DWORD *)(a4 + 4),
      *(float *)(a4 + 8),
      *(_DWORD *)(a4 + 12),
      *(_DWORD *)(a4 + 16) | 0x80,
      (int)((1.0 - v9) * (double)(*(_DWORD *)(a4 + 20) / 2) + v9 * (double)*(int *)(a4 + 20)),
      *(_DWORD *)(a4 + 24),
      0,
      a4 + 44,
      1,
      *(float *)(a4 + 28),
      *(_DWORD *)(a4 + 40));
    if ( *(_DWORD *)(a4 + 32) )
      **(float **)(a4 + 32) = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413194 + 12))(
                                dword_10413194,
                                *(_DWORD *)(a4 + 4));
    return (*(int (**)(void *, const char *, ...))(*(_DWORD *)this + 64))(
             this,
             "EmitSound:  Raw wave emitted '%s' (ent %i)\n",
             *(_DWORD *)(a4 + 4),
             a3);
  }
  else
  {
    if ( *(_WORD *)(a4 + 64) != 0xFFFF )
      return sub_10120EC0(this, a2, a3, a4, a4 + 64);
    result = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_104131AC + 28))(dword_104131AC, v5);
    *(_WORD *)(a4 + 64) = result;
    if ( (_WORD)result != 0xFFFF )
      return sub_10120EC0(this, a2, a3, a4, a4 + 64);
  }
  return result;
}
