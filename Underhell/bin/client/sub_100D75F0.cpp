void __thiscall sub_100D75F0(int *this, int a2)
{
  long double v3; // st7
  double v5; // st7
  int v6; // edx
  double v7; // st7
  double (__thiscall *v8)(void *, void *); // eax
  float v9; // [esp+4h] [ebp-Ch]
  float v10; // [esp+4h] [ebp-Ch]
  float v11; // [esp+4h] [ebp-Ch]
  float v12; // [esp+8h] [ebp-8h]
  float v13; // [esp+Ch] [ebp-4h]
  float v14; // [esp+18h] [ebp+8h]
  float v15; // [esp+18h] [ebp+8h]
  float v16; // [esp+18h] [ebp+8h]
  float v17; // [esp+18h] [ebp+8h]

  if ( !(*(int (__thiscall **)(int *))(*this + 132))(this) || !*(_DWORD *)(dword_10432CFC + 48) )
  {
    if ( (*(int (__thiscall **)(int *))(*this + 132))(this) && *(_DWORD *)(dword_10432D44 + 48) )
    {
      v3 = *(float *)(dword_104312D4 + 44) * 0.017453292;
      v12 = sin(v3);
      v13 = cos(v3);
      v9 = ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326A4) * v13;
      v10 = ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326BC) * v12 + v9;
      v11 = v10 - ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326B0) * v13;
      *(float *)(a2 + 28) = (v11
                           - ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326C8) * v12)
                          * *(float *)(dword_104328C4 + 44)
                          + *(float *)(a2 + 28);
    }
    else
    {
      if ( (byte_104326E8 & 1) != 0 )
      {
        v14 = *(float *)(dword_104328C4 + 44);
        v5 = ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_10432668);
        v6 = *this;
        *(float *)(a2 + 28) = v5 * v14 + *(float *)(a2 + 28);
        v15 = *(float *)(dword_104328C4 + 44);
        *(float *)(a2 + 28) = *(float *)(a2 + 28)
                            - ((double (__thiscall *)(int *, void *))*(_DWORD *)(v6 + 64))(this, &unk_10432674) * v15;
      }
      v16 = *(float *)(dword_104328C4 + 44);
      v7 = ((double (__thiscall *)(int *, void *))*(_DWORD *)(*this + 64))(this, &unk_104326A4);
      v8 = *(double (__thiscall **)(void *, void *))(*this + 64);
      *(float *)(a2 + 28) = v7 * v16 + *(float *)(a2 + 28);
      v17 = *(float *)(dword_104328C4 + 44);
      *(float *)(a2 + 28) = *(float *)(a2 + 28) - v8(this, &unk_104326B0) * v17;
    }
  }
}
