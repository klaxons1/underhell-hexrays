void __thiscall sub_10035E70(_DWORD *this)
{
  int v2; // esi
  int v3; // esi
  float *v4; // eax
  int v5; // esi
  float *v6; // eax

  v2 = this[20];
  if ( v2 != (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 108))(dword_10413168) )
  {
    if ( (this[28] & 2) != 0 )
    {
      v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, v2);
      v4 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
      *(float *)(v3 + 4) = *v4;
      *(float *)(v3 + 8) = v4[1];
      *(float *)(v3 + 12) = v4[2];
      *(float *)(v3 + 12) = *(float *)(v3 + 12) + 16.0;
      *(_BYTE *)(v3 + 20) = -6;
      *(_WORD *)(v3 + 21) = -1286;
      *(float *)(v3 + 16) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                              dword_10413198,
                              400.0,
                              431.0);
      *(float *)(v3 + 24) = *((float *)off_103DC81C + 3) + 0.001;
    }
    if ( (this[28] & 4) != 0 )
    {
      v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, this[20]);
      v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
      *(float *)(v5 + 4) = *v6;
      *(float *)(v5 + 8) = v6[1];
      *(float *)(v5 + 12) = v6[2];
      *(_BYTE *)(v5 + 20) = 100;
      *(_WORD *)(v5 + 21) = 25700;
      *(float *)(v5 + 16) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                              dword_10413198,
                              200.0,
                              231.0);
      *(float *)(v5 + 24) = *((float *)off_103DC81C + 3) + 0.001;
    }
  }
}
