float *__thiscall sub_10139B50(_DWORD *this, int a2)
{
  float *v2; // eax
  float *v3; // edi

  *(float *)(a2 + 20) = *(float *)(a2 + 124);
  *(float *)(a2 + 24) = *(float *)(a2 + 128);
  *(float *)(a2 + 28) = *(float *)(a2 + 132);
  *(float *)(a2 + 32) = *(float *)(a2 + 124);
  *(float *)(a2 + 36) = *(float *)(a2 + 128);
  *(float *)(a2 + 40) = *(float *)(a2 + 132);
  v2 = (float *)sub_10139490(this, *(_BYTE *)(a2 + 112));
  v3 = v2;
  if ( !v2 )
    return 0;
  v2[50] = *((float *)off_103DC81C + 3);
  if ( *(int *)(a2 + 44) < 0 )
    return 0;
  sub_10137490((int)v2, a2);
  *((_DWORD *)v3 + 12) = 7;
  v3[218] = *(float *)(a2 + 136);
  v3[219] = *(float *)(a2 + 140);
  v3[21] = *(float *)(a2 + 124);
  v3[22] = *(float *)(a2 + 128);
  v3[23] = *(float *)(a2 + 132);
  v3[62] = (float)*(int *)(a2 + 92);
  v3[61] = *(float *)(a2 + 96);
  *((_DWORD *)v3 + 13) |= *(_DWORD *)(a2 + 120);
  v3[56] = *(float *)(a2 + 100);
  v3[57] = *(float *)(a2 + 104);
  v3[58] = *(float *)(a2 + 108);
  if ( 0.0 == *(float *)(a2 + 64) )
    *((_DWORD *)v3 + 13) |= 0x4000u;
  return v3;
}
