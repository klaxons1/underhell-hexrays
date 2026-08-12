int __thiscall sub_100A5980(int this, int a2, float *a3, float *a4, float a5, float a6, int a7, int a8)
{
  int v9; // eax

  sub_1008D9C0((_DWORD *)this, a2);
  *(_DWORD *)this = &CFXStaticLine::`vftable';
  if ( dword_1047C96C )
  {
    v9 = (*(int (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
           dword_1047C96C,
           a7,
           "ClientEffect textures",
           1,
           0);
    *(_DWORD *)(this + 12) = v9;
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 48))(v9);
    *(float *)(this + 16) = *a3;
    *(float *)(this + 20) = a3[1];
    *(float *)(this + 24) = a3[2];
    *(float *)(this + 28) = *a4;
    *(float *)(this + 32) = a4[1];
    *(float *)(this + 36) = a4[2];
    *(_DWORD *)(this + 40) = a8;
    *(float *)(this + 44) = a6;
    *(float *)(this + 48) = a5 * 0.5;
  }
  return this;
}
