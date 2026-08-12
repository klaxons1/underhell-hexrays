void __userpurge sub_10173970(float *a1@<ecx>, int a2@<edi>, int a3)
{
  float *v3; // esi
  int v4; // ecx
  double i; // st7
  float *v6; // eax
  float v7; // [esp+4h] [ebp-14h]
  float v8; // [esp+4h] [ebp-14h]
  float v9; // [esp+8h] [ebp-10h]
  float v10; // [esp+8h] [ebp-10h]
  float v11; // [esp+Ch] [ebp-Ch]
  float v12; // [esp+Ch] [ebp-Ch]
  int v13; // [esp+10h] [ebp-8h] BYREF
  float v14; // [esp+14h] [ebp-4h]

  v3 = a1 + 3;
  v7 = a1[6] - a1[3];
  v9 = a1[7] - a1[4];
  v11 = a1[8] - a1[5];
  v14 = off_103EDFEC();
  v8 = v7 * 3.0;
  v10 = v9 * 3.0;
  v12 = 3.0 * v11;
  sub_10172990(&v13, (int)"TEShowLine", v3);
  v4 = v13;
  if ( v13 )
  {
    for ( i = v14; v14 > 0.0; i = v14 )
    {
      v14 = i - 3.0;
      v6 = sub_10172220(v4, a2);
      if ( v6 )
      {
        v6[6] = 0.0;
        v6[7] = 0.0;
        v6[8] = 0.0;
        *((_BYTE *)v6 + 44) = 0;
        *((_BYTE *)v6 + 45) = -1;
        v6[9] = 30.0;
        *((_BYTE *)v6 + 46) = -1;
        *((_BYTE *)v6 + 47) = -1;
        *((_BYTE *)v6 + 40) = 0;
        v6[3] = *v3;
        v6[4] = v3[1];
        v6[5] = v3[2];
        *v3 = v8 + *v3;
        v3[1] = v3[1] + v10;
        v3[2] = v3[2] + v12;
      }
      v4 = v13;
    }
    if ( v4 )
      sub_100F2FF0(v4);
  }
}
