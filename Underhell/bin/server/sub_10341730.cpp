void __thiscall sub_10341730(int *this, int *a2)
{
  int *v2; // ebx
  int v3; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  float *v12; // eax
  int v13; // edi
  int v14; // edx
  int (__thiscall *v15)(int *, _DWORD, float *, float *, _DWORD, int, _DWORD, _DWORD); // edx
  int v16; // ebx
  _DWORD *v17; // edi
  float *v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  float v21; // [esp+20h] [ebp-104h]
  int v22; // [esp+28h] [ebp-FCh]
  int v23[20]; // [esp+38h] [ebp-ECh] BYREF
  int v24[3]; // [esp+88h] [ebp-9Ch] BYREF
  float v25[3]; // [esp+94h] [ebp-90h] BYREF
  float v26[3]; // [esp+A0h] [ebp-84h] BYREF
  float v27[3]; // [esp+ACh] [ebp-78h] BYREF
  int v28[3]; // [esp+B8h] [ebp-6Ch] BYREF
  float v29[3]; // [esp+C4h] [ebp-60h] BYREF
  float v30[3]; // [esp+D0h] [ebp-54h] BYREF
  float v31[3]; // [esp+DCh] [ebp-48h] BYREF
  float v32[3]; // [esp+E8h] [ebp-3Ch] BYREF
  float v33[3]; // [esp+F4h] [ebp-30h] BYREF
  int v34[3]; // [esp+100h] [ebp-24h] BYREF
  int v35; // [esp+10Ch] [ebp-18h] BYREF
  float v36; // [esp+110h] [ebp-14h]
  float v37; // [esp+114h] [ebp-10h]
  int v38; // [esp+118h] [ebp-Ch] BYREF
  float v39; // [esp+11Ch] [ebp-8h]
  float v40; // [esp+120h] [ebp-4h]

  v2 = a2;
  v3 = *a2;
  if ( (a2[4] & 0x400) != 0 )
  {
    if ( v3 == dword_106E6534 )
    {
      sub_1023C380(this, (int)"Weapon_CombineGuard.Special1", 0.0, 0);
      this[1239] = *v2;
    }
    else if ( v3 == dword_106E6530 )
    {
      if ( *((_BYTE *)this + 4960) )
      {
        LODWORD(v25[2]) = this;
        v24[0] = 3103;
        v5 = sub_100CF460(this);
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v5 + 1392))(v5, v24, this);
        sub_1033CC20((int)this, 10.0);
        this[1239] = *v2;
      }
      else
      {
LABEL_34:
        this[1239] = *v2;
      }
    }
    else
    {
      v6 = this[906];
      v22 = (int)a2;
      if ( v6 )
LABEL_40:
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 248))(v6, v22);
      else
LABEL_8:
        sub_1003AD70((int)this, v22);
    }
  }
  else
  {
    switch ( v3 )
    {
      case 2:
        if ( sub_100CF460(this) )
        {
          v7 = sub_100CF460(this);
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 1132))(v7, 8, 0.0);
          v8 = sub_100CF460(this);
          a2 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 1216))(v8);
          v9 = sub_100CF460(this);
          sub_10031800((_DWORD *)(v9 + 1200), &a2);
          v10 = sub_100CF460(this);
          a2 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 1220))(v10);
          v11 = sub_100CF460(this);
          sub_100CBCD0((_DWORD *)(v11 + 1204), &a2);
        }
        sub_10023E00((char *)this, 3);
        sub_10023E00((char *)this, 4);
        sub_10023E00((char *)this, 5);
        this[1239] = *v2;
        break;
      case 3:
        v14 = *this;
        v31[0] = 16.0;
        v15 = *(int (__thiscall **)(int *, _DWORD, float *, float *, _DWORD, int, _DWORD, _DWORD))(v14 + 1072);
        v31[1] = 16.0;
        v31[2] = 18.0;
        v27[0] = -16.0;
        v27[1] = -16.0;
        v27[2] = -18.0;
        v16 = v15(this, 70.0, v27, v31, 0, 128, 1.0, 0);
        v17 = (_DWORD *)sub_100CFD20(v16);
        if ( v17 )
        {
          sub_104222B0(this + 182, &v35, 0, &v38);
          if ( !sub_100B0F60(v17, dword_106E6540, 0, (int)this) )
          {
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v17 + 320))(v17) )
            {
              if ( this[202] == 9 )
              {
                v33[0] = -36.0;
                v33[1] = -29.0;
                v33[2] = 0.0;
                sub_100D8FC0(v17, (int)v33);
                v26[0] = *(float *)&v38 * 150.0 + *(float *)&v35 * 250.0;
                v26[1] = v39 * 150.0 + v36 * 250.0;
                v26[2] = 250.0 * v37 + 150.0 * v40;
                sub_100EA150(v16, v26);
              }
              else
              {
                v32[0] = -12.0;
                v32[1] = -7.0;
                v32[2] = 0.0;
                sub_100D8FC0(v17, (int)v32);
                v30[0] = *(float *)&v38 * 50.0 + *(float *)&v35 * 100.0;
                v30[1] = v39 * 50.0 + v36 * 100.0;
                v30[2] = 100.0 * v37 + 50.0 * v40;
                sub_100EA150(v16, v30);
              }
            }
            v21 = (float)this[1048];
            sub_10248110((int)v23, (int)this, (int)this, v21, 128, 0);
            v18 = (float *)sub_10019640(v17);
            sub_10248690((float *)v23, (float *)&v35, v18, 1.0);
            sub_100D9E70(v17, (int)this, v23);
            sub_1023C380(this, (int)"NPC_Combine.WeaponBash", 0.0, 0);
          }
        }
        if ( !*((_BYTE *)this + 4173) )
        {
          v19 = "COMBINEPRISONGUARD_KICK";
          if ( !*((_BYTE *)this + 4976) )
            v19 = "COMBINE_KICK";
          sub_100AC410((int)(this + 1061), v19, 0, 2);
        }
        v2 = a2;
        goto LABEL_34;
      case 4:
        goto LABEL_34;
      case 7:
        *(float *)&v38 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                           dword_106B31E4,
                           -1000.0,
                           1000.0);
        v39 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -1000.0,
                1000.0);
        v40 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -1000.0,
                1000.0);
        sub_100BF1B0(this, "lefthand", (int)v34, 0, 0, 0);
        if ( this[581] == 4 )
        {
          (*(void (__thiscall **)(int *, float *, _DWORD, int *))(*this + 528))(this, v29, 0, &v35);
          *(float *)v28 = *(float *)&v35 * 175.0 + v29[0] * 750.0;
          *(float *)&v28[1] = v36 * 175.0 + v29[1] * 750.0;
          *(float *)&v28[2] = 175.0 * v37 + 750.0 * v29[2];
          sub_102D5F00((float *)v34, &flt_106F1CB4, (int)v28, (int)&v38, (int)this, 3.5, 1);
        }
        else
        {
          sub_102D5F00((float *)v34, &flt_106F1CB4, (int)(this + 1049), (int)&v38, (int)this, 3.5, 1);
          --this[1067];
        }
        *((float *)this + 1054) = *(float *)(dword_106B31C8 + 12) + 6.0;
        this[1239] = *v2;
        break;
      case 8:
        sub_1023C380(this, (int)"NPC_Combine.GrenadeLaunch", 0.0, 0);
        v12 = (float *)(*(int (__thiscall **)(int *))(*this + 968))(this);
        v13 = sub_100E2680((int)"npc_contactgrenade", v12, v25, (int)&flt_106F1CB4);
        (*(void (__thiscall **)(int, const char *, int *, int *))(*(_DWORD *)v13 + 120))(
          v13,
          "velocity",
          this + 1049,
          this);
        (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 96))(v13);
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 3) )
          *((float *)this + 1054) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                           + 4))(
                                      dword_106B31E4,
                                      2.0,
                                      5.0)
                                  + *(float *)(dword_106B31C8 + 12);
        else
          *((float *)this + 1054) = *(float *)(dword_106B31C8 + 12) + 6.0;
        this[1239] = *v2;
        break;
      case 9:
        sub_100BF1B0(this, "lefthand", (int)v34, 0, 0, 0);
        sub_102D5F00((float *)v34, &flt_106F1CB4, (int)(this + 1049), (int)&flt_106F1CA8, (int)this, 3.5, 1);
        --this[1067];
        this[1239] = *v2;
        break;
      case 10:
        if ( *((_BYTE *)this + 4173) )
          goto LABEL_34;
        v20 = "COMBINEPRISONGUARD_ALERT";
        if ( !*((_BYTE *)this + 4976) )
          v20 = "COMBINE_ALERT";
        sub_100AC410((int)(this + 1061), v20, 0, 2);
        this[1239] = *v2;
        break;
      default:
        v6 = this[906];
        v22 = (int)a2;
        if ( v6 )
          goto LABEL_40;
        goto LABEL_8;
    }
  }
}
