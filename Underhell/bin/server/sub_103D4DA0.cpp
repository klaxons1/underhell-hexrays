void __thiscall sub_103D4DA0(unsigned int this, int a2, int a3)
{
  int v5; // edx
  int *v6; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  int *v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // esi
  __int16 v16; // ax
  float v17; // edx
  float v18; // eax
  double v19; // st7
  int v20; // eax
  int v21; // ecx
  int v22; // [esp+8h] [ebp-30h]
  float v23; // [esp+8h] [ebp-30h]
  int v24[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  float v25; // [esp+28h] [ebp-10h] BYREF
  float v26; // [esp+2Ch] [ebp-Ch]
  float v27; // [esp+30h] [ebp-8h]
  int *v28; // [esp+34h] [ebp-4h]
  int savedregs; // [esp+38h] [ebp+0h] BYREF
  float v30; // [esp+40h] [ebp+8h]
  BOOL v31; // [esp+44h] [ebp+Ch]
  int v32; // [esp+44h] [ebp+Ch]
  int v33; // [esp+44h] [ebp+Ch]

  v5 = *(_DWORD *)(a3 + 12 * a2 + 36);
  v6 = (int *)(a3 + 12 * a2);
  v8 = v6[8];
  v28 = v6;
  v9 = v6[10];
  v24[0] = v8;
  v24[1] = v5;
  v24[2] = v9;
  v30 = off_10689714();
  if ( *(_DWORD *)(this + 1128) != -1
    || (v31 = a2 == 0,
        *(_WORD *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(
                     dword_106BAFF8,
                     *(_DWORD *)(a3 + 4 * v31 + 8))
                 + 72) == 70)
    && *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( *(_BYTE *)(this + 1144) )
      sub_100DA500((_BYTE *)this, a2, a3);
    if ( *(_BYTE *)(this + 1144) != 1 )
    {
      if ( v30 > (double)*(float *)(this + 1148) )
        *(float *)(this + 1148) = v30;
      v17 = *((float *)v28 + 15);
      v18 = *((float *)v28 + 16);
      v25 = *((float *)v28 + 14);
      v26 = v17;
      v27 = v18;
      off_10689714();
      v19 = *(float *)(this + 1148);
      v22 = *(_DWORD *)(a3 + 4 * a2);
      v25 = v25 * v19;
      v26 = v26 * v19;
      v27 = v19 * v27;
      sub_101BA870(v22, (int *)&v25);
      v20 = *(_DWORD *)(a3 + 4 * (a2 == 0) + 104);
      v33 = v20;
      if ( v20 && sub_103D2B70(v20) )
      {
        sub_103D47F0(this, v33, SLODWORD(v30), a2, a3);
      }
      else if ( *(_BYTE *)(this + 1144) )
      {
        if ( !*(_BYTE *)(this + 1145) )
        {
          sub_103D4BD0(this, (int)v24, a2, a3);
          if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 1136) >= 0.25 )
          {
            v21 = off_1067E554;
            *(float *)(this + 1136) = *(float *)(dword_106B31C8 + 12);
            v23 = *(float *)(dword_106B31C8 + 12) + 0.01;
            sub_100EC3F0((_DWORD *)this, (int)sub_103D3C70, v23, v21);
            sub_103D26F0(this, (int)&savedregs, SLODWORD(v30), a2, a3);
            ++*(_DWORD *)(this + 1124);
            if ( sub_103D1AD0(this) )
            {
              if ( !*(_BYTE *)(this + 1132) )
              {
                sub_103D1D90((_DWORD *)this, 0.5);
                *(_BYTE *)(this + 1132) = 1;
              }
            }
          }
        }
      }
      else if ( (*(_BYTE *)(this + 250) & 1) != 0 && sub_100F8C20((_DWORD *)this) )
      {
        sub_103D2A20(this, *(float *)(this + 1148), a2, a3);
      }
      else
      {
        sub_101BA870(*(_DWORD *)(a3 + 4 * a2), (int *)&flt_106F1CA8);
        sub_1010C7F0((float *)dword_10614CA8, this, "FadeAndRespawn", 0.0099999998, 0, 0, 0);
      }
    }
  }
  else
  {
    v10 = *(_DWORD *)(a3 + 4 * v31 + 104);
    v32 = v10;
    if ( v10 && sub_103D2B70(v10) )
      sub_103D47F0(this, v32, SLODWORD(v30), a2, a3);
    v11 = *(_DWORD *)(this + 1168);
    if ( v11 != -1 )
    {
      v12 = &off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 1];
      v13 = v11 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 2] == v13 )
      {
        if ( *v12 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 2] == v13 )
            v14 = *v12;
          else
            v14 = 0;
          sub_103D3960(v14);
        }
      }
    }
    sub_101BA8E0(this + 12);
    v15 = *(_DWORD *)(this + 424);
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 76))(v15);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 72))(v15, v16 & 0xFDFF);
  }
}
