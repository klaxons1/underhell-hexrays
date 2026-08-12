void __thiscall sub_103BE320(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  double v5; // st7
  int v6; // [esp+4h] [ebp-8h]
  float v7; // [esp+4h] [ebp-8h]

  v3 = *(_DWORD *)(this + 3656);
  if ( v3 )
  {
    switch ( a2 )
    {
      case 1:
        *(_BYTE *)(this + 3630) = *(_BYTE *)(this + 3630) == 0;
        sub_1005C620((_BYTE *)(v3 + 116), 255, 128, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
        v4 = *(_DWORD *)(this + 3656);
        *(float *)&v6 = 0.1;
        if ( !*(_BYTE *)(this + 3630) )
        {
          sub_102428B0(v4, 0.2, *(float *)&v6);
          v5 = 0.1;
          goto LABEL_6;
        }
        sub_102428B0(v4, 0.25, *(float *)&v6);
        sub_10242820(*(_DWORD *)(this + 3656), 164, 0.1);
        break;
      case 2:
        sub_1005C620((_BYTE *)(v3 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
        sub_102428B0(*(_DWORD *)(this + 3656), 0.1, 0.5);
        v5 = 0.5;
LABEL_6:
        v7 = v5;
        sub_10242820(*(_DWORD *)(this + 3656), 64, v7);
        break;
      case 3:
        sub_1005C620((_BYTE *)(v3 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
        sub_102428B0(*(_DWORD *)(this + 3656), 0.1, 3.0);
        sub_10242820(*(_DWORD *)(this + 3656), 0, 3.0);
        break;
      case 4:
        sub_1005C620((_BYTE *)(v3 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
        sub_102428B0(*(_DWORD *)(this + 3656), 0.1, 1.0);
        sub_10242820(*(_DWORD *)(this + 3656), 0, 1.0);
        break;
      default:
        sub_1005C620((_BYTE *)(v3 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v3 + 116)));
        sub_10242820(*(_DWORD *)(this + 3656), 164, 0.1);
        sub_102428B0(*(_DWORD *)(this + 3656), 0.40000001, 0.1);
        break;
    }
  }
}
