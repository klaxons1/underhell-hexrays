void __thiscall sub_100D7770(int *this, int a2)
{
  long double v3; // st7
  double v5; // st7
  int v6; // edx
  float v7; // [esp+4h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-Ch]
  float v9; // [esp+4h] [ebp-Ch]
  float v10; // [esp+4h] [ebp-Ch]
  float v11; // [esp+8h] [ebp-8h]
  int v12; // [esp+Ch] [ebp-4h]
  float v13; // [esp+Ch] [ebp-4h]
  float v14; // [esp+18h] [ebp+8h]

  if ( (*(int (__thiscall **)(int *))(*this + 132))(this) && *(_DWORD *)(dword_10432CFC + 48) )
  {
    if ( 0.0 != ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326C8)
      || 0.0 != ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326A4)
      || 0.0 != ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326BC)
      || (v12 = 0, 0.0 != ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326B0)) )
    {
      v12 = 1;
    }
    *(float *)(a2 + 24) = (double)v12 * *(float *)(dword_10432954 + 44) + *(float *)(a2 + 24);
  }
  else if ( (*(int (__thiscall **)(int *))(*this + 132))(this) && *(_DWORD *)(dword_10432D44 + 48) )
  {
    v3 = *(float *)(dword_104312D4 + 44) * 0.017453292;
    v11 = sin(v3);
    v13 = cos(v3);
    v7 = ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326C8) * v13;
    v8 = ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326A4) * v11 + v7;
    v9 = v8 - ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326BC) * v13;
    *(float *)(a2 + 24) = (v9
                         - ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326B0) * v11)
                        * *(float *)(dword_10432954 + 44)
                        + *(float *)(a2 + 24);
  }
  else if ( (byte_10432688 & 1) == 0 )
  {
    v10 = *(float *)(dword_10432954 + 44);
    v5 = ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326C8);
    v6 = *this;
    *(float *)(a2 + 24) = v5 * v10 + *(float *)(a2 + 24);
    v14 = *(float *)(dword_1043299C + 44);
    *(float *)(a2 + 24) = *(float *)(a2 + 24)
                        - ((double (__thiscall *)(int *, void *))*(_DWORD *)(v6 + 64))(this, &unk_104326BC) * v14;
  }
}
