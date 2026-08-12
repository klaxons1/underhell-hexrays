int __thiscall sub_1007E8E0(int this, const void *a2)
{
  float v2; // eax
  double v4; // st7
  char v5; // fps^1
  double v6; // st6
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  int result; // eax
  int v11[45]; // [esp+Ch] [ebp-B8h] BYREF
  int v12; // [esp+C0h] [ebp-4h] BYREF

  HIWORD(v2) = HIWORD(dword_106B31C8);
  v4 = *(float *)(this + 68);
  v12 = -4;
  qmemcpy(v11, a2, sizeof(v11));
  v6 = *(float *)(dword_106B31C8 + 12);
  v7 = v6 < v4;
  v8 = 0;
  v9 = v6 == v4;
  BYTE1(v2) = v5;
  LOBYTE(v2) = v6 == v4;
  result = sub_10075430(*(_DWORD **)(this + 28), (float *)v11, v2);
  v12 = result;
  if ( result )
  {
    if ( !v11[24] )
    {
      *(_DWORD *)(this + 128) = -1;
      goto LABEL_7;
    }
    *(_DWORD *)(this + 128) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11[24] + 8))(v11[24]);
  }
  else
  {
    *(_DWORD *)(this + 128) = -1;
    *(_DWORD *)(*(_DWORD *)(this + 24) + 16) = -1;
  }
  result = v12;
LABEL_7:
  if ( result )
  {
    if ( result == 1 )
      goto LABEL_12;
  }
  else if ( !*(_BYTE *)(this + 16) )
  {
    result = sub_10078750(*(float **)(this + 20), (int)v11);
    v12 = result;
    goto LABEL_12;
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 48))(*(_DWORD *)(this + 20));
  result = v12;
LABEL_12:
  if ( result < 0 )
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)(this + 8) + 24))(this + 8, &v12);
    return v12;
  }
  return result;
}
