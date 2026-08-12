char __thiscall sub_100AF9C0(int this, int a2)
{
  int v3; // esi
  int *v4; // ebx
  int v5; // edx
  int v6; // ecx
  _BYTE *v7; // esi
  float *v8; // edi
  double v9; // st7
  _DWORD v11[2]; // [esp+8h] [ebp-Ch] BYREF
  int *v12; // [esp+10h] [ebp-4h]

  if ( !a2 )
    return 1;
  v11[0] = a2;
  *(float *)&v11[1] = -1.0;
  v12 = 0;
  v3 = sub_100ADBC0((unsigned __int8 (__cdecl **)(int, int))(this + 8), (int)v11);
  if ( v12 )
  {
    v4 = v12;
    sub_10068150(v12);
    sub_10184660(v4);
  }
  v12 = 0;
  if ( v3 == -1 )
    return 1;
  v5 = *(_DWORD *)(this + 12);
  v6 = 7 * v3;
  v7 = *(_BYTE **)(v5 + 28 * v3 + 24);
  v8 = (float *)(v5 + 4 * v6 + 20);
  if ( !v7 )
    return 1;
  if ( !sub_100651D0(v7)
    && ((v9 = sub_10065870((int)v7), 0.0 == v9) || -1.0 == *v8 || v9 + *v8 <= *(float *)(dword_106B31C8 + 12)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
