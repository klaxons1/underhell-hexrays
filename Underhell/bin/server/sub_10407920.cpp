unsigned int __thiscall sub_10407920(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int result; // eax
  int *v5; // ecx
  unsigned int v6; // eax
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
  int v29; // [esp+10h] [ebp-4h] BYREF

  v2 = this[527];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[527] & 0xFFF) + 1], result = v2 >> 12, v3[1] != result) || !*v3 )
  {
    result = sub_102831D0();
    if ( result )
    {
      result = *(_DWORD *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 8))(result);
      this[527] = result;
      if ( result != -1 )
      {
        v5 = &off_1061BE18[4 * (result & 0xFFF) + 1];
        result >>= 12;
        if ( v5[1] == result )
        {
          if ( *v5 )
          {
            v6 = this[527];
            *(float *)&v29 = 0.2;
            if ( v6 == -1 || off_1061BE18[4 * (v6 & 0xFFF) + 2] != v6 >> 12 )
              v7 = 0;
            else
              v7 = off_1061BE18[4 * (v6 & 0xFFF) + 1];
            sub_100C1F20((float *)(v7 + 824), (float *)&v29);
            v8 = this[527];
            v29 = 100;
            if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
              v9 = 0;
            else
              v9 = off_1061BE18[4 * (v8 & 0xFFF) + 1];
            sub_100C1E10((float *)(v9 + 828), &v29);
            v10 = this[527];
            *(float *)&v29 = 0.5;
            if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
              v11 = 0;
            else
              v11 = off_1061BE18[4 * (v10 & 0xFFF) + 1];
            sub_102BBDC0((float *)(v11 + 832), (float *)&v29);
            v12 = this[527];
            if ( v12 == -1 || off_1061BE18[4 * (this[527] & 0xFFF) + 2] != v12 >> 12 )
              v13 = 0;
            else
              v13 = off_1061BE18[4 * (this[527] & 0xFFF) + 1];
            sub_100C34C0((float *)(v13 + 800), 0.64999998, 0.64999998, 0.64999998);
            v14 = this[527];
            if ( v14 == -1 || off_1061BE18[4 * (this[527] & 0xFFF) + 2] != v14 >> 12 )
              v15 = 0;
            else
              v15 = off_1061BE18[4 * (this[527] & 0xFFF) + 1];
            sub_102BC090((float *)(v15 + 812), 0.0, 0.0, 0.0);
            v16 = this[527];
            v29 = 8;
            if ( v16 == -1 || off_1061BE18[4 * (v16 & 0xFFF) + 2] != v16 >> 12 )
              v17 = 0;
            else
              v17 = off_1061BE18[4 * (v16 & 0xFFF) + 1];
            sub_10284420((float *)(v17 + 848), &v29);
            v18 = this[527];
            v29 = 32;
            if ( v18 == -1 || off_1061BE18[4 * (v18 & 0xFFF) + 2] != v18 >> 12 )
              v19 = 0;
            else
              v19 = off_1061BE18[4 * (v18 & 0xFFF) + 1];
            sub_10284480((float *)(v19 + 852), &v29);
            v20 = this[527];
            v29 = 4;
            if ( v20 == -1 || off_1061BE18[4 * (v20 & 0xFFF) + 2] != v20 >> 12 )
              v21 = 0;
            else
              v21 = off_1061BE18[4 * (v20 & 0xFFF) + 1];
            sub_102842B0((float *)(v21 + 856), &v29);
            v22 = this[527];
            v29 = 2;
            if ( v22 == -1 || off_1061BE18[4 * (v22 & 0xFFF) + 2] != v22 >> 12 )
              v23 = 0;
            else
              v23 = off_1061BE18[4 * (v22 & 0xFFF) + 1];
            sub_102843C0((float *)(v23 + 840), &v29);
            v24 = this[527];
            v29 = 16;
            if ( v24 == -1 || off_1061BE18[4 * (v24 & 0xFFF) + 2] != v24 >> 12 )
              v25 = 0;
            else
              v25 = off_1061BE18[4 * (v24 & 0xFFF) + 1];
            sub_100C1DB0((float *)(v25 + 844), &v29);
            v26 = this[527];
            if ( v26 == -1 || off_1061BE18[4 * (this[527] & 0xFFF) + 2] != v26 >> 12 )
              v27 = 0;
            else
              v27 = (int *)off_1061BE18[4 * (this[527] & 0xFFF) + 1];
            sub_100F5880(v27, 999.0);
            v28 = this[527];
            if ( v28 == -1 || off_1061BE18[4 * (this[527] & 0xFFF) + 2] != v28 >> 12 )
              return sub_10284FE0(0, (int)this, "0");
            else
              return sub_10284FE0(off_1061BE18[4 * (this[527] & 0xFFF) + 1], (int)this, "0");
          }
        }
      }
    }
    else
    {
      this[527] = -1;
    }
  }
  return result;
}
