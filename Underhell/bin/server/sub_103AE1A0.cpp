void __thiscall sub_103AE1A0(int this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  float *v5; // ebx
  float *v6; // eax
  double v7; // st6
  double v8; // st7
  float v9; // ecx
  float v10; // edx
  int v11; // eax
  int (__thiscall *v12)(int, int, int); // edx
  double v13; // st7
  double v14; // st7
  int (__thiscall *v15)(int, int, int); // eax
  int (__thiscall *v16)(int); // eax
  _DWORD *v17; // edi
  float *v18; // ebx
  float *v19; // eax
  void (__thiscall *v20)(_DWORD *, int *); // edx
  double v21; // st7
  float *v22; // eax
  double v23; // st7
  float *v24; // eax
  float *v25; // eax
  double v26; // st6
  double v27; // st7
  _BYTE *v28; // edi
  void (__thiscall *v29)(_BYTE *, _DWORD *); // eax
  float v30[12]; // [esp+20h] [ebp-6Ch] BYREF
  float v31[3]; // [esp+50h] [ebp-3Ch] BYREF
  _BYTE v32[12]; // [esp+5Ch] [ebp-30h] BYREF
  int v33[3]; // [esp+68h] [ebp-24h] BYREF
  float v34; // [esp+74h] [ebp-18h]
  float v35; // [esp+78h] [ebp-14h]
  float v36; // [esp+7Ch] [ebp-10h]
  float v37; // [esp+80h] [ebp-Ch]
  float v38; // [esp+84h] [ebp-8h]
  float v39; // [esp+88h] [ebp-4h]
  int v40; // [esp+94h] [ebp+8h]

  switch ( *a2 )
  {
    case 3:
      goto LABEL_5;
    case 0x18:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
        goto LABEL_23;
      if ( sub_100B3EF0(*(_DWORD **)(this + 2816), (float *)(this + 3736), this + 3736, 64.0, 3600.0, 1.0, (float *)v33) )
      {
        sub_10042450(v30, (float *)v33, 11, -2.0, 0, dword_10679924);
        (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(this + 2588) + 20))(
          *(_DWORD *)(this + 2588),
          v30,
          0);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 10);
      }
      break;
    case 0x42:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
LABEL_23:
        sub_1001E2B0((_DWORD *)this, (int)a2);
      else
        sub_10078690(*(_DWORD *)(this + 2604), this + 3736, 0.0, 0.0);
      break;
    case 0x4A:
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( v4 )
      {
        v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 532))(v4);
        v6 = (float *)sub_100217F0((void *)this);
        v7 = v5[1] + v6[1];
        v8 = v5[2] + v6[2];
        *(float *)(this + 3684) = *v5 + *v6;
        *(float *)(this + 3688) = v7;
        *(float *)(this + 3692) = v8;
        v9 = *(float *)(this + 3688);
        v10 = *(float *)(this + 3692);
        v37 = *(float *)(this + 3684);
        v11 = *(_DWORD *)v4;
        v38 = v9;
        v39 = v10;
        if ( (*(int (__thiscall **)(int))(v11 + 220))(v4) == 6 && *(_DWORD *)(dword_10698344 + 48) )
        {
          v40 = 120 * (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1, 1) + 60;
          v12 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8);
          v37 = (double)v40 + v37;
          v13 = (double)(120 * v12(dword_106B31E4, -1, 1) + 60);
        }
        else
        {
          v14 = (double)(80
                       * (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1, 1));
          v15 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8);
          v37 = v14 + v37;
          v13 = (double)(80 * v15(dword_106B31E4, -1, 1));
        }
        v16 = *(int (__thiscall **)(int))(*(_DWORD *)v4 + 288);
        v38 = v13 + v38;
        v17 = (_DWORD *)v16(v4);
        if ( v17 )
        {
          v18 = (float *)sub_10019640((_DWORD *)this);
          v19 = (float *)sub_10019640(v17);
          v20 = *(void (__thiscall **)(_DWORD *, int *))(*v17 + 904);
          v34 = *v19 - *v18;
          v35 = v19[1] - v18[1];
          v36 = v19[2] - v18[2];
          v20(v17, v33);
          v21 = *(float *)&v33[1] * v35 + v34 * *(float *)v33 + *(float *)&v33[2] * v36;
          if ( v21 >= 0.0
            || (v22 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v17 + 536))(v17, v32),
                sub_100D7A40(v22),
                v21 >= 50.0) )
          {
            v23 = v39 + 60.0;
          }
          else
          {
            v23 = v39 - 150.0;
          }
          v39 = v23;
        }
        v24 = (float *)sub_10019640((_DWORD *)this);
        v25 = sub_103ABDA0(this, v31, *v24, v24[1], v24[2]);
        v26 = v38 - v25[1];
        v27 = v39 - v25[2];
        *(float *)(this + 3672) = v37 - *v25;
        *(float *)(this + 3676) = v26;
        *(float *)(this + 3680) = v27;
        off_10689714();
        sub_103ADE60(this);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 17);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 6);
      }
      break;
    case 0x96:
      return;
    case 0x97:
      if ( *(float *)(this + 3732) < (double)*(float *)(dword_106B31C8 + 12) )
      {
        sub_1023C380((_DWORD *)this, (int)"NPC_Stalker.Scream", 0.0, 0);
        *(float *)(this + 3732) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                    dword_106B31E4,
                                    10.0,
                                    15.0)
                                + *(float *)(dword_106B31C8 + 12);
      }
      sub_10027CD0((_DWORD *)this, 0);
LABEL_5:
      v3 = sub_10021B90((void *)this);
      if ( v3
        && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 876))(v3, this)
        && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2740) > 1.0 )
      {
        *(float *)(this + 2740) = *(float *)(dword_106B31C8 + 12);
        sub_1023C380((_DWORD *)this, (int)"NPC_Stalker.Scream", 0.0, 0);
        *(float *)(this + 3660) = *(float *)(dword_106B31C8 + 12) + 2.0;
        *(float *)(this + 3656) = *(float *)(dword_106B31C8 + 12) + 2.0;
        sub_10022750((float *)this, 2.0, 0.0);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 1);
      }
      break;
    default:
      v28 = *(_BYTE **)(this + 3624);
      if ( !v28
        || (v29 = *(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v28 + 108), v28[8] = 1, v29(v28, a2), !v28[8]) )
      {
        sub_10046510(this, (int)a2);
      }
      break;
  }
}
