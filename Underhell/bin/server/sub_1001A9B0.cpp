double __userpurge sub_1001A9B0@<st0>(int a1@<ecx>, int a2@<edi>, int a3, char a4, float a5, float a6)
{
  unsigned __int8 (__thiscall *v7)(int, unsigned int *); // edx
  int *v8; // eax
  int v9; // eax
  unsigned int v11; // [esp+44h] [ebp-24h] BYREF
  int v12[3]; // [esp+48h] [ebp-20h] BYREF
  float v13; // [esp+54h] [ebp-14h]
  float v14; // [esp+58h] [ebp-10h]
  float v15; // [esp+5Ch] [ebp-Ch]
  char v16; // [esp+60h] [ebp-8h]
  int v17; // [esp+64h] [ebp-4h]

  *(float *)v12 = flt_10689730;
  *(float *)&v12[1] = flt_10689734;
  *(float *)&v12[2] = flt_10689738;
  v11 = -1;
  v13 = ((double (__thiscall *)(int, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          LODWORD(a5),
          LODWORD(a6),
          a2);
  v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.30000001,
          0.5);
  v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.2,
          0.40000001);
  v7 = *(unsigned __int8 (__thiscall **)(int, unsigned int *))(*(_DWORD *)a1 + 2264);
  v16 = a4;
  v17 = a3;
  if ( !v7(a1, &v11) && !(*(unsigned __int8 (__thiscall **)(int, unsigned int *))(*(_DWORD *)a1 + 2268))(a1, &v11) )
    (*(void (__thiscall **)(int, unsigned int *, _DWORD, _DWORD))(*(_DWORD *)a1 + 2272))(
      a1,
      &v11,
      LODWORD(a5),
      LODWORD(a6));
  (*(void (__thiscall **)(int, unsigned int *))(*(_DWORD *)a1 + 2280))(a1, &v11);
  if ( v11 != -1 && (v8 = &off_1061BE18[4 * (v11 & 0xFFF) + 1], off_1061BE18[4 * (v11 & 0xFFF) + 2] == v11 >> 12) && *v8 )
  {
    if ( off_1061BE18[4 * (v11 & 0xFFF) + 2] == v11 >> 12 )
      v9 = *v8;
    else
      v9 = 0;
    sub_10074200(v9, v14, v13, v15);
    return v13;
  }
  else
  {
    sub_10074380((int)v12, v14, v13, v15);
    return v13;
  }
}
