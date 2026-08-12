int __thiscall sub_102A8FB0(int this)
{
  unsigned int *v2; // ebx
  int v3; // ecx
  _DWORD *v4; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int *v15; // [esp+18h] [ebp-4h]

  v2 = (unsigned int *)(this + 40);
  v15 = (unsigned int *)(this + 40);
  if ( *(_DWORD *)(this + 40) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 2] != *(_DWORD *)(this + 40) >> 12 )
  {
    v3 = 0;
  }
  else
  {
    v3 = off_1061BE18[4 * (*(_DWORD *)(this + 40) & 0xFFF) + 1];
  }
  v4 = (_DWORD *)sub_102A9F50(v3);
  *(float *)(this + 24) = *(float *)(dword_106B31C8 + 12) + 4.0;
  if ( sub_102A8CB0((int *)this) )
    return 100000;
  (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 4) + 1808))(
    *(_DWORD *)(this + 4),
    v4,
    0.5,
    5.0,
    0.0);
  if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 20) )
    return 0;
  sub_100218B0(*(_DWORD **)(this + 4), (int)v4);
  v6 = *(_DWORD *)(this + 28);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v7 = sub_1026A890(v2);
      sub_102A9ED0(v7, 2);
    }
  }
  else if ( *v2 == -1 || off_1061BE18[4 * (*v2 & 0xFFF) + 2] != *v2 >> 12 )
  {
    sub_102A9ED0(0, 1);
  }
  else
  {
    sub_102A9ED0(off_1061BE18[4 * (*v2 & 0xFFF) + 1], 1);
  }
  v8 = *(_DWORD *)(this + 28);
  if ( v8 < 4 )
    *(_DWORD *)(this + 28) = v8 + 1;
  if ( *(int *)(this + 28) >= 4 )
  {
    if ( !*(_BYTE *)(this + 32) )
    {
      v9 = *(_DWORD **)(this + 4);
      *(_BYTE *)(this + 32) = 1;
      sub_100285C0(v9, v4, 1);
      sub_1002B660(*(_DWORD *)(this + 4), 3);
      v10 = *(_DWORD *)(this + 4);
      if ( (v4[63] & 0x800) != 0 )
        sub_100DAE60((int)v4);
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)v10 + 1876))(v10, v4, v4 + 145, 0);
      sub_102A87D0((int *)this, 1);
      v11 = sub_1026A890(v15);
      sub_102A9ED0(v11, 4);
      return 12;
    }
    v12 = sub_1026A890(v2);
    if ( !(unsigned __int8)sub_102AA0E0(v12) )
      return 17;
  }
  if ( *(_DWORD *)(this + 28) != 3 )
    return 100001;
  v13 = sub_1026A890(v2);
  sub_102A9ED0(v13, 3);
  sub_100218B0(*(_DWORD **)(this + 4), (int)v4);
  sub_102A87D0((int *)this, 1);
  v14 = sub_1026A890(v2);
  if ( (unsigned __int8)sub_102AA0E0(v14) )
    return 100001;
  else
    return 100002;
}
