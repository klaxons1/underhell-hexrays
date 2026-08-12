char __thiscall sub_1034C540(int this)
{
  int v2; // eax
  double v3; // st7
  bool v4; // zf
  int v5; // eax
  void (__noreturn ***v6)(); // eax

  if ( *(_BYTE *)(this + 3976) )
  {
    v2 = *(_DWORD *)(this + 3956);
    if ( !v2 )
    {
      *(_DWORD *)(this + 3944) = *(_DWORD *)(this + 3948) - 1;
      sub_10349DE0((_DWORD *)this);
      *(float *)(this + 3932) = *(float *)(dword_106B31C8 + 12) + 0.5;
      if ( *(_DWORD *)(this + 3944) )
      {
        *(_DWORD *)(this + 3956) = 1;
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    if ( v2 == 1 && *(float *)(this + 3932) < (double)*(float *)(dword_106B31C8 + 12) )
    {
      sub_10349DE0((_DWORD *)this);
      v3 = *(float *)(dword_106B31C8 + 12);
      v4 = (*(_DWORD *)(this + 3944))-- == 1;
      *(float *)(this + 3932) = v3 + 0.5;
      if ( v4 )
      {
        *(_DWORD *)(this + 3956) = 0;
LABEL_7:
        *(_BYTE *)(this + 3976) = 0;
      }
    }
  }
LABEL_8:
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( !v5 || (LOBYTE(v5) = sub_1034BFE0(this) == 0, (_BYTE)v5) )
  {
    if ( *(_BYTE *)(this + 3977) )
    {
      *(_BYTE *)(this + 3977) = 0;
      if ( *(_DWORD *)(this + 4152) )
      {
        v6 = sub_1023DBA0();
        LOBYTE(v5) = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v6)[12])(
                       v6,
                       *(_DWORD *)(this + 4152),
                       0.0,
                       0.1);
      }
    }
  }
  return v5;
}
