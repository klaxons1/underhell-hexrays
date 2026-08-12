void __usercall sub_10347A00(int a1@<ecx>, double a2@<st0>)
{
  int v2; // ecx
  int *v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  float v7; // ecx
  double v8; // st7
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  int *v13; // ecx
  int *v14; // ecx
  int v15; // eax
  _BYTE *v16; // ecx
  bool v17; // zf
  int v18; // ecx
  double v19; // st7
  int v20; // ecx
  int v21; // ecx
  double v22; // st7
  void (__thiscall *v23)(int, int *, int, int); // edx
  int *v24; // [esp-4h] [ebp-1Ch] BYREF
  int v25; // [esp+0h] [ebp-18h]
  int v26; // [esp+4h] [ebp-14h]
  float v27; // [esp+8h] [ebp-10h]
  int v28; // [esp+Ch] [ebp-Ch]
  int v29; // [esp+10h] [ebp-8h]

  sub_10025DD0((_DWORD *)a1);
  sub_1003A0D0(a1, a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 728))(a1);
  if ( *(_BYTE *)(a1 + 3639) )
  {
    *(float *)&v4 = COERCE_FLOAT(sub_10346AB0((float *)a1));
    if ( *(float *)&v4 == 0.0 )
    {
      v27 = 0.0;
      *(float *)&v26 = 0.0;
      *(float *)&v25 = COERCE_FLOAT("NPC_CombineCamera.BecomeIdle");
      *(_DWORD *)(a1 + 3644) = -1;
      sub_1023C380((_DWORD *)a1, v25, *(float *)&v26, SLODWORD(v27));
      sub_10347850(a1, 0);
      sub_100EC3F0((_DWORD *)a1, (int)sub_10347D40, 0.0, 0);
      sub_100EC4A0((int *)a1, *(float *)(dword_106B31C8 + 12), 0);
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 3644);
      if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v5 >> 12 )
        v6 = 0;
      else
        v6 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
      if ( v4 != (int *)v6 )
      {
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        LODWORD(v7) = (unsigned int)v4[63] >> 11;
        if ( (v4[63] & 0x800) != 0 )
          sub_100DAE60((int)v4);
        v8 = *((float *)v4 + 145);
        v27 = v7;
        v9 = v8 - *(float *)(a1 + 580);
        v10 = v9 * v9;
        v11 = *((float *)v4 + 146) - *(float *)(a1 + 584);
        v12 = *((float *)v4 + 147) - *(float *)(a1 + 588);
        v27 = v12 * v12 + v11 * v11 + v10;
        if ( (double)*(int *)(a1 + 3628) > off_10689708(v27)
          && (*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)a1 + 876))(a1, v4) )
        {
          v26 = a1;
          v25 = (int)v4;
          v24 = v13;
          sub_1029BE60(&v24, (int)v4);
          sub_1002A0F0((int *)(a1 + 3016), (char)v24, v25, v26);
          if ( (*(unsigned __int8 (__thiscall **)(int *))(*v4 + 320))(v4) )
          {
            sub_10347530(a1, 2);
            if ( (*(_DWORD *)(a1 + 248) & 0x20) != 0 )
              sub_10347850(a1, 1);
            else
              sub_1023C380((_DWORD *)a1, (int)"NPC_CombineCamera.Active", 0.0, 0);
            v26 = a1;
            v25 = (int)v4;
            v24 = v14;
            sub_1029BE60(&v24, (int)v4);
            sub_1002A0F0((int *)(a1 + 3088), (char)v24, v25, v26);
            sub_10019680((_DWORD *)(a1 + 3644), (int)v4);
          }
          else
          {
            v15 = *(_DWORD *)(a1 + 3684);
            if ( v15 )
            {
              v16 = (_BYTE *)(v15 + 116);
              v17 = *(_BYTE *)(a1 + 3637) == 0;
              v26 = HIBYTE(*(_DWORD *)(v15 + 116));
              *(float *)&v25 = 0.0;
              if ( v17 )
              {
                sub_1005C620(v16, 0, 255, v25, v26);
                v26 = v20;
                sub_10242820(*(_DWORD *)(a1 + 3684), 255, 0.1);
                *(float *)&v26 = 0.1;
                v19 = 0.5;
              }
              else
              {
                sub_1005C620(v16, 255, 0, v25, v26);
                v26 = v18;
                sub_10242820(*(_DWORD *)(a1 + 3684), 164, 0.1);
                *(float *)&v26 = 0.1;
                v19 = 0.40000001;
              }
              v21 = *(_DWORD *)(a1 + 3684);
              *(float *)&v25 = v19;
              sub_102428B0(v21, *(float *)&v25, *(float *)&v26);
            }
            v22 = *(float *)(dword_106B31C8 + 12) + 2.0;
            v23 = *(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)a1 + 1120);
            v26 = 99;
            v25 = 4;
            v24 = v4;
            *(float *)(a1 + 3668) = v22;
            v23(a1, v24, v25, v26);
          }
        }
        else
        {
          if ( (*(_DWORD *)(a1 + 248) & 0x20) != 0 && *(_BYTE *)(a1 + 3637) )
            sub_10347850(a1, 0);
          v26 = 1;
          *(_DWORD *)(a1 + 3644) = -1;
          sub_10347530(a1, v26);
        }
      }
      *(float *)&v25 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_100EC4A0((int *)a1, *(float *)&v25, 0);
      sub_10346BD0((float *)a1, v4);
      v29 = v28;
      if ( *(_BYTE *)(a1 + 3637) && *(int *)(a1 + 3656) <= 3 )
      {
        v2 = dword_106B31C8;
        if ( 0.0 == *(float *)(a1 + 3652) || *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(a1 + 3652) )
        {
          if ( 0.0 != *(float *)(a1 + 3664) && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 3664) )
          {
            *(float *)(a1 + 3664) = 0.0;
            v28 = v2;
            sub_10242820(*(_DWORD *)(a1 + 3688), 0, 0.25);
            ++*(_DWORD *)(a1 + 3656);
          }
        }
        else
        {
          sub_102428B0(*(_DWORD *)(a1 + 3688), 1.0, 0.0);
          sub_10242820(*(_DWORD *)(a1 + 3688), 255, 0.0);
          sub_1005C620(
            (_BYTE *)(*(_DWORD *)(a1 + 3688) + 116),
            255,
            255,
            255,
            HIBYTE(*(_DWORD *)(*(_DWORD *)(a1 + 3688) + 116)));
          sub_1023C380((_DWORD *)a1, (int)"NPC_CombineCamera.Click", 0.0, 0);
          *(float *)(a1 + 3664) = *(float *)(dword_106B31C8 + 12) + 0.1;
          *(float *)(a1 + 3652) = *(float *)(dword_106B31C8 + 12) + 0.5;
        }
      }
    }
  }
  else
  {
    sub_10039F40((int *)a1, dword_106E666C);
    *(float *)&v26 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)a1, *(float *)&v26, 0);
  }
}
