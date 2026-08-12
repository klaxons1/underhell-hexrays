void __thiscall sub_101E3EF0(int *this, int a2, float *a3, int a4)
{
  int *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  double v11; // st7
  int v12; // eax
  int v13; // eax
  float v14; // [esp+1Ch] [ebp-60h]
  _DWORD v15[11]; // [esp+2Ch] [ebp-50h] BYREF
  unsigned int v16; // [esp+58h] [ebp-24h]
  float v17; // [esp+60h] [ebp-1Ch]
  int v18; // [esp+6Ch] [ebp-10h]

  if ( *((_BYTE *)this + 225) )
  {
    if ( (sub_1001E4E0(v15, a2), v16 == -1)
      || (v5 = &off_1061BE18[4 * (v16 & 0xFFF) + 1], off_1061BE18[4 * (v16 & 0xFFF) + 2] != v16 >> 12)
      || !*v5
      || (off_1061BE18[4 * (v16 & 0xFFF) + 2] != v16 >> 12 ? (v6 = 0) : (v6 = *v5),
          (v7 = sub_100D7680(v6), (v8 = v7) == 0)
       || ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1672))(v7) & 0x10000000) == 0
       || (*(int (__thiscall **)(int, int *))(*(_DWORD *)v8 + 1080))(v8, this) == 1)
      && (v16 == -1 || off_1061BE18[4 * (v16 & 0xFFF) + 2] != v16 >> 12
        ? (v9 = 0)
        : (v9 = off_1061BE18[4 * (v16 & 0xFFF) + 1]),
          !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9)
       || (v16 == -1 || off_1061BE18[4 * (v16 & 0xFFF) + 2] != v16 >> 12
         ? (v10 = 0)
         : (v10 = off_1061BE18[4 * (v16 & 0xFFF) + 1]),
           (*(unsigned __int8 (__thiscall **)(int, int *, int))(*(_DWORD *)dword_106B3CDC + 228))(
             dword_106B3CDC,
             this,
             v10))) )
    {
      this[436] = *(_DWORD *)(a4 + 68);
      switch ( *(_DWORD *)(a4 + 68) )
      {
        case 1:
          v11 = *(float *)(dword_106BBACC + 44);
          goto LABEL_28;
        case 2:
          v12 = dword_106BBB14;
          goto LABEL_27;
        case 3:
          v11 = *(float *)(dword_106BBB5C + 44);
          goto LABEL_28;
        case 4:
        case 5:
          v11 = *(float *)(dword_106BBBA4 + 44);
          goto LABEL_28;
        case 6:
        case 7:
          v12 = dword_106BBBEC;
LABEL_27:
          v11 = *(float *)(v12 + 44);
LABEL_28:
          v17 = v11 * v17;
          break;
        default:
          break;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 80))(dword_106B3CDC, v18) )
      {
        v14 = v17;
        v13 = (*(int (__thiscall **)(int *))(*this + 276))(this);
        sub_100E84B0(*(_DWORD *)(a4 + 12), *(_DWORD *)(a4 + 16), *(_DWORD *)(a4 + 20), (int)a3, v13, v14);
        sub_100EA500(this, v17, a3, (float *)a4, v18);
      }
      sub_102482C0(v15, this);
    }
  }
}
