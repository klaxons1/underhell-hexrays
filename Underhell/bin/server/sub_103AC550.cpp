void __thiscall sub_103AC550(int *this, int a2)
{
  int v3; // ecx
  double v4; // st7
  int v5; // esi
  int v6; // eax
  void *v7; // esi
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // ebx
  int v11; // eax
  _BYTE v12[12]; // [esp+3Ch] [ebp-30h] BYREF
  float v13[3]; // [esp+48h] [ebp-24h] BYREF
  char v14[4]; // [esp+54h] [ebp-18h] BYREF
  float v15; // [esp+58h] [ebp-14h]
  float v16; // [esp+5Ch] [ebp-10h]
  int v17[3]; // [esp+60h] [ebp-Ch] BYREF
  int v18; // [esp+74h] [ebp+8h]
  float v19; // [esp+74h] [ebp+8h]

  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v4 = *(float *)(dword_106EAC8C + 44);
      v5 = *this;
      *(float *)v17 = 16.0;
      *(float *)&v17[1] = 16.0;
      *(float *)&v17[2] = 16.0;
      *(float *)v14 = -16.0;
      v15 = -16.0;
      v16 = -16.0;
      v6 = (*(int (__thiscall **)(int *, _DWORD, char *, int *, int, int, _DWORD, _DWORD))(v5 + 1072))(
             this,
             32.0,
             v14,
             v17,
             (int)v4,
             4,
             1.0,
             0);
      v7 = (void *)v6;
      if ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 256) & 0x2080) != 0 )
        {
          v18 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -10, 10);
          v13[0] = 5.0;
          v13[1] = 0.0;
          v13[2] = (float)v18;
          sub_100D8FC0(v7, (int)v13);
        }
        v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 288))(v7);
        v9 = v8;
        if ( v8 )
        {
          v19 = *(float *)(dword_106EAC8C + 44);
          v10 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 504))(v8, v12);
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 276))(v9);
          sub_100E84B0(*v10, v10[1], v10[2], (int)&flt_106B4F40, v11, v19);
        }
        sub_1023C380(this, (int)"NPC_Stalker.Hit", 0.0, 0);
      }
      break;
    case 0x802:
      sub_1023C380(this, (int)"NPC_Stalker.FootstepLeft", *(float *)(a2 + 12), 0);
      break;
    case 0x803:
      sub_1023C380(this, (int)"NPC_Stalker.FootstepRight", *(float *)(a2 + 12), 0);
      break;
    default:
      v3 = this[906];
      if ( v3 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 248))(v3, a2);
      else
        sub_1003AD70((int)this, a2);
      break;
  }
}
