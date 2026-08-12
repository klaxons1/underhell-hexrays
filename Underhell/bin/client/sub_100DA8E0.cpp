int __thiscall sub_100DA8E0(int this, int a2, float a3, float *a4, float *a5)
{
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  double v9; // st6
  unsigned __int16 v10; // ax
  int v11; // esi
  void *v12; // edi
  _DWORD v14[23]; // [esp+8h] [ebp-5Ch] BYREF

  v6 = *(unsigned __int16 *)(this + 12);
  if ( v6 == 0xFFFF )
  {
LABEL_5:
    *(float *)&v14[1] = a3;
    *(float *)&v14[2] = *a4;
    v9 = a4[1];
    v14[0] = a2;
    *(float *)&v14[3] = v9;
    *(float *)&v14[4] = a4[2];
    v14[7] = v14[4];
    v14[5] = v14[2];
    *(float *)&v14[6] = v9;
    *(float *)&v14[8] = 0.0;
    *(float *)&v14[9] = 0.0;
    *(float *)&v14[10] = 0.0;
    *(float *)&v14[11] = 0.0;
    *(float *)&v14[12] = 0.0;
    *(float *)&v14[13] = 0.0;
    *(float *)&v14[14] = *a5;
    *(float *)&v14[15] = a5[1];
    *(float *)&v14[16] = a5[2];
    *(float *)&v14[17] = 0.0;
    *(float *)&v14[18] = 0.0;
    *(float *)&v14[19] = 0.0;
    *(float *)&v14[20] = 0.0;
    *(float *)&v14[21] = 0.0;
    *(float *)&v14[22] = 0.0;
    v10 = sub_100DA680((int *)this, 0);
    v11 = v10;
    sub_100DA830(this, 0xFFFFu, v10);
    v12 = (void *)(*(_DWORD *)this + 96 * v11);
    if ( v12 )
      qmemcpy(v12, v14, 0x5Cu);
    if ( v11 == 0xFFFF )
      return 0;
    else
      return *(_DWORD *)this + 96 * v11;
  }
  else
  {
    v7 = *(_DWORD *)this;
    while ( 1 )
    {
      v8 = 96 * (unsigned __int16)v6;
      if ( *(_DWORD *)(v8 + v7) == a2 )
        return v7 + 96 * (unsigned __int16)v6;
      v6 = *(unsigned __int16 *)(v8 + v7 + 94);
      if ( v6 == 0xFFFF )
        goto LABEL_5;
    }
  }
}
