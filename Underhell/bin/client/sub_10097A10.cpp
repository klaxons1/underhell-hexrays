int __userpurge sub_10097A10@<eax>(_BYTE *a1@<ecx>, int a2@<edi>, float *a3)
{
  int result; // eax
  double v5; // st7
  int v6; // eax
  unsigned __int16 v8; // ax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  unsigned __int8 *v13; // esi
  double v14; // st7
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  float v18[3]; // [esp+4h] [ebp-20h] BYREF
  float v19[3]; // [esp+10h] [ebp-14h] BYREF
  _BYTE *v20; // [esp+1Ch] [ebp-8h] BYREF
  int v21; // [esp+20h] [ebp-4h]
  int v22; // [esp+2Ch] [ebp+8h]

  if ( *(_DWORD *)(dword_1042CCEC + 48) == 1 )
  {
    result = (int)a3;
    a3[2] = 1.0;
    a3[1] = 1.0;
    *a3 = 1.0;
  }
  else
  {
    v19[0] = 1.0;
    v19[1] = 0.0;
    v19[2] = 0.0;
    (*(void (__thiscall **)(int, _BYTE *, float *, float *, int))(*(_DWORD *)dword_1041315C + 180))(
      dword_1041315C,
      a1 + 4,
      v19,
      v18,
      a2);
    v5 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_1041315C + 176))(dword_1041315C, 0);
    v6 = (char)a1[31];
    v21 = (unsigned __int8)a1[28];
    *a3 = (double)v21 * flt_103EE280[v6] * v5 + v18[0];
    a3[1] = (double)(unsigned __int8)a1[29] * flt_103EE280[(char)a1[31]] * v5 + v18[1];
    a3[2] = v5 * ((double)(unsigned __int8)a1[30] * flt_103EE280[(char)a1[31]]) + v18[2];
    if ( (a1[32] & 0x10) != 0 )
    {
      v20 = a1 - 4;
      v8 = sub_10096190(&off_103DDC60, (int)&v20);
      if ( v8 != 0xFFFF )
      {
        v9 = 2 * v8;
        v10 = *(unsigned __int8 *)(dword_103DDC64 + 8 * v9 + 15);
        v11 = *(_DWORD *)(dword_103DDC64 + 8 * v9 + 12) & 0xFFFFFF;
        if ( v10 )
        {
          v12 = 5 * v11;
          v22 = v10;
          do
          {
            v13 = (unsigned __int8 *)(v12 + dword_1042CD70);
            v14 = ((double (__stdcall *)(_DWORD))*(_DWORD *)(*(_DWORD *)dword_1041315C + 176))(*(unsigned __int8 *)(v12 + dword_1042CD70 + 4));
            if ( 0.0 != v14 )
            {
              v15 = (char)v13[3];
              v21 = *v13;
              *a3 = (double)v21 * flt_103EE280[v15] * v14 + *a3;
              v16 = (char)v13[3];
              v21 = v13[1];
              a3[1] = (double)v21 * flt_103EE280[v16] * v14 + a3[1];
              v17 = (char)v13[3];
              v21 = v13[2];
              a3[2] = v14 * ((double)v21 * flt_103EE280[v17]) + a3[2];
            }
            v12 += 5;
            --v22;
          }
          while ( v22 );
        }
      }
    }
    return (*(int (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 172))(dword_1041315C, a3);
  }
  return result;
}
