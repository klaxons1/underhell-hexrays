int sub_10155010()
{
  int v0; // eax
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  int v3; // eax
  __int16 *v4; // eax
  __int16 *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // eax
  const char *v15; // eax
  _DWORD *v16; // edi
  _DWORD *v17; // esi
  int v18; // ebx
  _DWORD *v19; // eax
  _DWORD *v20; // edi
  int v21; // esi
  _DWORD *v22; // ebx
  int v23; // eax
  double v24; // st7
  float v26; // [esp+14h] [ebp-254h]
  char Buffer[512]; // [esp+24h] [ebp-244h] BYREF
  _BYTE v28[4]; // [esp+224h] [ebp-44h] BYREF
  float v29[3]; // [esp+228h] [ebp-40h] BYREF
  int v30[3]; // [esp+234h] [ebp-34h] BYREF
  int v31; // [esp+240h] [ebp-28h] BYREF
  float v32; // [esp+244h] [ebp-24h]
  float v33; // [esp+248h] [ebp-20h]
  int v34; // [esp+24Ch] [ebp-1Ch]
  int v35; // [esp+250h] [ebp-18h] BYREF
  float v36; // [esp+254h] [ebp-14h]
  float v37; // [esp+258h] [ebp-10h]
  int v38; // [esp+25Ch] [ebp-Ch] BYREF
  float v39; // [esp+260h] [ebp-8h]
  float v40; // [esp+264h] [ebp-4h]

  if ( byte_10697278 )
  {
    v0 = sub_1025FB50(dword_1060F300);
    if ( v0 )
    {
      v1 = (_DWORD *)sub_101E94B0(v0);
      v2 = v1;
      if ( v1 )
      {
        (*(void (__thiscall **)(_DWORD *))(*v1 + 164))(v1);
        sub_100D9BB0((int)v2, 0.0);
        sub_100DF2D0(v2);
      }
    }
  }
  sub_101A0A80();
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0) )
  {
    v3 = sub_1025FB50(dword_1060F300);
    if ( v3 )
    {
      if ( byte_1069362F )
      {
        v4 = (__int16 *)sub_101E2A40(v3);
        v5 = v4;
        if ( v4 )
        {
          v6 = *v4;
          if ( v6 < 0 || v6 >= *(_DWORD *)(dword_106935D8 + 4) )
          {
            ++dword_10691DE0;
            v7 = 0;
          }
          else
          {
            v7 = *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * v6);
          }
          sub_1008D160(v7, (float *)&v35, dword_10693634);
          v8 = v5[1];
          if ( v8 < 0 || v8 >= *(_DWORD *)(dword_106935D8 + 4) )
          {
            ++dword_10691DE0;
            v9 = 0;
          }
          else
          {
            v9 = *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * v8);
          }
          sub_1008D160(v9, v29, dword_10693634);
          *(float *)v30 = *(float *)&v35 - v29[0];
          *(float *)&v30[1] = v36 - v29[1];
          *(float *)&v30[2] = v37 - v29[2];
          v10 = -off_10689714();
          if ( (v5[7] & 2) != 0 )
          {
            *(float *)&v31 = v10;
            v32 = 4.0;
            v33 = 4.0;
            *(float *)&v38 = -4.0;
            v39 = -4.0;
            v40 = -4.0;
            sub_1011BB60((int)&v35, (int)&v38, (int)&v31, (int)v30, 0, 255, 0, 40, 0.0);
          }
          else
          {
            *(float *)&v38 = v10;
            v39 = 4.0;
            v40 = 4.0;
            *(float *)&v31 = -4.0;
            v32 = -4.0;
            v33 = -4.0;
            sub_1011BB60((int)&v35, (int)&v31, (int)&v38, (int)v30, 255, 0, 0, 40, 0.0);
          }
        }
      }
      else
      {
        if ( byte_1069362E )
          v11 = sub_101E29E0(v3, 3);
        else
          v11 = sub_101E29E0(v3, 2);
        v12 = v11;
        if ( v11 )
        {
          sub_1008D160(v11, (float *)&v35, dword_10693634);
          *(float *)&v38 = 8.0;
          v39 = 8.0;
          v40 = 8.0;
          *(float *)&v31 = -8.0;
          v32 = -8.0;
          v33 = -8.0;
          sub_1011BB20((int)&v35, (int)&v31, (int)&v38, 255, 0, 0, 40, 0.0);
          v13 = *(_DWORD *)(v12 + 96);
          if ( v13 )
          {
            v14 = *(_DWORD *)(v13 + 260);
            if ( v14 )
            {
              v38 = v35;
              v39 = v36;
              v40 = v37 + 6.0;
              sub_1011CF30((float *)&v38, v14, 0, 0.0);
            }
            v15 = sub_100701F0(*(_DWORD *)(v12 + 96));
            sub_1011CF30((float *)&v35, (int)v15, 0, 0.0);
          }
        }
      }
      if ( byte_1069362E )
        sub_101A0D30(LODWORD(flt_10608FBC));
      else
        sub_1011D2A0();
    }
  }
  if ( dword_10693628 )
    sub_1008C530(*(_DWORD **)(dword_10693628 + 804));
  if ( *(_DWORD *)(*(_DWORD *)(dword_106B2C88 + 28) + 48) )
  {
    v16 = (_DWORD *)dword_106AE3E4;
    if ( dword_106AE3E4 )
    {
      do
      {
        v17 = (_DWORD *)*v16;
        if ( *(_DWORD *)(*v16 + 236) || v17[60] )
        {
          v18 = dword_10700AC8;
          (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
          (*(void (__thiscall **)(_DWORD *))(*v17 + 160))(v17);
          (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 104))(v18);
        }
        v16 = (_DWORD *)v16[3];
      }
      while ( v16 );
    }
  }
  if ( *(_DWORD *)(dword_106B32C4 + 48) )
  {
    v19 = (_DWORD *)dword_106AE3E4;
    v34 = dword_106AE3E4;
    if ( dword_106AE3E4 )
    {
      while ( 1 )
      {
        v20 = (_DWORD *)*v19;
        if ( *(_DWORD *)(*v19 + 424) )
        {
          v21 = v20[106];
          v22 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v20 + 28))(v20, v28);
          v26 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v21 + 116))(v21);
          v23 = sub_10215420(v26);
          v24 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v21 + 116))(v21, v23);
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v21 + 116))(
            v21,
            COERCE_UNSIGNED_INT64(v24 * 2.2),
            HIDWORD(COERCE_UNSIGNED_INT64(v24 * 2.2)));
          sub_10429A00(Buffer, 0x200u, "%s: Mass: %.2f kg / %.2f lb (%s)", *v22);
          sub_100D5DE0(v20, 0, (int)Buffer, 0.0, 255, 255, 255, 255);
          v19 = (_DWORD *)v34;
        }
        v34 = v19[3];
        if ( !v34 )
          break;
        v19 = (_DWORD *)v34;
      }
    }
  }
  return sub_101848B0();
}
