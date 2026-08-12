void __thiscall sub_100128E0(_BYTE *this, int a2)
{
  int v3; // edi
  int v4; // eax
  float v5; // [esp+10h] [ebp-8h]
  float v6; // [esp+14h] [ebp-4h]

  if ( this[316] != 8 )
  {
    v6 = *(float *)(dword_104349EC + 44);
    v5 = *(float *)(dword_10434A34 + 44);
    sub_10038150(this);
    v3 = *(_DWORD *)this;
    v4 = (*(int (__thiscall **)(_BYTE *, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 40))(
           this,
           this + 244,
           LODWORD(v5),
           LODWORD(v6));
    *(float *)(a2 + 8) = ((double (__thiscall *)(_BYTE *, int))*(_DWORD *)(v3 + 808))(this, v4) + *(float *)(a2 + 8);
  }
}
