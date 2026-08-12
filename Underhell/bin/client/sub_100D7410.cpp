void __thiscall sub_100D7410(float *this, float a2, int a3)
{
  long double v5; // st7
  long double v6; // st6
  float v7; // [esp+18h] [ebp-Ch]
  float v8; // [esp+2Ch] [ebp+8h]
  float v9; // [esp+2Ch] [ebp+8h]
  float v10; // [esp+30h] [ebp+Ch]
  float v11; // [esp+30h] [ebp+Ch]
  float v12; // [esp+30h] [ebp+Ch]

  if ( (byte_104326E8 & 1) == 0 )
  {
    v10 = *(float *)(dword_104327A4 + 44);
    *(float *)(a3 + 4) = *(float *)(a3 + 4)
                       - ((double (__thiscall *)(float *, void *))*(_DWORD *)(*(_DWORD *)this + 64))(
                           this,
                           &unk_10432668)
                       * (v10
                        * a2);
    v11 = *(float *)(dword_104327A4 + 44);
    *(float *)(a3 + 4) = ((double (__thiscall *)(float *, void *))*(_DWORD *)(*(_DWORD *)this + 64))(
                           this,
                           &unk_10432674)
                       * (v11
                        * a2)
                       + *(float *)(a3 + 4);
  }
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 132))(this) && *(_DWORD *)(dword_10432CFC + 48) )
  {
    v8 = ((double (__thiscall *)(float *, void *))*(_DWORD *)(*(_DWORD *)this + 64))(this, &unk_104326B0);
    v12 = v8 - ((double (__thiscall *)(float *, void *))*(_DWORD *)(*(_DWORD *)this + 64))(this, &unk_104326A4);
    v9 = ((double (__thiscall *)(float *, void *))*(_DWORD *)(*(_DWORD *)this + 64))(this, &unk_104326C8);
    v5 = v9 - ((double (__thiscall *)(float *, void *))*(_DWORD *)(*(_DWORD *)this + 64))(this, &unk_104326BC);
    v6 = v12;
    if ( 0.0 != v12 || 0.0 != v5 )
      *(float *)(a3 + 4) = atan2(v6, v5) * 57.29578 + this[48];
    if ( 0.0 != v6
      || 0.0 != v5
      || 0.0 != ((double (__thiscall *)(float *, void *))*(_DWORD *)(*(_DWORD *)this + 64))(this, &unk_10432668)
      || 0.0 != ((double (__thiscall *)(float *, void *))*(_DWORD *)(*(_DWORD *)this + 64))(this, &unk_10432674) )
    {
      v7 = this[48] - *(float *)(a3 + 4);
      sub_10229120(v7);
    }
  }
}
