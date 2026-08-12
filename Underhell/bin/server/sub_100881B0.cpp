int __usercall sub_100881B0@<eax>(int a1@<ebp>, float *a2, float *a3, float a4, int a5)
{
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  float *v10; // eax
  double v11; // st7
  float *v12; // eax
  float v14[22]; // [esp+24h] [ebp-FCh] BYREF
  _BYTE v15[12]; // [esp+7Ch] [ebp-A4h] BYREF
  float v16[20]; // [esp+88h] [ebp-98h] BYREF
  int v17; // [esp+D8h] [ebp-48h] BYREF
  int v18; // [esp+E4h] [ebp-3Ch] BYREF
  int v19; // [esp+F0h] [ebp-30h] BYREF
  float v20; // [esp+FCh] [ebp-24h]
  float v21; // [esp+100h] [ebp-20h]
  float v22; // [esp+104h] [ebp-1Ch]
  float v23; // [esp+108h] [ebp-18h]
  float v24; // [esp+10Ch] [ebp-14h]
  int v25; // [esp+110h] [ebp-10h]
  int v26; // [esp+114h] [ebp-Ch]
  void *v27; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v26 = a1;
  v27 = retaddr;
  v24 = a4;
  v5 = dword_106935D8;
  v6 = *(_DWORD *)(dword_106935D8 + 4);
  v7 = 0;
  v25 = 0;
  if ( v6 <= 0 )
    return 0;
  do
  {
    if ( v7 < 0 || v7 >= v6 )
    {
      ++dword_10691DE0;
      v8 = 0;
    }
    else
    {
      v8 = *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4 * v7);
    }
    if ( *(_DWORD *)(v8 + 60) != 1 )
    {
      if ( !a5
        || (v7 < 0 || v7 >= *(_DWORD *)(v5 + 4)
          ? (++dword_10691DE0, v9 = 0)
          : (v9 = *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4 * v7)),
            a5 == *(_DWORD *)(v9 + 60)) )
      {
        if ( v7 < 0 || v7 >= *(_DWORD *)(v5 + 4) )
          ++dword_10691DE0;
        v10 = (float *)sub_1008D160(&v17, dword_10693634);
        v21 = *v10 - *a2;
        v22 = v10[1] - a2[1];
        v23 = v10[2] - a2[2];
        off_10689714();
        v11 = a3[1] * v22 + *a3 * v21 + a3[2] * v23;
        v20 = v11;
        if ( v11 > v24 )
        {
          if ( v7 < 0 || v7 >= *(_DWORD *)(v5 + 4) )
            ++dword_10691DE0;
          v12 = (float *)sub_1008D160(&v18, dword_10693634);
          sub_1001F180(v14, a2, v12);
          sub_10265570(0, 0);
          (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v14,
            16449,
            &v19,
            v15);
          if ( *(_DWORD *)(dword_106CE63C + 48) )
            sub_101A0AD0((int)v15, (int)v16, 255, 0, 0, 1, 5.0);
          if ( 1.0 == v16[8] )
          {
            v24 = v20;
            if ( v7 < 0 || v7 >= *(_DWORD *)(v5 + 4) )
            {
              ++dword_10691DE0;
              v25 = 0;
            }
            else
            {
              v25 = *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4 * v7);
            }
          }
        }
      }
    }
    v6 = *(_DWORD *)(v5 + 4);
    ++v7;
  }
  while ( v7 < v6 );
  return v25;
}
