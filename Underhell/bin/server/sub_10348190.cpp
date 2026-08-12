void __thiscall sub_10348190(int this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ecx
  double v5; // st7
  double v6; // st7
  double v7; // st7
  int *v8; // ecx
  float v9; // [esp+0h] [ebp-14h]
  float v10; // [esp+0h] [ebp-14h]
  float v11; // [esp+4h] [ebp-10h]
  float v12; // [esp+4h] [ebp-10h]
  float v13; // [esp+4h] [ebp-10h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 3672) = *(float *)(this + 704);
  *(float *)(this + 3676) = *(float *)(this + 708);
  *(float *)(this + 3680) = *(float *)(this + 712);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  v2 = *(_DWORD *)(this + 3684);
  v3 = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(this + 3637) )
    {
      sub_1005C620((_BYTE *)(v2 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v2 + 116)));
LABEL_19:
      sub_10242820(*(_DWORD *)(this + 3684), 164, 0.1);
      v13 = 0.1;
      v6 = 0.40000001;
LABEL_20:
      v9 = v6;
      sub_102428B0(*(_DWORD *)(this + 3684), v9, v13);
    }
    else
    {
      if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3668) )
        v3 = 7;
      switch ( v3 )
      {
        case 1:
          *(_BYTE *)(this + 3638) = *(_BYTE *)(this + 3638) == 0;
          sub_1005C620((_BYTE *)(v2 + 116), 255, 128, 0, HIBYTE(*(_DWORD *)(v2 + 116)));
          v4 = *(_DWORD *)(this + 3684);
          v11 = 0.1;
          if ( *(_BYTE *)(this + 3638) )
          {
            sub_102428B0(v4, 0.25, v11);
            sub_10242820(*(_DWORD *)(this + 3684), 164, 0.1);
          }
          else
          {
            sub_102428B0(v4, 0.2, v11);
            v5 = 0.1;
LABEL_12:
            v12 = v5;
            sub_10242820(*(_DWORD *)(this + 3684), 64, v12);
          }
          break;
        case 2:
          sub_1005C620((_BYTE *)(v2 + 116), 255, 128, 0, HIBYTE(*(_DWORD *)(v2 + 116)));
          sub_102428B0(*(_DWORD *)(this + 3684), 0.44999999, 0.1);
          sub_10242820(*(_DWORD *)(this + 3684), 220, 0.1);
          break;
        case 4:
          sub_1005C620((_BYTE *)(v2 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v2 + 116)));
          sub_102428B0(*(_DWORD *)(this + 3684), 0.1, 0.5);
          v5 = 0.5;
          goto LABEL_12;
        case 5:
          sub_1005C620((_BYTE *)(v2 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v2 + 116)));
          sub_102428B0(*(_DWORD *)(this + 3684), 0.1, 3.0);
          sub_10242820(*(_DWORD *)(this + 3684), 0, 3.0);
          break;
        case 6:
          sub_1005C620((_BYTE *)(v2 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v2 + 116)));
          sub_102428B0(*(_DWORD *)(this + 3684), 0.1, 1.0);
          sub_10242820(*(_DWORD *)(this + 3684), 0, 1.0);
          break;
        case 7:
          sub_1005C620((_BYTE *)(v2 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v2 + 116)));
          sub_10242820(*(_DWORD *)(this + 3684), 255, 0.1);
          v13 = 0.1;
          v6 = 0.5;
          goto LABEL_20;
        default:
          sub_1005C620((_BYTE *)(v2 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v2 + 116)));
          goto LABEL_19;
      }
    }
  }
  *(_BYTE *)(this + 3636) = 1;
  sub_10346E20((_DWORD *)this, 64.0);
  sub_10039F40((int *)this, dword_106E6670);
  v7 = 0.0;
  if ( *(_DWORD *)(this + 864) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
      {
        sub_100194B0(v8, 864);
        v7 = 0.0;
      }
    }
    *(float *)(this + 864) = v7;
  }
  v10 = v7;
  sub_100EC3F0((_DWORD *)this, (int)sub_10347D40, v10, 0);
  sub_1023C380((_DWORD *)this, (int)"NPC_CombineCamera.Move", 0.0, 0);
}
