void __thiscall sub_101953A0(int this)
{
  int v2; // eax
  float v3; // eax
  float v4; // ecx
  int v5; // eax
  float *v6; // edi
  int v7; // ecx
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  int v14; // [esp+4h] [ebp-30h]
  float v15; // [esp+4h] [ebp-30h]
  float v16; // [esp+14h] [ebp-20h] BYREF
  float v17; // [esp+18h] [ebp-1Ch]
  float v18; // [esp+1Ch] [ebp-18h]
  float v19[3]; // [esp+20h] [ebp-14h] BYREF
  float v20; // [esp+2Ch] [ebp-8h] BYREF
  float v21; // [esp+30h] [ebp-4h] BYREF

  if ( sub_1025FC50() )
  {
    v2 = *(_DWORD *)(this + 1124);
    if ( v2 == 4 )
    {
      sub_1023C380((int)"EDIT_END_AREA.NotCreating", 0.0, 0);
      return;
    }
    if ( v2 == 1 )
    {
      v3 = *(float *)(this + 1076);
      v4 = *(float *)(this + 1080);
      v18 = *(float *)(this + 1112);
      v16 = v3;
      v17 = v4;
      v5 = sub_10184390(800);
      if ( v5 )
        *(float *)&v6 = COERCE_FLOAT(sub_1018F080(v5, (float *)(this + 1104), &v16));
      else
        *(float *)&v6 = 0.0;
      v21 = *(float *)&v6;
      sub_1018F640(&dword_10632624, &v21);
      sub_1019FC80(v6);
      sub_1023C380((int)"EDIT_END_AREA.Creating", 0.0, 0);
      if ( *(_DWORD *)(dword_106B7C4C + 48) )
        sub_1018DD90(v6, 4, 0.0);
      v7 = *(_DWORD *)(this + 1088);
      if ( !v7 )
        goto LABEL_25;
      if ( *(float *)(v7 + 16) < (double)*(float *)(this + 1104)
        && *(float *)(v7 + 16) < (double)*(float *)(this + 1076) )
      {
        sub_1018F770((char *)v7, (char *)v6, 1);
        v14 = 3;
LABEL_23:
        sub_1018F770((char *)v6, *(char **)(this + 1088), v14);
        goto LABEL_24;
      }
      if ( *(float *)(v7 + 4) <= (double)*(float *)(this + 1104)
        || *(float *)(v7 + 4) <= (double)*(float *)(this + 1076) )
      {
        if ( *(float *)(v7 + 20) >= (double)*(float *)(this + 1108)
          || *(float *)(v7 + 20) >= (double)*(float *)(this + 1080) )
        {
          if ( *(float *)(v7 + 8) <= (double)*(float *)(this + 1108)
            || *(float *)(v7 + 8) <= (double)*(float *)(this + 1080) )
          {
            goto LABEL_24;
          }
          sub_1018F770((char *)v7, (char *)v6, 0);
          v14 = 2;
          goto LABEL_23;
        }
        sub_1018F770((char *)v7, (char *)v6, 2);
        sub_1018F770((char *)v6, *(char **)(this + 1088), 0);
      }
      else
      {
        sub_1018F770((char *)v7, (char *)v6, 3);
        sub_1018F770((char *)v6, *(char **)(this + 1088), 1);
      }
LABEL_24:
      *(_DWORD *)(this + 1180) = 0;
      *(float *)(this + 1088) = *(float *)&v6;
      *(_DWORD *)(this + 1100) = 4;
LABEL_25:
      *(_DWORD *)(this + 1124) = 0;
      *(_DWORD *)(this + 1100) = 4;
      return;
    }
    v15 = 0.0;
    if ( *(_BYTE *)(this + 1168) )
    {
      sub_1023C380((int)"EDIT_END_AREA.Creating", v15, 0);
      if ( *(float *)(this + 1076) <= (double)*(float *)(this + 1144) )
        v8 = *(float *)(this + 1076);
      else
        v8 = *(float *)(this + 1144);
      v16 = v8;
      if ( *(float *)(this + 1080) <= (double)*(float *)(this + 1148) )
        v9 = *(float *)(this + 1080);
      else
        v9 = *(float *)(this + 1148);
      v17 = v9;
      if ( *(float *)(this + 1084) <= (double)*(float *)(this + 1152) )
        v10 = *(float *)(this + 1084);
      else
        v10 = *(float *)(this + 1152);
      v18 = v10;
      if ( *(float *)(this + 1076) >= (double)*(float *)(this + 1144) )
        v11 = *(float *)(this + 1076);
      else
        v11 = *(float *)(this + 1144);
      v19[0] = v11;
      if ( *(float *)(this + 1080) >= (double)*(float *)(this + 1148) )
        v12 = *(float *)(this + 1080);
      else
        v12 = *(float *)(this + 1148);
      v19[1] = v12;
      if ( *(float *)(this + 1084) >= (double)*(float *)(this + 1152) )
        v13 = *(float *)(this + 1084);
      else
        v13 = *(float *)(this + 1152);
      v19[2] = v13;
      v20 = *(float *)(this + 1156);
      v21 = *(float *)(this + 1160);
      sub_1019A700(&v16, v19, &v20);
      *(_BYTE *)(this + 1168) = 0;
      *(_DWORD *)(this + 1100) = 4;
    }
    else
    {
      sub_1023C380((int)"EDIT_END_AREA.NotCreating", v15, 0);
      *(_DWORD *)(this + 1100) = 4;
    }
  }
}
