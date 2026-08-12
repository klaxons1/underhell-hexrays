void __userpurge sub_101863E0(int a1@<ecx>, int a2@<ebp>, float *a3@<edi>, int a4@<esi>, _DWORD *a5)
{
  float *v5; // esi
  int v6; // eax
  int v7; // ecx
  float *v8; // edi
  unsigned __int16 *v9; // ecx
  unsigned int v10; // ecx
  int *v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  int *v16; // [esp+1Ch] [ebp-D4h]
  _BYTE *v17; // [esp+20h] [ebp-D0h]
  float v18[22]; // [esp+24h] [ebp-CCh] BYREF
  _BYTE v19[12]; // [esp+7Ch] [ebp-74h] BYREF
  float v20[16]; // [esp+88h] [ebp-68h] BYREF
  unsigned __int16 *v21; // [esp+C8h] [ebp-28h]
  int v22; // [esp+D4h] [ebp-1Ch] BYREF
  int v23; // [esp+E0h] [ebp-10h]
  int v24; // [esp+E4h] [ebp-Ch]
  void *v25; // [esp+E8h] [ebp-8h]
  void *retaddr; // [esp+F0h] [ebp+0h]

  v24 = a2;
  v25 = retaddr;
  v23 = a1;
  while ( 1 )
  {
    v5 = (float *)(*(int (__thiscall **)(_DWORD *, float *, int, int *, _BYTE *))(a5[80] + 8))(
                    a5 + 80,
                    a3,
                    a4,
                    v16,
                    v17);
    v6 = (*(int (__thiscall **)(_DWORD *))(a5[80] + 4))(a5 + 80);
    v7 = (int)a5;
    v8 = (float *)v6;
    if ( (a5[63] & 0x800) != 0 )
    {
      sub_100DAE60((int)a5);
      v7 = (int)a5;
    }
    if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(v7);
      v7 = (int)a5;
    }
    sub_1001F200(v18, (float *)(v7 + 580), (float *)(v7 + 580), v8, v5);
    sub_10265570(a5, 0);
    v17 = v19;
    v16 = &v22;
    a4 = 33701899;
    a3 = v18;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31F4 + 16))(dword_106B31F4);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v19, (int)v20, 255, 255, 0, 1, -1.0);
    if ( 1.0 == v20[8] )
      break;
    v9 = v21;
    if ( !v21 )
      break;
    if ( *((char **)v21 + 23) != "prop_physics" )
    {
      if ( !sub_100D6240(v21, "prop_physics") )
        break;
      v9 = v21;
    }
    sub_101129A0(v9 + 160, v9[178] | 4);
    sub_1025FAE0(v21);
  }
  v10 = *(_DWORD *)(v23 + 924);
  if ( v10 != -1 )
  {
    v11 = &off_1061BE18[4 * (*(_DWORD *)(v23 + 924) & 0xFFF) + 1];
    v12 = v10 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(v23 + 924) & 0xFFF) + 2] == v12 )
    {
      if ( *v11 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(v23 + 924) & 0xFFF) + 2] == v12 )
          v13 = *v11;
        else
          v13 = 0;
        (*(void (__thiscall **)(_DWORD *, int))(*a5 + 76))(a5, v13);
      }
    }
  }
}
