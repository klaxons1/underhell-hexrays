void __thiscall sub_1035EB90(int this, _DWORD *a2)
{
  float *v3; // edi
  float *v4; // eax
  int v5; // ecx
  float *v6; // eax
  float *v7; // eax
  float *v8; // eax
  int v9; // ecx
  _BYTE v10[44]; // [esp+14h] [ebp-78h] BYREF
  float v11; // [esp+40h] [ebp-4Ch]
  int v12[3]; // [esp+68h] [ebp-24h] BYREF
  float v13[3]; // [esp+74h] [ebp-18h] BYREF
  int v14[3]; // [esp+80h] [ebp-Ch] BYREF
  int savedregs; // [esp+8Ch] [ebp+0h] BYREF

  switch ( *a2 )
  {
    case 0x97:
      if ( sub_1007E040(*(_DWORD **)(this + 2588)) )
      {
        v3 = (float *)sub_1007DFE0(*(_DWORD **)(this + 2588));
        v4 = (float *)sub_10019640((_DWORD *)this);
        v5 = *(_DWORD *)(this + 2604);
        *(float *)v14 = *v3 + *v4;
        *(float *)&v14[1] = v3[1] + v4[1];
        *(float *)&v14[2] = v3[2] + v4[2];
        sub_10078720(v5, (int)v14, -2.0);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 11);
      }
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
      {
        sub_10027CD0((_DWORD *)this, 0);
        sub_10039F40((int *)this, 26);
        *(_BYTE *)(this + 3660) = 0;
        *(float *)(this + 3656) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                    dword_106B31E4,
                                    2.0,
                                    5.0)
                                + *(float *)(dword_106B31C8 + 12);
      }
      break;
    case 0x98:
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v9 = *(_DWORD *)(this + 2604);
      *(float *)v12 = *(float *)(this + 580) + *(float *)(this + 476);
      *(float *)&v12[1] = *(float *)(this + 584) + *(float *)(this + 480);
      *(float *)&v12[2] = *(float *)(this + 588) + *(float *)(this + 484);
      sub_10078720(v9, (int)v12, -2.0);
      break;
    case 0x9C:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
      {
        sub_10027CD0((_DWORD *)this, 0);
        sub_10039F40((int *)this, 1);
      }
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( *(float *)(this + 3648) > (double)*(float *)(this + 588) && (*(_BYTE *)(this + 256) & 1) == 0 )
      {
        v6 = (float *)sub_10019640((_DWORD *)this);
        v13[0] = *v6;
        v13[1] = v6[1];
        v13[2] = v6[2] - 32.0;
        v7 = (float *)sub_10019640((_DWORD *)this);
        sub_1002A5F0((int)&savedregs, this, v7, v13, 33570827, this, 26, (int)v10);
        if ( 1.0 == v11 )
        {
          sub_10027CD0((_DWORD *)this, 0);
        }
        else
        {
          v8 = (float *)sub_10019640((_DWORD *)this);
          *(float *)(this + 3648) = v8[2] - v11 * 32.0;
        }
      }
      break;
    case 0x9D:
      if ( (*(_BYTE *)(this + 256) & 1) != 0 )
      {
        sub_1035D090(this, 0);
        sub_10027CD0((_DWORD *)this, 0);
      }
      break;
    case 0x9F:
      if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 2824) )
      {
        *(float *)(this + 2824) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                    dword_106B31E4,
                                    0.5,
                                    2.0)
                                + *(float *)(dword_106B31C8 + 12);
        sub_1023C380((_DWORD *)this, (int)"NPC_Crow.Squawk", 0.0, 0);
      }
      break;
    default:
      sub_100497D0((int *)this, a2);
      break;
  }
}
