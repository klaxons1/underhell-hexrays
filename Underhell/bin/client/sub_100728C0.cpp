// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_100728C0@<eax>(int a1@<ebp>, float *a2, int a3, int a4)
{
  int result; // eax
  int v5; // eax
  unsigned int v6; // eax
  int v7; // esi
  int v8; // eax
  float *v9; // eax
  double v10; // st7
  float v11[22]; // [esp+1Ch] [ebp-BCh] BYREF
  float v12[3]; // [esp+74h] [ebp-64h] BYREF
  float v13[3]; // [esp+80h] [ebp-58h] BYREF
  float v14[3]; // [esp+8Ch] [ebp-4Ch] BYREF
  void **v15; // [esp+98h] [ebp-40h] BYREF
  _DWORD v16[3]; // [esp+9Ch] [ebp-3Ch] BYREF
  int v17; // [esp+A8h] [ebp-30h]
  int v18; // [esp+ACh] [ebp-2Ch]
  float v19; // [esp+B0h] [ebp-28h] BYREF
  float v20; // [esp+B4h] [ebp-24h] BYREF
  int v21; // [esp+B8h] [ebp-20h]
  float v22; // [esp+BCh] [ebp-1Ch] BYREF
  int v23; // [esp+C0h] [ebp-18h]
  float v24; // [esp+C4h] [ebp-14h]
  int i; // [esp+C8h] [ebp-10h]
  int v26; // [esp+CCh] [ebp-Ch]
  void *v27; // [esp+D0h] [ebp-8h]
  void *retaddr; // [esp+D8h] [ebp+0h]

  v26 = a1;
  v27 = retaddr;
  result = sub_100422D0();
  v21 = result;
  if ( result )
  {
    sub_101EDFB0(a3, v14);
    v13[0] = v14[0] * 160.0 + *a2;
    v13[1] = v14[1] * 160.0 + a2[1];
    v13[2] = 160.0 * v14[2] + a2[2];
    sub_1000E430(v11, a2, v13);
    memset(v16, 0, sizeof(v16));
    v17 = 0;
    v18 = 0;
    v15 = &CVGuiScreenEnumerator::`vftable';
    (*(void (__thiscall **)(int, int, float *, _DWORD, _DWORD, void ***))(*(_DWORD *)dword_10413184 + 52))(
      dword_10413184,
      128,
      a2,
      80.0,
      0,
      &v15);
    v24 = 2.0;
    v5 = v17 - 1;
    v23 = 0;
    for ( i = v17 - 1; v5 >= 0; i = v5 )
    {
      v6 = *(_DWORD *)(v16[0] + 4 * v5);
      if ( v6 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v6 & 0xFFF) + 2) != v6 >> 12 )
        v7 = 0;
      else
        v7 = *((_DWORD *)off_103DCD74 + 4 * (v6 & 0xFFF) + 1);
      if ( (*(_DWORD *)(v7 + 1244) & 4) == 0
        && !sub_10070CF0((char *)v7, a2)
        && (*(_BYTE *)(v7 + 1244) & 1) != 0
        && sub_10070FC0((_DWORD *)v7, a4) )
      {
        if ( *(_BYTE *)(v7 + 1257) )
        {
          if ( (*(_DWORD *)(v7 + 1244) & 0x10) == 0 || (v8 = sub_10070DC0((_DWORD *)v7), v8 == v21) )
          {
            sub_100392A0((char *)v7, 0, 0, (int)v12);
            v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 36))(v7);
            v10 = (*a2 - *v9) * v12[0] + (a2[1] - v9[1]) * v12[1] + (a2[2] - v9[2]) * v12[2];
            if ( v10 >= 0.0
              && v10 <= 80.0
              && (unsigned __int8)sub_10070CA0((float *)v7, (int)v11, (int)&v19, (int)&v22, (int)&v20)
              && v19 >= 0.0
              && v22 >= 0.0
              && v19 <= 1.0
              && v22 <= 1.0
              && v20 < (double)v24 )
            {
              v24 = v20;
              v23 = v7;
            }
          }
        }
      }
      v5 = i - 1;
    }
    sub_1011A810(v16);
    return v23;
  }
  return result;
}
