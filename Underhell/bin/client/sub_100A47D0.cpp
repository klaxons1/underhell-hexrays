// bad sp value at call has been detected, the output may be wrong!
bool __usercall sub_100A47D0@<al>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int *a4,
        int *a5,
        float *a6,
        float a7,
        float a8,
        _DWORD *a9,
        float *a10,
        char a11,
        float *a12)
{
  int (__thiscall *v12)(_DWORD *, _DWORD); // edx
  int v13; // eax
  int v14; // eax
  void (__thiscall *v15)(int, int *, float *, int, int, int); // edx
  void (__thiscall *v16)(_DWORD *, int *); // edx
  int v17; // eax
  void (__thiscall *v18)(int, float *, int, _DWORD *); // eax
  float v20[20]; // [esp-70h] [ebp-7Ch] BYREF
  float v21[3]; // [esp-20h] [ebp-2Ch] BYREF
  float v22; // [esp-14h] [ebp-20h]
  float v23; // [esp-10h] [ebp-1Ch]
  int v24; // [esp-Ch] [ebp-18h]
  int v25; // [esp-8h] [ebp-14h]
  float *v26; // [esp-4h] [ebp-10h]
  _DWORD v27[3]; // [esp+0h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v27[0] = a1;
  v27[1] = retaddr;
  memset(a10, 0, 0x54u);
  a10[11] = 1.0;
  v22 = *(float *)a4 - *(float *)a5;
  v23 = *((float *)a4 + 1) - *((float *)a5 + 1);
  *(float *)&v24 = *((float *)a4 + 2) - *((float *)a5 + 2);
  off_103EDFEC();
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*a9 + 428))(a9, a2, a3) )
    HIBYTE(v26) = sub_100A4700((int)v27, *a4, a4[1], a4[2], *a5, a5[1], a5[2], a7);
  if ( (a11 & 1) != 0 )
  {
    sub_1000E430(v20, (float *)a5, v21);
    if ( (*(int (__thiscall **)(_DWORD *))(a9[2] + 36))(a9 + 2) || a8 == 0.0 )
    {
      v18 = *(void (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_104131A0 + 8);
      v26 = a10;
      v18(dword_104131A0, v20, 1174421507, a9);
    }
    else
    {
      v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413190 + 16))(dword_10413190, LODWORD(a8) - 1);
      (*(void (__thiscall **)(int, float *, int, int, float *))(*(_DWORD *)dword_104131A0 + 12))(
        dword_104131A0,
        v20,
        1174421507,
        v17,
        a10);
    }
  }
  else
  {
    v12 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a9 + 448);
    v26 = a6;
    v13 = v12(a9, LODWORD(a7));
    v14 = (*(int (__thiscall **)(void *, int, float *))(*(_DWORD *)off_103DDBCC + 4))(off_103DDBCC, v13, a6);
    v25 = (**(int (__thiscall ***)(void *, int))off_103DDBCC)(off_103DDBCC, v14);
    if ( v25 == -1 )
      return 0;
    if ( (*(int (__thiscall **)(_DWORD *, float *))(a9[2] + 36))(a9 + 2, v26) || a8 == 0.0 )
    {
      v16 = *(void (__thiscall **)(_DWORD *, int *))(*a9 + 424);
      v26 = a12;
      v25 = (int)a10;
      v24 = 1;
      v23 = *(float *)&a10;
      v22 = a8;
      LODWORD(v21[2]) = a4;
      LODWORD(v21[1]) = v21;
      v16(a9, a5);
    }
    else
    {
      v15 = *(void (__thiscall **)(int, int *, float *, int, int, int))(*(_DWORD *)dword_10413190 + 24);
      v26 = a10;
      v15(dword_10413190, a5, v21, LODWORD(a8) - 1, v25, 1);
    }
  }
  return 1.0 != a10[11] && (!HIBYTE(v26) || (a11 & 2) != 0);
}
