int __thiscall sub_101C85B0(int this, int a2, float a3)
{
  int v4; // edi
  unsigned __int16 v5; // ax
  int v6; // ecx
  _DWORD *v7; // ecx
  int v8; // esi
  float v10[2]; // [esp+0h] [ebp-20h] BYREF
  _DWORD v11[5]; // [esp+8h] [ebp-18h] BYREF
  int v12; // [esp+1Ch] [ebp-4h] BYREF

  v10[0] = a3;
  memset(v11, 0, sizeof(v11));
  LOWORD(v4) = sub_101C5FF0((_WORD *)this, (int)v10);
  if ( (unsigned __int16)v4 == 0xFFFF )
  {
    sub_101C5570((_WORD *)this, (int)v10, (unsigned __int16 *)&v12, &a3);
    v5 = sub_101C7F90(this);
    v4 = v5;
    sub_101C75D0(this, v5, v12, SLOBYTE(a3));
    v6 = *(_DWORD *)(this + 4);
    ++*(_WORD *)(this + 18);
    v7 = (_DWORD *)(v6 + 36 * v4 + 8);
    if ( v7 )
      sub_101C7ED0(v7, (int)v10);
  }
  v8 = *(_DWORD *)(this + 4) + 36 * (unsigned __int16)v4 + 8;
  sub_102375F0(v11);
  return v8;
}
