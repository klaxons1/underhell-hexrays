int __usercall sub_10252620@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>)
{
  int result; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // ebx
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // [esp+50h] [ebp-E4h] BYREF
  int v18; // [esp+54h] [ebp-E0h] BYREF
  int v19; // [esp+58h] [ebp-DCh] BYREF
  int v20; // [esp+5Ch] [ebp-D8h] BYREF
  int v21; // [esp+60h] [ebp-D4h] BYREF
  _DWORD v22[2]; // [esp+68h] [ebp-CCh] BYREF
  BOOL v23; // [esp+70h] [ebp-C4h]
  int v24; // [esp+78h] [ebp-BCh]
  int v25; // [esp+7Ch] [ebp-B8h]
  _BYTE v26[64]; // [esp+80h] [ebp-B4h] BYREF
  wchar_t Buffer[58]; // [esp+C0h] [ebp-74h] BYREF

  (*(void (__thiscall **)(_DWORD *))(*a1 + 892))(a1);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 172))(dword_1047CA68);
  v22[1] = result;
  if ( result )
  {
    v6 = sub_100DDA40(392);
    if ( v6 )
      v7 = sub_1026D6B0(v6, (int)a1, "IMECandidatesMenu");
    else
      v7 = 0;
    a1[230] = v7;
    v8 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047CA68 + 188))(dword_1047CA68, a4, a3, a2);
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 184))(dword_1047CA68);
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 180))(dword_1047CA68);
    v23 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 200))(dword_1047CA68) != 0;
    if ( v10 < v8 || v10 >= v8 + v9 )
    {
      v8 = v9 * (v10 / v9);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 204))(dword_1047CA68, v8);
    }
    v25 = v8 + v9;
    if ( v8 < v8 + v9 )
    {
      v11 = v23 - v8;
      do
      {
        if ( v8 < v24 )
        {
          (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_1047CA68 + 176))(
            dword_1047CA68,
            v8,
            v26,
            64);
          _snwprintf(Buffer, 0x3Fu, L"%i %s", v8 + v11, v26);
          v12 = (*(int (__thiscall **)(_DWORD, const char *, wchar_t *, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)a1[230]
                                                                                                 + 788))(
                  a1[230],
                  "Candidate",
                  Buffer,
                  0,
                  a1,
                  0);
          if ( v8 == v10 )
            sub_1026C340(v12);
        }
        ++v8;
      }
      while ( v8 < v25 );
    }
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a1[230] + 124))(a1[230], 1);
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)a1[230] + 156))(a1[230], a1);
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)a1[230] + 172))(a1[230], a1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a1[230] + 524))(a1[230], 0);
    (*(void (__thiscall **)(_DWORD *, _DWORD, int *, int *))(*a1 + 1004))(a1, a1[70], &v18, &v17);
    v17 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))a1);
    sub_10236F10((int (__thiscall ***)(void *, int *, int *))a1, &v18, &v17);
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)a1[230] + 244))(a1[230], 1, 0);
    sub_102361D0((int (__thiscall ***)(void *, int, int))a1[230], (int)&v21, (int)&v19);
    (*(void (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, v22, &v20);
    if ( v22[0] - v21 <= v18 )
    {
      if ( v20 - v19 > v17 )
        return sub_10236140((int (__thiscall ***)(void *, int, int))a1[230], v18 - v21, v17);
      v16 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))a1);
      v15 = v17 - v19 - v16;
      v14 = v18 - v21;
    }
    else
    {
      if ( v20 - v19 > v17 )
        return sub_10236140((int (__thiscall ***)(void *, int, int))a1[230], v18, v17);
      v13 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))a1);
      v14 = v18;
      v15 = v17 - v19 - v13;
    }
    return sub_10236140((int (__thiscall ***)(void *, int, int))a1[230], v14, v15);
  }
  return result;
}
