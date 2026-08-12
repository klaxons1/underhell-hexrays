void __thiscall sub_100A0C10(int this)
{
  int v2; // eax

  if ( (*(_BYTE *)(this + 32) & 2) == 0 )
  {
    v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, 0);
    *(float *)(v2 + 4) = *(float *)(this + 4);
    *(float *)(v2 + 8) = *(float *)(this + 8);
    *(float *)(v2 + 12) = *(float *)(this + 12);
    *(_WORD *)(v2 + 20) = -8961;
    *(_BYTE *)(v2 + 22) = 0x80;
    *(float *)(v2 + 28) = 200.0;
    *(float *)(v2 + 16) = 255.0;
    *(float *)(v2 + 24) = *((float *)off_103DC81C + 3) + 0.1;
  }
}
