void __thiscall sub_1019FCF0(int this)
{
  double v1; // st7
  double v2; // st6
  int v3; // eax
  double v4; // st6

  v1 = 0.0;
  if ( *((float *)off_103DC81C + 4) > 0.0 )
  {
    if ( *(_BYTE *)(this + 3380) )
    {
      v1 = 1.0;
      if ( *(float *)(this + 3384) < 1.0 )
      {
        v2 = *((float *)off_103DC81C + 4) * 0.45454544 + *(float *)(this + 3384);
        *(float *)(this + 3384) = v2;
        if ( v2 <= 1.0 )
          return;
        goto LABEL_5;
      }
      goto LABEL_7;
    }
    if ( *(float *)(this + 3384) <= 0.0 )
    {
LABEL_7:
      v3 = *(_DWORD *)(this - 12);
      *(float *)(this + 3384) = v1;
      (*(void (__stdcall **)(_DWORD))(v3 + 408))(-1.0);
      return;
    }
    v4 = *(float *)(this + 3384) - *((float *)off_103DC81C + 4) * 0.45454544;
    *(float *)(this + 3384) = v4;
    if ( v4 < 0.0 )
LABEL_5:
      *(float *)(this + 3384) = v1;
  }
}
