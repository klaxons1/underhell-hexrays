int *__thiscall sub_103B84A0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int *result; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  int *v27; // ecx
  unsigned int v28; // eax
  double v29; // [esp+10h] [ebp-8h] BYREF

  v2 = this[982];
  if ( v2 == -1
    || (v3 = &off_1061BE18[4 * (this[982] & 0xFFF) + 1], result = (int *)(v2 >> 12), (int *)v3[1] != result)
    || !*v3 )
  {
    result = (int *)sub_10283150();
    if ( result )
    {
      result = (int *)(*(int (__thiscall **)(int *))(*result + 8))(result);
      this[982] = *result;
    }
    else
    {
      this[982] = -1;
    }
    v5 = this[982];
    if ( v5 != -1 )
    {
      result = &off_1061BE18[4 * (this[982] & 0xFFF) + 1];
      v6 = v5 >> 12;
      if ( off_1061BE18[4 * (this[982] & 0xFFF) + 2] == v6 )
      {
        if ( *result )
        {
          HIDWORD(v29) = 32;
          if ( result[1] == v6 )
            v7 = *result;
          else
            v7 = 0;
          sub_100C1E10((float *)(v7 + 828), (int *)&v29 + 1);
          v8 = this[982];
          v29 = 3.0;
          if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
            v9 = 0;
          else
            v9 = off_1061BE18[4 * (v8 & 0xFFF) + 1];
          sub_103B6070((float *)(v9 + 832), &v29);
          v10 = this[982];
          HIDWORD(v29) = 16;
          if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
            v11 = 0;
          else
            v11 = off_1061BE18[4 * (v10 & 0xFFF) + 1];
          sub_10284420((float *)(v11 + 848), (int *)&v29 + 1);
          v12 = this[982];
          HIDWORD(v29) = 64;
          if ( v12 == -1 || off_1061BE18[4 * (v12 & 0xFFF) + 2] != v12 >> 12 )
            v13 = 0;
          else
            v13 = off_1061BE18[4 * (v12 & 0xFFF) + 1];
          sub_10284480((float *)(v13 + 852), (int *)&v29 + 1);
          v14 = this[982];
          HIDWORD(v29) = 20;
          if ( v14 == -1 || off_1061BE18[4 * (v14 & 0xFFF) + 2] != v14 >> 12 )
            v15 = 0;
          else
            v15 = off_1061BE18[4 * (v14 & 0xFFF) + 1];
          sub_102842B0((float *)(v15 + 856), (int *)&v29 + 1);
          v16 = this[982];
          HIDWORD(v29) = 8;
          if ( v16 == -1 || off_1061BE18[4 * (v16 & 0xFFF) + 2] != v16 >> 12 )
            v17 = 0;
          else
            v17 = off_1061BE18[4 * (v16 & 0xFFF) + 1];
          sub_102843C0((float *)(v17 + 840), (int *)&v29 + 1);
          v18 = this[982];
          HIDWORD(v29) = 64;
          if ( v18 == -1 || off_1061BE18[4 * (v18 & 0xFFF) + 2] != v18 >> 12 )
            v19 = 0;
          else
            v19 = off_1061BE18[4 * (v18 & 0xFFF) + 1];
          sub_100C1DB0((float *)(v19 + 844), (int *)&v29 + 1);
          v20 = this[982];
          v29 = 0.3;
          if ( v20 == -1 || off_1061BE18[4 * (v20 & 0xFFF) + 2] != v20 >> 12 )
            v21 = 0;
          else
            v21 = off_1061BE18[4 * (v20 & 0xFFF) + 1];
          sub_1031B680((float *)(v21 + 824), &v29);
          v22 = this[982];
          if ( v22 == -1 || off_1061BE18[4 * (this[982] & 0xFFF) + 2] != v22 >> 12 )
            v23 = 0;
          else
            v23 = off_1061BE18[4 * (this[982] & 0xFFF) + 1];
          sub_100C34C0((float *)(v23 + 800), 0.25, 0.25, 0.25);
          v24 = this[982];
          if ( v24 == -1 || off_1061BE18[4 * (this[982] & 0xFFF) + 2] != v24 >> 12 )
            v25 = 0;
          else
            v25 = off_1061BE18[4 * (this[982] & 0xFFF) + 1];
          sub_102BC090((float *)(v25 + 812), 0.0, 0.0, 0.0);
          v26 = this[982];
          if ( v26 == -1 || off_1061BE18[4 * (this[982] & 0xFFF) + 2] != v26 >> 12 )
            v27 = 0;
          else
            v27 = (int *)off_1061BE18[4 * (this[982] & 0xFFF) + 1];
          sub_100F5880(v27, 500.0);
          v28 = this[982];
          if ( v28 == -1 || off_1061BE18[4 * (this[982] & 0xFFF) + 2] != v28 >> 12 )
            return (int *)sub_10284B60(0, (int)this, "MiniGunBase");
          else
            return (int *)sub_10284B60(off_1061BE18[4 * (this[982] & 0xFFF) + 1], (int)this, "MiniGunBase");
        }
      }
    }
  }
  return result;
}
