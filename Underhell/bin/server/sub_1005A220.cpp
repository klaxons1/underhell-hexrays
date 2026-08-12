void __thiscall sub_1005A220(int this, _DWORD *a2)
{
  int v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // esi
  int v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // esi
  bool v7; // zf
  char v8; // bl
  int v9; // ecx
  double v10; // st7
  int v11; // eax
  int v12; // eax
  float v13; // ecx
  int v14; // edx
  float *v15; // ecx
  long double v16; // st6
  char v17; // dl
  long double v18; // st6
  long double v19; // st7
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  char v25; // bl
  int v26; // ecx
  _DWORD *v27; // ecx
  double v28; // st7
  float v29[3]; // [esp+14h] [ebp-18h] BYREF
  float v30; // [esp+20h] [ebp-Ch]
  int v31; // [esp+24h] [ebp-8h] BYREF
  float v32; // [esp+28h] [ebp-4h]

  switch ( *a2 )
  {
    case 0x186A3:
      v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1656))(*(_DWORD *)(this + 4));
      if ( !v5 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5) )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
        v6 = *(void (__thiscall ****)(_DWORD, int))(this + 64);
        if ( v6 )
          (**v6)(v6, 1);
      }
      break;
    case 0x186A4:
      v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1656))(*(_DWORD *)(this + 4));
      if ( !v3 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3) )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 12))(this, 0);
        v4 = *(void (__thiscall ****)(_DWORD, int))(this + 64);
        if ( v4 )
          (**v4)(v4, 4);
      }
      break;
    case 0x186A9:
      v7 = *(_BYTE *)(this + 122) == 0;
      v8 = *(_BYTE *)(this + 8);
      v9 = *(_DWORD *)(this + 4);
      v31 = 13;
      if ( v7 )
      {
        v10 = *(float *)(this + 104) - 24.0;
        goto LABEL_29;
      }
      v32 = *(float *)(this + 108);
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v9 + 1264))(v9, &v31);
      v11 = *(_DWORD *)(this + 4);
      *(_BYTE *)(this + 8) = v8;
      if ( *(_DWORD *)(v11 + 2136) != 4 )
      {
        v12 = sub_1007DD50(*(_DWORD *)(v11 + 2588));
        v13 = *(float *)v12;
        v14 = *(int *)(v12 + 4);
        v32 = *(float *)(v12 + 8);
        v30 = v13;
        v15 = *(float **)(this + 4);
        v16 = v32 - v15[181];
        v31 = v14;
        v17 = 0;
        v18 = fabs(v16);
        if ( v18 >= *(float *)(this + 108) )
        {
          v19 = v18;
        }
        else
        {
          v29[0] = v30 - v15[179];
          v29[1] = *(float *)&v31 - v15[180];
          v19 = v32 - v15[181];
          v29[2] = v19;
          sub_10018D40(v29);
          v17 = 1;
        }
        if ( v19 > *(float *)(this + 108) )
        {
          v20 = *(_DWORD *)(this + 4);
          v21 = 6;
          if ( *(_DWORD *)(v20 + 2324) == 3 || !v17 || *(float *)(this + 108) * 4.0 > v19 )
            v21 = 11;
          v22 = sub_1007DE30(*(_DWORD *)(v20 + 2588));
          if ( v22 == 7 )
          {
            v22 = 6;
          }
          else if ( v22 == 12 )
          {
            v22 = 11;
          }
          if ( v22 != v21 )
            sub_1007DD70(v21);
          v23 = sub_10022C40(*(_DWORD **)(this + 4));
          sub_1007DF80(v23);
        }
      }
      break;
    case 0x186AA:
      v10 = 0.0;
      v8 = *(_BYTE *)(this + 8);
      v9 = *(_DWORD *)(this + 4);
      v31 = 123;
LABEL_29:
      v32 = v10;
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v9 + 1264))(v9, &v31);
      *(_BYTE *)(this + 8) = v8;
      break;
    case 0x186AB:
      if ( *(_BYTE *)(this + 120)
        && ((unsigned __int8)sub_1004B510((void *)this, 100007, 0)
         || (unsigned __int8)sub_1004B510((void *)this, 100000, 0)
         || (unsigned __int8)sub_1004B510((void *)this, 100012, 0)
         || (unsigned __int8)sub_1004B510((void *)this, 100003, 0)) )
      {
        v24 = *(_DWORD *)(this + 4);
        v25 = *(_BYTE *)(this + 8);
        v32 = 0.0;
        v31 = 48;
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)v24 + 1264))(v24, &v31);
      }
      else
      {
        v26 = *(_DWORD *)(this + 4);
        v25 = *(_BYTE *)(this + 8);
        v32 = 0.0;
        v31 = 49;
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)v26 + 1264))(v26, &v31);
      }
      v27 = *(_DWORD **)(this + 4);
      *(_BYTE *)(this + 8) = v25;
      if ( sub_10020E90(v27)
        && (unsigned __int8)sub_1004B510((void *)this, 100000, 0)
        && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 136)
        && !sub_100590C0((_DWORD **)this) )
      {
        v28 = RandomFloat(10.0, 15.0);
        v7 = *(_DWORD *)(this + 48) == 0;
        *(float *)(this + 136) = v28 + *(float *)(dword_106B31C8 + 12);
        if ( v7 && sub_1004C220((_DWORD **)this, 100000) && sub_1004C220((_DWORD **)this, 32) )
          sub_10058F40(this, "TLK_LEAD_COMINGBACK");
        else
          sub_10058F40(this, "TLK_LEAD_IDLE");
      }
      break;
    default:
      sub_1004B450((_BYTE *)this, (int)a2);
      break;
  }
}
