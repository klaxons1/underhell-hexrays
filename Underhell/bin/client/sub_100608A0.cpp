void __thiscall sub_100608A0(int this)
{
  double v2; // st6
  double v3; // st5
  double v4; // st4
  double v5; // st5
  double v6; // st7
  int v7; // eax
  int v8; // ebx
  float *v9; // edi
  float *v10; // eax
  float *v11; // edi
  float *v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // ecx
  float v16[3]; // [esp+10h] [ebp-38h] BYREF
  float v17[3]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v18[3]; // [esp+28h] [ebp-20h] BYREF
  int v19[3]; // [esp+34h] [ebp-14h] BYREF
  int v20; // [esp+40h] [ebp-8h]
  float v21; // [esp+44h] [ebp-4h]

  if ( *(_BYTE *)(this + 2072) )
  {
    v2 = *(float *)(this + 2040) + *(float *)(this + 2028);
    v3 = *(float *)(this + 2044) + *(float *)(this + 2032);
    v4 = (*(float *)(this + 2036) + *(float *)(this + 2024)) * 0.5;
    *(float *)v18 = v4;
    *(float *)&v18[1] = v2 * 0.5;
    v5 = 0.5 * v3;
    *(float *)&v18[2] = v5;
    *(float *)v19 = v4 - *(float *)(this + 2024);
    *(float *)&v19[1] = v2 * 0.5 - *(float *)(this + 2028);
    *(float *)&v19[2] = v5 - *(float *)(this + 2032);
    v6 = off_103EDFEC();
    v7 = *(_DWORD *)(this + 1268);
    v21 = v6;
    v20 = 1;
    if ( v7 - 1 > 1 )
    {
      v8 = 36;
      do
      {
        v9 = (float *)(v8 + *(_DWORD *)(this + 1264));
        v10 = sub_100607C0(v17, (int)v19, v9, (float *)v18, v21);
        *v9 = *v10;
        v9[1] = v10[1];
        v9[2] = v10[2];
        v11 = (float *)(v8 + *(_DWORD *)(this + 1264));
        v12 = sub_100607C0(v16, (int)v19, v11 + 6, (float *)v18, v21);
        v11[6] = *v12;
        v8 += 36;
        v11[7] = v12[1];
        v13 = v12[2];
        v14 = v20;
        v11[8] = v13;
        v15 = *(_DWORD *)(this + 1268) - 1;
        v20 = v14 + 1;
      }
      while ( v14 + 1 < v15 );
    }
  }
}
