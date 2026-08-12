void __thiscall sub_1004DB80(_DWORD *this)
{
  int v2; // esi
  float *v3; // eax

  if ( *((float *)off_103DC81C + 4) > 0.0 && ((this[28] & 2) != 0 || (this[28] & 4) != 0) )
  {
    v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, this[20]);
    v3 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
    *(float *)(v2 + 4) = *v3;
    *(float *)(v2 + 8) = v3[1];
    *(float *)(v2 + 12) = v3[2];
    *(float *)(v2 + 12) = *(float *)(v2 + 12) + 16.0;
    *(_WORD *)(v2 + 20) = -20738;
    *(_BYTE *)(v2 + 22) = 10;
    *(float *)(v2 + 16) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                            dword_10413198,
                            400.0,
                            431.0);
    *(float *)(v2 + 24) = *((float *)off_103DC81C + 3) + 0.001;
  }
}
