char __thiscall sub_100ED670(int this)
{
  float *v2; // eax
  double v3; // st7
  char result; // al
  int v5; // eax
  double v6; // st6
  double v7; // st5
  double v8; // st7
  double v9; // st3
  double v10; // st2
  double v11; // st4
  int v12; // ebx
  unsigned __int16 *v13; // edi
  int v14; // ecx
  int i; // edx
  double v16; // st6
  double v17; // st2
  double v18; // rt2
  double v19; // st7
  double v20; // st2
  double v21; // rtt
  double v22; // st5
  double v23; // st2
  double v24; // rt0
  double v25; // st3
  double v26; // st2
  double v27; // rt1
  double v28; // st4
  double v29; // st2
  double v30; // rt2
  float v31; // [esp+4h] [ebp-18h] BYREF
  float v32; // [esp+8h] [ebp-14h]
  float v33; // [esp+Ch] [ebp-10h]
  float v34; // [esp+10h] [ebp-Ch] BYREF
  float v35; // [esp+14h] [ebp-8h]
  float v36; // [esp+18h] [ebp-4h]

  if ( *(_WORD *)(this + 132) )
  {
    v5 = *(unsigned __int16 *)(this + 196);
    v6 = 9.9999994e27;
    v31 = 9.9999994e27;
    v7 = 9.9999994e27;
    v32 = 9.9999994e27;
    v8 = 9.9999994e27;
    v33 = 9.9999994e27;
    v9 = -9.9999994e27;
    v34 = -9.9999994e27;
    v10 = -9.9999994e27;
    v35 = -9.9999994e27;
    v11 = -9.9999994e27;
    v36 = -9.9999994e27;
    if ( v5 != 0xFFFF )
    {
      v12 = *(_DWORD *)(this + 184);
      do
      {
        v13 = (unsigned __int16 *)(v12 + 8 * (unsigned __int16)v5);
        v14 = *(_DWORD *)(*(_DWORD *)v13 + 8);
        for ( i = *(_DWORD *)v13 + 4; v14 != i; v14 = *(_DWORD *)(v14 + 4) )
        {
          if ( *(float *)(v14 + 12) <= v6 )
          {
            v16 = v10;
            v17 = *(float *)(v14 + 12);
            v31 = *(float *)(v14 + 12);
            v18 = v17;
            v10 = v16;
            v6 = v18;
          }
          if ( *(float *)(v14 + 16) <= v8 )
          {
            v19 = v10;
            v20 = *(float *)(v14 + 16);
            v32 = *(float *)(v14 + 16);
            v21 = v20;
            v10 = v19;
            v8 = v21;
          }
          if ( *(float *)(v14 + 20) <= v7 )
          {
            v22 = v10;
            v23 = *(float *)(v14 + 20);
            v33 = *(float *)(v14 + 20);
            v24 = v23;
            v10 = v22;
            v7 = v24;
          }
          if ( *(float *)(v14 + 12) >= v9 )
          {
            v25 = v10;
            v26 = *(float *)(v14 + 12);
            v34 = *(float *)(v14 + 12);
            v27 = v26;
            v10 = v25;
            v9 = v27;
          }
          if ( *(float *)(v14 + 16) >= v11 )
          {
            v28 = v10;
            v29 = *(float *)(v14 + 16);
            v35 = *(float *)(v14 + 16);
            v30 = v29;
            v10 = v28;
            v11 = v30;
          }
          if ( v10 <= *(float *)(v14 + 20) )
          {
            v10 = *(float *)(v14 + 20);
            v36 = *(float *)(v14 + 20);
          }
        }
        v5 = v13[3];
      }
      while ( v5 != 0xFFFF );
    }
    if ( *(_BYTE *)(this + 76) )
    {
      result = 1;
      *(float *)(this + 80) = v6;
      *(float *)(this + 84) = v8;
      *(float *)(this + 88) = v7;
      *(float *)(this + 92) = v9;
      *(float *)(this + 96) = v11;
      *(float *)(this + 100) = v10;
    }
    else
    {
      sub_101F1070(this + 12, &v31, &v34, this + 80, this + 92);
      return 1;
    }
  }
  else
  {
    v2 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 140) + 36))(*(_DWORD *)(this + 140));
    *(float *)(this + 80) = *v2;
    *(float *)(this + 84) = v2[1];
    v3 = v2[2];
    result = 0;
    *(float *)(this + 88) = v3;
    *(float *)(this + 92) = *(float *)(this + 80);
    *(float *)(this + 96) = *(float *)(this + 84);
    *(float *)(this + 100) = *(float *)(this + 88);
  }
  return result;
}
