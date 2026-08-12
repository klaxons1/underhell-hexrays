int __thiscall sub_10055290(int this, int a2)
{
  double v3; // st6
  float *v4; // ebx
  float *v5; // eax
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st7
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v14; // [esp-8h] [ebp-14h]
  float v15; // [esp+0h] [ebp-Ch]

  *(float *)(this + 1748) = (double)*(unsigned __int8 *)(this + 1420) * 0.0039215689;
  *(float *)(this + 1752) = (double)*(unsigned __int8 *)(this + 1421) * 0.0039215689;
  *(float *)(this + 1756) = (double)*(unsigned __int8 *)(this + 1422) * 0.0039215689;
  *(float *)(this + 1760) = (double)*(unsigned __int8 *)(this + 1424) * 0.0039215689;
  *(float *)(this + 1764) = (double)*(unsigned __int8 *)(this + 1425) * 0.0039215689;
  *(float *)(this + 1768) = 0.0039215689 * (double)*(unsigned __int8 *)(this + 1426);
  v3 = *(float *)(this + 1684) * 0.5;
  *(float *)(this + 1716) = v3;
  *(float *)(this + 1744) = 0.5 * *(float *)(this + 1688);
  v15 = v3;
  sub_100EB4C0(v15);
  if ( !a2 )
  {
    v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 8) + 260))(this - 8);
    v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 8) + 264))(this - 8);
    v6 = v5[1] - v4[1];
    v7 = v5[2] - v4[2];
    v8 = *(float *)(this + 1744) + *(float *)(this + 1744);
    *(_DWORD *)(this + 1732) = (int)((*v5 - *v4) / v8 + 0.5);
    *(_DWORD *)(this + 1736) = (int)(v6 / v8 + 0.5);
    v9 = *(float *)(this + 1704);
    *(_DWORD *)(this + 1740) = (int)(v7 / v8 + 0.5);
    *(float *)(this + 1712) = v9;
    sub_10034930(*(_DWORD *)(this + 1728));
    v10 = sub_100DDA40(
            (24
           * (unsigned __int64)(unsigned int)(*(_DWORD *)(this + 1736)
                                            * *(_DWORD *)(this + 1732)
                                            * *(_DWORD *)(this + 1740))) >> 32 != 0
          ? -1
          : 24 * *(_DWORD *)(this + 1736) * *(_DWORD *)(this + 1732) * *(_DWORD *)(this + 1740));
    v11 = *(_DWORD *)(this + 1416);
    *(_DWORD *)(this + 1728) = v10;
    v12 = sub_100F0920(0);
    (*(void (__thiscall **)(int, int, int))(v11 + 4))(this + 1416, v12, v14);
  }
  return sub_1003CD40((_DWORD *)this, a2);
}
