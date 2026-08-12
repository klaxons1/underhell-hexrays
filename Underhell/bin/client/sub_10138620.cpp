void __thiscall sub_10138620(float *this, int a2)
{
  bool v2; // zf
  int v3; // eax
  int v4; // edi
  double v5; // st7
  double v6; // st6
  int v7; // edx
  double v8; // st5
  int v9; // ecx
  int v10; // eax
  double v11; // st4
  int v12; // ebx
  double v13; // rt1
  double v14; // st5
  double v15; // rt2
  double v16; // st5
  double v17; // st6
  float v18; // [esp+Ch] [ebp-64h]
  float v19; // [esp+Ch] [ebp-64h]
  float v20; // [esp+18h] [ebp-58h]
  int v21; // [esp+18h] [ebp-58h]
  float v22; // [esp+18h] [ebp-58h]
  float v23; // [esp+48h] [ebp-28h]
  int v24[3]; // [esp+50h] [ebp-20h] BYREF
  int v25[3]; // [esp+5Ch] [ebp-14h] BYREF
  int v26; // [esp+68h] [ebp-8h]
  float *v27; // [esp+6Ch] [ebp-4h]

  v2 = *(_DWORD *)(dword_1043A004 + 48) == 0;
  v27 = this;
  if ( !v2 )
  {
    v23 = *(float *)(a2 + 184) * *(float *)(a2 + 184)
        + *(float *)(a2 + 180) * *(float *)(a2 + 180)
        + *(float *)(a2 + 188) * *(float *)(a2 + 188);
    if ( off_103EDFE0(v23) >= 0.1 )
    {
      v3 = *(_DWORD *)(a2 + 336);
      if ( v3 < 0 )
      {
        *(float *)(a2 + 200) = *((float *)off_103DC81C + 3);
        return;
      }
      v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, v3);
      if ( v4 )
      {
        v26 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 4))(
                dword_10413178,
                *(_DWORD *)(a2 + 340));
        v5 = *(float *)(a2 + 224);
        v6 = *(float *)(a2 + 228);
        v7 = (int)(*((float *)off_103DC81C + 3) * *(float *)(a2 + 244) + *(float *)(a2 + 248)) % *(_DWORD *)(a2 + 348);
        v8 = *(float *)(a2 + 232);
        v9 = *(_DWORD *)(a2 + 52);
        v10 = (v9 & 0x20) != 0 ? 0 : 5;
        if ( (v9 & 4) != 0 )
        {
          v11 = *(float *)(a2 + 192);
        }
        else
        {
          if ( (v9 & 8) == 0 )
            goto LABEL_11;
          v11 = 1.0 - *(float *)(a2 + 192);
        }
        v5 = v5 * v11;
        v6 = v6 * v11;
        v8 = v8 * v11;
LABEL_11:
        v12 = *(_DWORD *)(a2 + 48);
        v13 = v8 * 0.0039215689;
        v14 = v5 * 0.0039215689;
        *(float *)v24 = v14;
        v15 = v14;
        v16 = v6 * 0.0039215689;
        *(float *)&v24[1] = v16;
        *(float *)&v24[2] = v13;
        v17 = *(float *)(a2 + 236) * 0.00392156862745098;
        *(float *)v25 = v15 * v17;
        *(float *)&v25[1] = v16 * v17;
        *(float *)&v25[2] = v13 * v17;
        switch ( v12 )
        {
          case 0:
            if ( v26 )
            {
              sub_10138020(v26, a2, *(float *)&v7, v10, (float *)v25, (float *)v24, v4, v26, *(float *)(a2 + 884));
            }
            else
            {
              v18 = (float)v7;
              sub_100178A0(
                a2 + 352,
                128,
                a2 + 352,
                v4,
                v18,
                v10,
                (float *)(a2 + 60),
                (float *)(a2 + 180),
                *(float *)(a2 + 204),
                *(float *)(a2 + 208),
                *(float *)(a2 + 216),
                *(float *)(a2 + 196),
                *(float *)(a2 + 240),
                *(_DWORD *)(a2 + 252),
                v9,
                (float *)v25,
                *(float *)(a2 + 212),
                *(float *)(a2 + 884));
            }
            break;
          case 2:
            v20 = (float)v7;
            sub_100189F0(
              v12,
              a2 + 352,
              128,
              a2 + 352,
              v4,
              v20,
              v10,
              (float *)(a2 + 60),
              (float *)(a2 + 180),
              COERCE_INT(*(float *)(a2 + 204)),
              COERCE_INT(*(float *)(a2 + 216)),
              *(float *)(a2 + 196),
              *(float *)(a2 + 240),
              *(_DWORD *)(a2 + 252),
              (float *)v25,
              *(float *)(a2 + 884));
            break;
          case 3:
            *(float *)&v21 = (float)v7;
            sub_10018E80(
              v12,
              a2 + 352,
              128,
              a2 + 352,
              v4,
              v21,
              v10,
              (float *)(a2 + 60),
              (float *)(a2 + 180),
              *(float *)(a2 + 204),
              COERCE_INT(*(float *)(a2 + 216)),
              *(float *)(a2 + 196),
              *(float *)(a2 + 240),
              *(_DWORD *)(a2 + 252),
              (float *)v25,
              *(float *)(a2 + 884));
            break;
          case 4:
            sub_10137DD0(
              v27,
              v4,
              a2,
              v7,
              v10,
              *((float *)off_103DC81C + 4),
              (float *)v25,
              COERCE_INT(*(float *)(a2 + 884)));
            break;
          case 5:
          case 7:
            v22 = (float)v7;
            sub_10019320(
              v12,
              a2 + 352,
              128,
              a2 + 352,
              (void (__cdecl *)(int, int, _DWORD))sub_10136C60,
              v4,
              v22,
              v10,
              (float *)(a2 + 60),
              (float *)(a2 + 180),
              *(float *)(a2 + 204),
              *(float *)(a2 + 216),
              *(float *)(a2 + 196),
              *(float *)(a2 + 240),
              *(_DWORD *)(a2 + 252),
              (float *)v25,
              *(float *)(a2 + 884));
            break;
          case 6:
            v19 = (float)v7;
            sub_10018260(
              v4,
              a2 + 352,
              128,
              a2 + 352,
              v4,
              v26,
              *(float *)(a2 + 344),
              v19,
              v10,
              *(_DWORD *)(a2 + 56),
              (float *)(a2 + 60),
              *(float *)(a2 + 204),
              *(float *)(a2 + 208),
              *(float *)(a2 + 216),
              *(float *)(a2 + 196),
              *(float *)(a2 + 240),
              *(_DWORD *)(a2 + 252),
              v9,
              (float *)v25,
              COERCE_INT(*(float *)(a2 + 212)),
              *(float *)(a2 + 884));
            break;
          case 8:
            sub_10138400(a2, v7, v10, (int)v25, v4, v26, COERCE_INT(*(float *)(a2 + 884)));
            break;
          case 9:
            sub_10136E50(a2, a2, v7, v10, (float *)v25, v4, *(float *)(a2 + 884));
            break;
          default:
            DevWarning(1, "CViewRenderBeams::DrawBeam:  Unknown beam type %i\n", v12);
            break;
        }
      }
    }
  }
}
