int __thiscall sub_100F1BC0(int this)
{
  _DWORD *v2; // eax
  int result; // eax
  bool v4; // zf
  _DWORD *v5; // eax
  int v6; // ecx
  unsigned int v7; // esi
  _DWORD *v8; // eax
  unsigned int v9; // esi
  int v10; // esi

  *(float *)(this + 6728) = 0.0;
  *(float *)(this + 6732) = 0.0;
  *(float *)(this + 6736) = 0.0;
  *(_BYTE *)(this + 6721) &= ~1u;
  *(_BYTE *)(this + 6720) = -48;
  *(_DWORD *)(this + 6724) = -1;
  *(_DWORD *)(this + 7024) = 0;
  v2 = sub_100F0920();
  result = sub_100ED810(v2, (_DWORD *)this);
  *(float *)(this + 7012) = -1000000.0;
  *(float *)(this + 7016) = -1000000.0;
  *(float *)(this + 7020) = -1000000.0;
  *(float *)(this + 7000) = 1000000.0;
  *(float *)(this + 7004) = 1000000.0;
  *(float *)(this + 7008) = 1000000.0;
  *(float *)(this + 6032) = 1000000.0;
  *(float *)(this + 6036) = 1000000.0;
  *(float *)(this + 6040) = 1000000.0;
  *(float *)(this + 6044) = -1000000.0;
  *(float *)(this + 6048) = -1000000.0;
  *(float *)(this + 6052) = -1000000.0;
  v4 = *(_DWORD *)(this + 80) == 0;
  *(_DWORD *)(this + 6716) = 0;
  if ( !v4 )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      v5 = sub_100F0920();
      v6 = v5[66];
      v5[66] = v6 + 1;
      *(_DWORD *)(this + 6724) = v6;
      dword_10435D10 = v6;
      flt_10435D18 = *((float *)off_103DC81C + 3);
      dword_10435D14 = sub_101F8D90(this + 16);
      v7 = *(_DWORD *)(this + 6740);
      if ( v7 != -1
        && (v8 = (_DWORD *)((char *)off_103DCD74 + 16 * (v7 & 0xFFF) + 4), v9 = v7 >> 12, v8[1] == v9)
        && *v8 )
      {
        if ( v8[1] == v9 )
          dword_10435D1C = (*(int (__thiscall **)(int))(*(_DWORD *)(*v8 + 8) + 36))(*v8 + 8);
        else
          dword_10435D1C = (*(int (**)(void))(MEMORY[8] + 36))();
      }
      else
      {
        dword_10435D1C = -1;
      }
      if ( sub_10229D00(32) )
        v10 = sub_10229D20("ParticleSystem_Create");
      else
        v10 = 0;
      sub_1022ACE0("state", (int)&dword_10435D10);
      return sub_101BC9C0(0, v10);
    }
  }
  return result;
}
