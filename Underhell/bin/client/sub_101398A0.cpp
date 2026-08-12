BOOL __thiscall sub_101398A0(_DWORD *this, int a2)
{
  BOOL result; // eax
  int v4; // eax
  float *v5; // eax
  float *v6; // edi

  if ( 0.0 == *(float *)(a2 + 64) || (result = sub_10137670((float *)(a2 + 20), (float *)(a2 + 32), 1)) )
  {
    v4 = *(_DWORD *)(a2 + 48);
    if ( v4 && *(_DWORD *)(a2 + 44) == -1 )
      *(_DWORD *)(a2 + 44) = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, v4);
    if ( *(_DWORD *)(a2 + 56) && *(_DWORD *)(a2 + 52) == -1 )
      *(_DWORD *)(a2 + 52) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 8))(
                               dword_10413178,
                               *(_DWORD *)(a2 + 56));
    v5 = (float *)sub_10139490(this, *(_BYTE *)(a2 + 112));
    v6 = v5;
    if ( v5 && (v5[50] = *((float *)off_103DC81C + 3), *(int *)(a2 + 44) >= 0) )
    {
      sub_10137490((int)v5, a2);
      v6[62] = (float)*(int *)(a2 + 92);
      v6[61] = *(float *)(a2 + 96);
      *((_DWORD *)v6 + 13) |= *(_DWORD *)(a2 + 120);
      v6[56] = *(float *)(a2 + 100);
      v6[57] = *(float *)(a2 + 104);
      v6[58] = *(float *)(a2 + 108);
      if ( 0.0 == *(float *)(a2 + 64) )
        *((_DWORD *)v6 + 13) |= 0x4000u;
      return (BOOL)v6;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
