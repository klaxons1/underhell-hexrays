int __thiscall sub_100DF7F0(int this, int a2)
{
  int v3; // eax
  double v4; // st7
  int v6; // [esp+4h] [ebp-Ch] BYREF
  __int16 v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ah] [ebp-6h]

  v3 = sub_10076700((int)"GAMETITLE");
  *(_DWORD *)(this + 17380) = v3;
  if ( v3 )
  {
    v4 = *((float *)off_103DC81C + 3);
    *(_BYTE *)(this + 17384) = 1;
    *(float *)(this + 17376) = v4;
  }
  v7 = 17;
  v8 = -16777216;
  v6 = 33556992;
  ((void (__thiscall *)(void ***, int *))(*off_103E77E8)[4])(off_103E77E8, &v6);
  return Msg("%i gametitle fade\n", *((_DWORD *)off_103DC81C + 1));
}
