void __usercall sub_10347D40(int a1@<ecx>, double a2@<st0>)
{
  unsigned int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  float v8; // [esp+0h] [ebp-Ch]
  float v9; // [esp+0h] [ebp-Ch]
  int v10; // [esp+4h] [ebp-8h]

  sub_10025DD0((_DWORD *)a1);
  sub_1003A0D0(a1, a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 728))(a1);
  if ( *(_BYTE *)(a1 + 3639) )
  {
    v9 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    sub_100EC4A0((int *)a1, v9, 0);
    sub_10039F40((int *)a1, dword_106E6670);
    v3 = *(_DWORD *)(a1 + 3644);
    if ( v3 != -1
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] == v3 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1]
      || !sub_10346AB0((float *)a1) )
    {
      v4 = *(_DWORD *)(a1 + 252) >> 11;
      *(float *)(a1 + 3672) = 15.0;
      if ( (v4 & 1) != 0 )
        sub_100DAE60(a1);
      *(float *)(a1 + 3676) = sin(*(float *)(dword_106B31C8 + 12) + *(float *)(dword_106B31C8 + 12)) * 45.0
                            + *(float *)(a1 + 708);
      sub_103467B0(a1);
      if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 3648) )
      {
        sub_1023C380((_DWORD *)a1, (int)"NPC_CombineCamera.Ping", 0.0, 0);
        *(float *)(a1 + 3648) = *(float *)(dword_106B31C8 + 12) + 1.0;
      }
      v5 = *(_DWORD *)(a1 + 3684);
      v6 = 0;
      if ( v5 )
      {
        if ( *(_BYTE *)(a1 + 3637) )
        {
          sub_1005C620((_BYTE *)(v5 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v5 + 116)));
LABEL_27:
          sub_10242820(*(_DWORD *)(a1 + 3684), 164, 0.1);
          sub_102428B0(*(_DWORD *)(a1 + 3684), 0.40000001, 0.1);
        }
        else
        {
          if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(a1 + 3668) )
            v6 = 7;
          switch ( v6 )
          {
            case 1:
              *(_BYTE *)(a1 + 3638) = *(_BYTE *)(a1 + 3638) == 0;
              sub_1005C620((_BYTE *)(v5 + 116), 255, 128, 0, HIBYTE(*(_DWORD *)(v5 + 116)));
              v7 = *(_DWORD *)(a1 + 3684);
              *(float *)&v10 = 0.1;
              if ( *(_BYTE *)(a1 + 3638) )
              {
                sub_102428B0(v7, 0.25, *(float *)&v10);
                sub_10242820(*(_DWORD *)(a1 + 3684), 164, 0.1);
              }
              else
              {
                sub_102428B0(v7, 0.2, *(float *)&v10);
                sub_10242820(*(_DWORD *)(a1 + 3684), 64, 0.1);
              }
              break;
            case 2:
              sub_1005C620((_BYTE *)(v5 + 116), 255, 128, 0, HIBYTE(*(_DWORD *)(v5 + 116)));
              sub_102428B0(*(_DWORD *)(a1 + 3684), 0.44999999, 0.1);
              sub_10242820(*(_DWORD *)(a1 + 3684), 220, 0.1);
              break;
            case 4:
              sub_1005C620((_BYTE *)(v5 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v5 + 116)));
              sub_102428B0(*(_DWORD *)(a1 + 3684), 0.1, 0.5);
              sub_10242820(*(_DWORD *)(a1 + 3684), 64, 0.5);
              break;
            case 5:
              sub_1005C620((_BYTE *)(v5 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v5 + 116)));
              sub_102428B0(*(_DWORD *)(a1 + 3684), 0.1, 3.0);
              sub_10242820(*(_DWORD *)(a1 + 3684), 0, 3.0);
              break;
            case 6:
              sub_1005C620((_BYTE *)(v5 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v5 + 116)));
              sub_102428B0(*(_DWORD *)(a1 + 3684), 0.1, 1.0);
              sub_10242820(*(_DWORD *)(a1 + 3684), 0, 1.0);
              break;
            case 7:
              sub_1005C620((_BYTE *)(v5 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v5 + 116)));
              sub_10242820(*(_DWORD *)(a1 + 3684), 255, 0.1);
              sub_102428B0(*(_DWORD *)(a1 + 3684), 0.5, 0.1);
              break;
            default:
              sub_1005C620((_BYTE *)(v5 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v5 + 116)));
              goto LABEL_27;
          }
        }
      }
    }
    else
    {
      sub_100EC3F0((_DWORD *)a1, (int)sub_10347A00, 0.0, 0);
    }
  }
  else
  {
    sub_10039F40((int *)a1, dword_106E666C);
    v8 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)a1, v8, 0);
  }
}
