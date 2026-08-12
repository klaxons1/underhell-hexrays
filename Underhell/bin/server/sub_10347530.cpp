void __thiscall sub_10347530(int this, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  double v6; // st7
  int v7; // [esp+4h] [ebp-8h]
  float v8; // [esp+4h] [ebp-8h]

  v3 = *(_DWORD *)(this + 3684);
  if ( v3 )
  {
    if ( *(_BYTE *)(this + 3637) )
    {
      sub_1005C620((_BYTE *)(v3 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
LABEL_18:
      sub_10242820(*(_DWORD *)(this + 3684), 164, 0.1);
      sub_102428B0(*(_DWORD *)(this + 3684), 0.40000001, 0.1);
    }
    else
    {
      v4 = a2;
      if ( !a2 && *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3668) )
        v4 = 7;
      switch ( v4 )
      {
        case 1:
          *(_BYTE *)(this + 3638) = *(_BYTE *)(this + 3638) == 0;
          sub_1005C620((_BYTE *)(v3 + 116), 255, 128, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
          v5 = *(_DWORD *)(this + 3684);
          *(float *)&v7 = 0.1;
          if ( *(_BYTE *)(this + 3638) )
          {
            sub_102428B0(v5, 0.25, *(float *)&v7);
            sub_10242820(*(_DWORD *)(this + 3684), 164, 0.1);
          }
          else
          {
            sub_102428B0(v5, 0.2, *(float *)&v7);
            v6 = 0.1;
LABEL_11:
            v8 = v6;
            sub_10242820(*(_DWORD *)(this + 3684), 64, v8);
          }
          break;
        case 2:
          sub_1005C620((_BYTE *)(v3 + 116), 255, 128, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
          sub_102428B0(*(_DWORD *)(this + 3684), 0.44999999, 0.1);
          sub_10242820(*(_DWORD *)(this + 3684), 220, 0.1);
          return;
        case 4:
          sub_1005C620((_BYTE *)(v3 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
          sub_102428B0(*(_DWORD *)(this + 3684), 0.1, 0.5);
          v6 = 0.5;
          goto LABEL_11;
        case 5:
          sub_1005C620((_BYTE *)(v3 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
          sub_102428B0(*(_DWORD *)(this + 3684), 0.1, 3.0);
          sub_10242820(*(_DWORD *)(this + 3684), 0, 3.0);
          return;
        case 6:
          sub_1005C620((_BYTE *)(v3 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
          sub_102428B0(*(_DWORD *)(this + 3684), 0.1, 1.0);
          sub_10242820(*(_DWORD *)(this + 3684), 0, 1.0);
          return;
        case 7:
          sub_1005C620((_BYTE *)(v3 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
          sub_10242820(*(_DWORD *)(this + 3684), 255, 0.1);
          sub_102428B0(*(_DWORD *)(this + 3684), 0.5, 0.1);
          return;
        default:
          sub_1005C620((_BYTE *)(v3 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
          goto LABEL_18;
      }
    }
  }
}
