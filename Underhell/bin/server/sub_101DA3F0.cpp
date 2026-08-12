__int16 __thiscall sub_101DA3F0(int this, int a2)
{
  _DWORD *v2; // ebx
  unsigned __int16 v4; // ax
  int v5; // edi
  int v6; // edx
  __int16 result; // ax
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  sub_101D5780((_WORD *)this, a2, (unsigned __int16 *)&v8, &a2);
  v4 = sub_101D5870(this);
  v5 = v4;
  sub_101D9DA0(this, v4, v8, a2);
  v6 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  result = v5;
  if ( v6 + 36 * v5 != -8 )
  {
    *(_DWORD *)(v6 + 36 * v5 + 8) = *v2;
    *(_DWORD *)(v6 + 36 * v5 + 12) = v2[1];
    *(_DWORD *)(v6 + 36 * v5 + 16) = v2[2];
    *(_DWORD *)(v6 + 36 * v5 + 20) = v2[3];
    *(_DWORD *)(v6 + 36 * v5 + 24) = v2[4];
    *(_DWORD *)(v6 + 36 * v5 + 28) = v2[5];
    *(_DWORD *)(v6 + 36 * v5 + 32) = v2[6];
    return v5;
  }
  return result;
}
