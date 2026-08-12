char __thiscall sub_10388830(int this, float a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  bool v6; // zf
  int v7; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  _BYTE v12[12]; // [esp+18h] [ebp-10h] BYREF
  char v13[4]; // [esp+24h] [ebp-4h]

  sub_10385100(this, a2);
  if ( (*(_DWORD *)(this + 248) & 0x90000) != 0 )
    return 1;
  if ( *(float *)(this + 3896) == flt_10689730
    && *(float *)(this + 3900) == flt_10689734
    && *(float *)(this + 3904) == flt_10689738 )
  {
    sub_10383E30(this);
  }
  else
  {
    sub_10382AD0(this);
  }
  if ( (*(_DWORD *)(this + 248) & 0x100000) == 0 && !*(_BYTE *)(this + 3894) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1023D4B0(8, (float *)(this + 580), 75, a2, this, 0, 0);
  }
  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3776) )
  {
    if ( sub_1007E040(*(_DWORD **)(this + 2588)) )
    {
      v4 = **(_DWORD **)(*(_DWORD *)(this + 2588) + 36);
      v5 = *(_DWORD *)(v4 + 40);
      if ( !v5
        || *(_DWORD *)(v4 + 36) != *(_DWORD *)(v5 + 36)
        || (v6 = (*(_BYTE *)(v4 + 32) & 0x2A) == 0, v13[0] = 1, !v6) )
      {
        v13[0] = 0;
      }
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( sub_100430B0((int *)this, a2, v7, 33701899, v13[0], 64.0) == 2 )
        return 1;
      goto LABEL_26;
    }
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3792) )
    {
      sub_10328060((float *)this, a2, 9.5);
      *(float *)(this + 3752) = flt_106F1CA8;
      *(float *)(this + 3756) = flt_106F1CAC;
      *(float *)(this + 3760) = flt_106F1CB0;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
      {
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        v10 = *(_DWORD *)this;
        v11 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 504))(v9, v12);
        (*(void (__thiscall **)(int, _DWORD, int))(v10 + 2212))(this, LODWORD(a2), v11);
      }
      goto LABEL_26;
    }
    v3 = this + 3780;
  }
  else
  {
    v3 = this + 3764;
  }
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 2216))(this, LODWORD(a2), v3);
LABEL_26:
  if ( *(int *)(this + 220) <= 0 )
  {
    sub_10385CA0(this, a2);
    return 1;
  }
  sub_10388070(this, a2);
  return 1;
}
