double __thiscall sub_10087090(int this, int a2)
{
  int (__thiscall *v2)(int); // edx
  unsigned __int16 v4; // ax
  int v5; // eax
  __int16 v6; // ax
  int v7; // eax
  float v9; // [esp+8h] [ebp-4h] BYREF

  v2 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 28);
  v9 = *(float *)(this + 212);
  v4 = v2(a2);
  if ( v4 == 0xFFFF )
  {
    v5 = 0;
  }
  else
  {
    v6 = *(_WORD *)(168 * v4 + *(_DWORD *)(this + 36) + 8);
    if ( (v6 & 4) != 0 )
      v7 = *(_BYTE *)(this + 208) != 0;
    else
      v7 = (v6 & 0x10) != 0 ? 3 : 0;
    v5 = v7 + 1;
  }
  (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)a2 + 96))(a2, &v9, v5);
  return v9;
}
