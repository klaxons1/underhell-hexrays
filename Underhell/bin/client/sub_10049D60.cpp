void __thiscall sub_10049D60(int this, int a2, int a3)
{
  float *v3; // edi
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st5
  int v9; // ebx
  double v10; // st7
  _DWORD *v11; // esi
  float v12; // [esp+0h] [ebp-2Ch]
  float v13; // [esp+4h] [ebp-28h]
  float v14; // [esp+Ch] [ebp-20h]
  float v15; // [esp+Ch] [ebp-20h]
  float v16; // [esp+10h] [ebp-1Ch]
  float v18; // [esp+28h] [ebp-4h]
  int savedregs; // [esp+2Ch] [ebp+0h] BYREF
  int i; // [esp+34h] [ebp+8h]

  v3 = (float *)off_103DC81C;
  if ( *((float *)off_103DC81C + 3) >= (double)*(float *)(this + 1228) )
  {
    v4 = *(float *)(this + 1196) + *(float *)(this + 1200) - *((float *)off_103DC81C + 3);
    v5 = 0.0;
    if ( v4 <= *(float *)(this + 1200) )
    {
      if ( v4 >= 0.0 )
        v5 = v4;
      v6 = 0.0;
    }
    else
    {
      v6 = 0.0;
      v5 = *(float *)(this + 1200);
    }
    if ( *(_DWORD *)(this + 1224) == 1 )
    {
      v16 = 0.40000001;
      v7 = *((float *)off_103DC81C + 7) + *((float *)off_103DC81C + 7);
    }
    else
    {
      v16 = 1.0;
      v7 = 0.30000001;
    }
    v14 = v7;
    v13 = v6;
    v12 = v5;
    *(float *)(this + 1228) = sub_10049180(v12, v13, *(float *)(this + 1200), v14, v16) + v3[3];
    v18 = RandomFloat(0.0, 360.0);
    v9 = 0;
    for ( i = 0; i < 360; i += 120 )
    {
      v10 = 0.0;
      v11 = (_DWORD *)(*(_DWORD *)(a2 + 8)
                     + a2
                     + 68
                     * (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                         dword_10413198,
                         0,
                         *(_DWORD *)(a2 + 4) - 1));
      if ( v9 < 2 )
        v10 = (double)(unsigned __int16)(int)(((double)i + v18) * 182.04445) * 0.0054931641;
      v15 = v10;
      sub_100498A0(this, (int)&savedregs, (int)v11, *(_DWORD *)(a3 + 4 * *v11), v9++ >= 2, v15);
    }
  }
}
