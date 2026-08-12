void __userpurge sub_10092EA0(int a1@<ecx>, int a2@<esi>, double a3@<st0>, float *a4)
{
  _DWORD *v5; // esi
  float *v6; // eax
  float *v7; // esi
  float *v8; // eax
  double v9; // rt0
  float v10; // [esp+8h] [ebp-14h]
  float v11; // [esp+Ch] [ebp-10h]
  _BYTE v12[4]; // [esp+10h] [ebp-Ch] BYREF
  float v13; // [esp+14h] [ebp-8h] BYREF
  float v14; // [esp+18h] [ebp-4h]

  sub_1002C160((_DWORD *)a1, a3, a4);
  if ( (0.0 == *(float *)(a1 + 2744) || *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 2744) > 30.0)
    && sub_10023D10((_DWORD *)a1, 10)
    && (*(int (__thiscall **)(float *))(*(_DWORD *)a4 + 220))(a4) != 6 )
  {
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 220))(a1, a2) != 3 )
      goto LABEL_14;
    if ( !*(_DWORD *)(dword_10698344 + 48) )
      goto LABEL_14;
    if ( *(int *)(dword_106B31C8 + 20) > 1 )
      goto LABEL_14;
    v5 = (_DWORD *)sub_10261B20();
    if ( !v5 )
      goto LABEL_14;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, float *))(*v5 + 876))(v5, a4) )
      goto LABEL_14;
    if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)a1 + 548))(a1, v5, 16449, 0) )
      goto LABEL_14;
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, float *, int, _DWORD))(*v5 + 548))(v5, a4, 16449, 0) )
      goto LABEL_14;
    v6 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v5 + 920))(v5, v12);
    v10 = *v6;
    v11 = v6[1];
    v7 = (float *)sub_10019640(v5);
    v8 = (float *)sub_10019640(a4);
    v9 = v8[1] - v7[1];
    v13 = *v8 - *v7;
    v14 = v9;
    sub_10018C80(&v13);
    if ( v14 * v11 + v13 * v10 <= -0.75 )
      (*(void (__thiscall **)(int, const char *, const char *, _DWORD, _DWORD))(*(_DWORD *)a1 + 2344))(
        a1,
        "TLK_WATCHOUT",
        "dangerloc:behind",
        0,
        0);
    else
LABEL_14:
      (*(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 2344))(
        a1,
        "TLK_STARTCOMBAT",
        0,
        0,
        0);
  }
}
