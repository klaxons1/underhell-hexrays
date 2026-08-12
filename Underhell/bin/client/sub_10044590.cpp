char __thiscall sub_10044590(float *this, float a2, int a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax

  v4 = *((_DWORD *)this + 1032);
  if ( v4 != -1
    && (v5 = (int *)((char *)off_103DCD74 + 16 * ((_DWORD)this[1032] & 0xFFF) + 4), v6 = v4 >> 12, v5[1] == v6)
    && *v5 )
  {
    if ( v5[1] == v6 )
      v7 = *v5;
    else
      v7 = 0;
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 332))(v7);
    if ( v8 )
    {
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v8 + 36))(v8, this, a3);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, a3 + 12);
    }
  }
  else
  {
    if ( *(_DWORD *)(dword_10432204 + 48)
      && 0.0 != ((double (__thiscall *)(int *, void *))*(_DWORD *)(*off_103ED0D8 + 64))(off_103ED0D8, &unk_1043268C) )
    {
      *(_DWORD *)(a3 + 36) |= 0x20000u;
    }
    v9 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 788))(this);
    if ( v9 )
      (*(void (__thiscall **)(int, _DWORD, int, _DWORD *))(*(_DWORD *)v9 + 952))(
        v9,
        LODWORD(a2),
        a3,
        (_DWORD *)this + 1059);
    if ( (*(_BYTE *)(a3 + 36) & 0x20) != 0 )
      this[864] = *((float *)off_103DC81C + 3);
  }
  if ( ((_BYTE)this[183] & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 4248) )
    {
      *(float *)(a3 + 12) = this[1059];
      *(float *)(a3 + 16) = this[1060];
      *(float *)(a3 + 20) = this[1061];
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, a3 + 12);
    }
    else
    {
      *((_BYTE *)this + 4248) = 1;
    }
  }
  else
  {
    *((_BYTE *)this + 4248) = 0;
  }
  this[1059] = *(float *)(a3 + 12);
  this[1060] = *(float *)(a3 + 16);
  this[1061] = *(float *)(a3 + 20);
  sub_10044360(this, a3, a3);
  return 1;
}
