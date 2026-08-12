int __thiscall sub_10178650(
        int this,
        int a2,
        float *a3,
        float *a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        int a10)
{
  int v11; // eax

  sub_1008D9C0((_DWORD *)this, a2);
  *(_DWORD *)this = &CFXDiscreetLine::`vftable';
  if ( dword_1047C96C )
  {
    v11 = (*(int (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
            dword_1047C96C,
            a10,
            "ClientEffect textures",
            1,
            0);
    *(_DWORD *)(this + 12) = v11;
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 48))(v11);
    *(float *)(this + 20) = *a3;
    *(float *)(this + 24) = a3[1];
    *(float *)(this + 28) = a3[2];
    *(float *)(this + 32) = *a4;
    *(float *)(this + 36) = a4[1];
    *(float *)(this + 40) = a4[2];
    *(float *)(this + 44) = a5;
    *(float *)(this + 52) = a7;
    *(float *)(this + 56) = a8;
    *(float *)(this + 16) = a9;
    *(float *)(this + 48) = 0.0;
    *(float *)(this + 60) = a6;
  }
  return this;
}
