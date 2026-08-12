char __thiscall sub_103955D0(int this, _DWORD *a2)
{
  int v3; // eax
  float *v4; // eax
  int (__thiscall *v5)(int, _BYTE *); // edx
  float *v6; // eax
  int (__thiscall *v7)(int, float *, _DWORD, _DWORD, _DWORD); // edx
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  int (__thiscall *v10)(int, int *); // edx
  _BYTE v12[12]; // [esp+18h] [ebp-30h] BYREF
  _BYTE v13[12]; // [esp+24h] [ebp-24h] BYREF
  float v14[3]; // [esp+30h] [ebp-18h] BYREF
  float v15; // [esp+3Ch] [ebp-Ch]
  int v16; // [esp+40h] [ebp-8h] BYREF
  float v17; // [esp+44h] [ebp-4h]

  switch ( *a2 )
  {
    case 0xE:
      sub_10092900((_DWORD *)this, a2);
      LOBYTE(v3) = sub_1007E040(*(_DWORD **)(this + 2588));
      if ( (_BYTE)v3 )
      {
        v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        if ( !v3 )
        {
          v4 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 904))(this, v13);
          v15 = *v4 * 240.0;
          *(float *)&v16 = v4[1] * 240.0;
          v5 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504);
          v17 = 240.0 * v4[2];
          v6 = (float *)v5(this, v12);
          v14[0] = *v6 + v15;
          v14[1] = v6[1] + *(float *)&v16;
          v7 = *(int (__thiscall **)(int, float *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 1708);
          v14[2] = v6[2] + v17;
          LOBYTE(v3) = v7(this, v14, 1.0, 2.0, 0.0);
        }
      }
      break;
    case 0x58:
      LOBYTE(v3) = sub_10022810((float *)this);
      goto LABEL_3;
    case 0x97:
      LOBYTE(v3) = sub_10023D10((_DWORD *)this, 61);
LABEL_3:
      if ( (_BYTE)v3 )
        LOBYTE(v3) = sub_10027CD0((_DWORD *)this, 0);
      break;
    case 0x98:
      if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
      {
        v8 = *(_DWORD **)(this + 2588);
        v9 = (_DWORD *)sub_10261B20();
        sub_10394D20(v8, v9);
      }
      v10 = *(int (__thiscall **)(int, int *))(*(_DWORD *)this + 1264);
      v17 = 48.0;
      v16 = 14;
      LOBYTE(v3) = v10(this, &v16);
      break;
    default:
      LOBYTE(v3) = sub_10092900((_DWORD *)this, a2);
      break;
  }
  return v3;
}
