char __userpurge sub_100F7CC0@<al>(int *a1@<ecx>, double a2@<st0>, int a3, int a4)
{
  int v5; // eax
  __int16 *v6; // ebx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // eax
  float v24; // [esp+18h] [ebp-18h]
  int v25; // [esp+1Ch] [ebp-14h]
  __int16 *v26; // [esp+2Ch] [ebp-4h]

  v5 = sub_100CF460(a1);
  v6 = (__int16 *)a3;
  v26 = (__int16 *)v5;
  if ( !sub_100CF8C0((unsigned int *)a1, a3, a4) )
    return 0;
  (*(void (__thiscall **)(__int16 *, int *))(*(_DWORD *)v6 + 888))(v6, a1);
  v7 = sub_101E7EA0(0);
  if ( (*(unsigned __int8 (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 876))(v6) )
  {
    if ( v7 )
    {
      v8 = sub_101E7EA0(0);
      v9 = sub_100BF520(v8, "Silencer");
      sub_100C1600(v7, v9, 0);
      v25 = 1;
LABEL_7:
      v12 = sub_101E7EA0(0);
      v13 = sub_100BF520(v12, "Silencer");
      sub_100C1600(v7, v13, v25);
    }
  }
  else if ( v7 )
  {
    v10 = sub_101E7EA0(0);
    v11 = sub_100BF520(v10, "Silencer");
    sub_100C1600(v7, v11, 1);
    v25 = 0;
    goto LABEL_7;
  }
  if ( v26 && *(_DWORD *)(sub_100D0CC0(v26) + 440) == 5 )
    (*(void (__thiscall **)(int *, __int16 *, _DWORD, _DWORD))(*a1 + 960))(a1, v26, 0, 0);
  if ( !*((_BYTE *)a1 + 2121) )
    goto LABEL_20;
  *((_BYTE *)a1 + 2123) = 0;
  if ( sub_100D0E00(v6) || *(_BYTE *)(sub_100D0CC0(v6) + 80) )
    goto LABEL_20;
  if ( *((_BYTE *)a1 + 2122) )
  {
    a2 = *((float *)a1 + 532);
    sub_101E9580(*((float *)a1 + 532), 0, 0, 0);
    v14 = sub_101E7EA0(1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 836))(v14, 2);
    HIBYTE(a3) = 0;
    sub_100F7B70((_BYTE *)a1 + 2122, (_BYTE *)&a3 + 3);
  }
  else
  {
    if ( *((_BYTE *)a1 + 5040) || *((_BYTE *)a1 + 2172) )
      goto LABEL_20;
    v15 = sub_101E7EA0(1);
    sub_101AB0C0(v15);
    (*(void (__thiscall **)(int *))(*a1 + 1272))(a1);
    v16 = sub_101E7EA0(1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 836))(v16, 2);
    *((_BYTE *)a1 + 2172) = *((_BYTE *)a1 + 2172) == 0;
  }
  v17 = sub_101E7EA0(1);
  sub_100D18C0(v17);
  v24 = a2 * 0.2 + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0(a1, v24, (int)"FlashLightContext");
LABEL_20:
  if ( v26 )
  {
    v18 = *a1;
    v19 = sub_100CF460(a1);
    if ( (*(unsigned __int8 (__thiscall **)(int *, __int16 *, int))(v18 + 1240))(a1, v26, v19) )
    {
      v20 = *a1;
      v21 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v26 + 1000))(v26);
      (*(void (__thiscall **)(int *, int))(v20 + 1236))(a1, v21);
    }
  }
  v22 = sub_101E7EA0(a4);
  if ( v22 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v22 + 864))(v22, 32);
  sub_101EDFB0(a1);
  return 1;
}
